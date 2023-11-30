#include <iostream>
#include <vector>

using namespace std;

// Lớp cơ sở Sap
class Sap {
protected:
    int _stt; // Số thứ tự
    float _dt; // Diện tích
    long _doanhThu; // Doanh thu

public:
    static long DON_GIA_THUE; // Đơn giá thuê

    // Tính tiền thuê
    virtual long tinhTienThue() {
        return DON_GIA_THUE * this->_dt;
    }

    // Tính thuế doanh thu
    virtual long tinhThueDoanhThu() = 0;

    // Tính tổng tiền
    virtual long tinhTongTien() = 0;

    // Nhập thông tin
    virtual void nhapThongTin() {
        cin >> this->_stt;
        cin >> this->_dt;
        cin >> this->_doanhThu;
    }

    // Hủy bỏ
    virtual ~Sap() {
        this->_stt = 0;
        this->_dt = 0;
        this->_doanhThu = 0;
    }
};

long Sap::DON_GIA_THUE = 40000000; // Đơn giá thuê

// Lớp SapThucPham kế thừa từ lớp Sap
class SapThucPham : public Sap {
private:
    long _phiDongLanh; // Phí đông lạnh

public:
    static float PHAN_TRAM_THUE_SAP_THUC_PHAM; // Phần trăm thuế

    // Tính thuế doanh thu
    long tinhThueDoanhThu() {
        return (float)PHAN_TRAM_THUE_SAP_THUC_PHAM * this->_doanhThu;
    }

    // Tính tổng tiền
    long tinhTongTien() {
        return this->_phiDongLanh + this->tinhThueDoanhThu() + this->tinhTienThue();
    }

    // Nhập thông tin
    void nhapThongTin() override {
        Sap::nhapThongTin();
        cin >> _phiDongLanh;
    }
};

float SapThucPham::PHAN_TRAM_THUE_SAP_THUC_PHAM = 0.05; // Phần trăm thuế

// Lớp SapQuanAo kế thừa từ lớp Sap
class SapQuanAo : public Sap {
public:
    static float PHAN_TRAM_THUE_SAP_QUAN_AO; // Phần trăm thuế

    // Tính thuế doanh thu
    long tinhThueDoanhThu() {
        return (float)PHAN_TRAM_THUE_SAP_QUAN_AO * this->_doanhThu;
    }

    // Tính tổng tiền
    long tinhTongTien() {
        return this->tinhThueDoanhThu() + this->tinhTienThue();
    }
};

float SapQuanAo::PHAN_TRAM_THUE_SAP_QUAN_AO = 0.1; // Phần trăm thuế

// Lớp SapTrangSuc kế thừa từ lớp Sap
class SapTrangSuc : public Sap {
public:
    static long GIOI_HAN_DOANH_THU; // Giới hạn doanh thu
    static float PHAN_TRAM_THUE_DUOI_GION_HAN; // Phần trăm thuế dưới giới hạn
    static float PHAN_TRAM_THUE_TREN_GION_HAN; // Phần trăm thuế trên giới hạn

    // Tính thuế doanh thu
    long tinhThueDoanhThu() {
        if (this->_doanhThu < GIOI_HAN_DOANH_THU) {
            return PHAN_TRAM_THUE_DUOI_GION_HAN * this->_doanhThu;
        } else {
            return PHAN_TRAM_THUE_TREN_GION_HAN * this->_doanhThu;
        }
    }

    // Tính tổng tiền
    long tinhTongTien() {
        return this->tinhThueDoanhThu() + this->tinhTienThue();
    }
};

long SapTrangSuc::GIOI_HAN_DOANH_THU = 100000000; // Giới hạn doanh thu
float SapTrangSuc::PHAN_TRAM_THUE_DUOI_GION_HAN = 0.2; // Phần trăm thuế dưới giới hạn
float SapTrangSuc::PHAN_TRAM_THUE_TREN_GION_HAN = 0.3; // Phần trăm thuế trên giới hạn

// Lớp QuanLyDanhSach quản lý danh sách các gian hàng
class QuanLyDanhSach {
private:
    vector<Sap *> _ds; // Danh sách các gian hàng

public:
    // Nhập thông tin
    void nhapThongTin() {
        cout << "Nhap so luong sap duoc thue:";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int choice;
            cout << "1-Sap Thuc Pham, 2-SapQuanAo, 3-SapTrangSuc\n";
            cin >> choice;
            Sap *p = nullptr;
            if (choice == 1) {
                p = new SapThucPham();
            } else if (choice == 2) {
                p = new SapQuanAo();
            } else if (choice == 3) {
                p = new SapTrangSuc();
            } else {
                cout << "Nhap sai! Nhap lai!\n";
                i--;
                continue;
            }
            this->_ds.push_back(p);
            this->_ds[i]->nhapThongTin();
        }
    }

    // Tính tổng tiền
    long tinhTongTien() {
        long sum = 0;
        for (int i = 0; i < this->_ds.size(); i++) {
            sum += this->_ds[i]->tinhTongTien();
        }
        return sum;
    }
};

int main() {
    QuanLyDanhSach quanLy; // Tạo đối tượng quản lý
    quanLy.nhapThongTin(); // Nhập thông tin
    cout << "Tong tien thue: " << quanLy.tinhTongTien() << endl; // In tổng tiền thuê

    return 0;
}
