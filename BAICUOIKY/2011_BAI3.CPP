#include <bits/stdc++.h>
using namespace std;

// Lớp cơ sở abstract "MayLoc" định nghĩa giao diện chung cho các máy lọc
class MayLoc {
public:
    MayLoc(int don_gia_thue, string cong_suat_loc) : don_gia_thue(don_gia_thue), cong_suat_loc(cong_suat_loc) {}
    virtual ~MayLoc() {}

    // Phương thức thuần ảo: nhập thông tin cho máy lọc
    virtual void nhap() = 0;

    // Phương thức thuần ảo: tính lượng nước lọc được
    virtual float tinhLuongNuoc() = 0;

    // Phương thức thuần ảo: tính chi phí sử dụng máy
    virtual long tinhChiPhi() = 0;

protected:
    int don_gia_thue;       // Đơn giá thuê của máy
    string cong_suat_loc;   // Công suất lọc của máy
};

// Lớp con "MayLyTam" kế thừa từ lớp "MayLoc" và triển khai các phương thức thuần ảo
class MayLyTam : public MayLoc {
public:
    MayLyTam() : MayLoc(50000, "Khong doi") {}

    void nhap() override {
        // Phương thức không làm gì cả vì máy lọc loại này không cần nhập thông tin
    }

    float tinhLuongNuoc() override {
        return 0.0;  // Lượng nước lọc được là 0 do máy không hoạt động
    }

    long tinhChiPhi() override {
        return 0;  // Chi phí sử dụng máy là 0 do máy không hoạt động
    }
};

// Lớp con "MayXucTac" kế thừa từ lớp "MayLoc" và triển khai các phương thức thuần ảo
class MayXucTac : public MayLoc {
private:
    int thoi_gian_su_dung;  // Thời gian sử dụng máy (giờ)
    int luong_hoa_chat;      // Lượng hóa chất sử dụng

public:
    MayXucTac() : MayLoc(80000, "Thay doi"), thoi_gian_su_dung(0), luong_hoa_chat(0) {}

    void nhap() override {
        cout << "Nhap thoi gian su dung (gio): ";
        cin >> thoi_gian_su_dung;
        cout << "Nhap luong hoa chat: ";
        cin >> luong_hoa_chat;
    }

    float tinhLuongNuoc() override {
        return thoi_gian_su_dung;  // Lượng nước lọc được là thời gian sử dụng
    }

    long tinhChiPhi() override {
        return luong_hoa_chat * 10000 + thoi_gian_su_dung * 20000;  // Chi phí sử dụng máy
    }
};

// Lớp "DanhSachMayLoc" quản lý một danh sách đa hình các máy lọc
class DanhSachMayLoc {
private:
    vector<MayLoc*> _danhSach;  // Danh sách các máy lọc
    int _N;                     // Số lượng máy lọc

public:
    DanhSachMayLoc() : _N(0) {}

    ~DanhSachMayLoc() {
        for (MayLoc* may : _danhSach) {
            delete may;  // Giải phóng bộ nhớ cho từng máy lọc
        }
    }

    // Phương thức: nhập thông tin cho từng máy lọc trong danh sách
    void nhap() {
        cout << "Nhap so luong may loc: ";
        cin >> this->_N;

        for (int i = 0; i < _N; i++) {
            int choice = 0;
            cout << "Nhap loai may: 1 = may ly tam, 2 = may xuc tac:\n";
            cin >> choice;

            if (choice == 1) {
                this->_danhSach.push_back(new MayLyTam());
            } else if (choice == 2) {
                this->_danhSach.push_back(new MayXucTac());
            } else {
                cout << "Loai may khong hop le. Bo qua.\n";
                --i;
            }

            this->_danhSach.back()->nhap();  // Gọi phương thức nhập cho máy lọc mới
        }
    }

    // Phương thức: tính tổng lượng nước lọc được bởi tất cả máy lọc
    float tinhLuongNuoc() {
        float sum = 0.0;
        for (MayLoc* may : this->_danhSach) {
            sum += may->tinhLuongNuoc();
        }
        return sum;
    }

    // Phương thức: tính tổng chi phí sử dụng tất cả máy lọc
    long tinhChiPhi() {
        long sum = 0;
        for (MayLoc* may : this->_danhSach) {
            sum += may->tinhChiPhi();
        }
        return sum;
    }
};

// Lớp "Ao" đại diện cho một ao nước có máy lọc
class Ao {
private:
    int _M;        // Lượng nước trong ao
    DanhSachMayLoc _ds;  // Danh sách máy lọc trong ao

public:
    Ao() : _M(0) {}

    // Phương thức: nhập thông tin cho ao và danh sách máy lọc
    void nhap() {
        cout << "Nhap luong nuoc: ";
        cin >> this->_M;
        cout << "Nhap danh sach:\n";
        this->_ds.nhap();
    }

    // Phương thức: kiểm tra xem ao có được lọc hết nước không
    bool AoDuocLocHetKhong() {
        return this->_M <= this->_ds.tinhLuongNuoc();
    }

    // Phương thức: tính tổng chi phí sử dụng tất cả máy lọc trong ao
    long tongChiPhi() {
        return this->_ds.tinhChiPhi();
    }

    ~Ao() {}
};

// Hàm main: thực hiện nhập liệu và hiển thị kết quả
int main() {
    Ao ao;
    ao.nhap();  // Gọi phương thức nhập thông tin cho ao

    if (ao.AoDuocLocHetKhong()) {
        cout << "Ao duoc loc het.\n";
    } else {
        cout << "Ao khong duoc loc het.\n";
    }

    cout << "Tong chi phi su dung cac may loc: " << ao.tongChiPhi() << " dong\n";

    return 0;
}
