#include <iostream>
#include <vector>

using namespace std;

// Lớp Phone_Fee đại diện cho cước phí điện thoại
class Phone_Fee {
private:
    float _time; // Số giờ sử dụng điện thoại

public:
    static long PRICE_PHONE; // Giá cước điện thoại
    long calFee() {
        return PRICE_PHONE * this->_time;
    }
};

long Phone_Fee::PRICE_PHONE = 1000;

// Lớp Internet_Fee đại diện cho cước phí internet
class Internet_Fee {
private:
    long _luongTruyCap; // Lượng truy cập internet

public:
    static long PRICE_INTERNET; // Giá cước internet
    Internet_Fee() : _luongTruyCap(0) {}
    long calFee() {
        return PRICE_INTERNET * this->_luongTruyCap;
    }
};

long Internet_Fee::PRICE_INTERNET = 200;

// Lớp Customer đại diện cho thông tin khách hàng
class Customer {
private:
    string FullName;
    string ID;
    string Address;

public:
    // Phương thức đăng ký thông tin khách hàng
    void dangKy() {
        cout << "Nhap ho va ten:";
        getline(cin, this->FullName);
        cout << "Nhap so chung minh:";
        cin >> this->ID;
        cin.ignore(); // Xóa ký tự newline từ buffer
        cout << "Nhap dia chi:";
        getline(cin, this->Address);
    }
};

// Lớp cơ sở Cost đại diện cho chi phí sử dụng dịch vụ
class Cost {
protected:
    Phone_Fee _phone_fee; // Cước phí điện thoại

public:
    static long VAT; // Thuế VAT
    virtual long calFee() = 0; // Phương thức tính tổng chi phí, là hàm ảo pure virtual
    virtual ~Cost() {}
};

long Cost::VAT = 10;

// Lớp Basic dẫn xuất từ Cost, đại diện cho gói cước cơ bản
class Basic : public Cost {
private:
    Internet_Fee _internet_fee; // Cước phí internet

public:
    // Phương thức tính tổng chi phí
    long calFee() {
        return this->_phone_fee.calFee() + this->_internet_fee.calFee() + 0.1 * VAT;
    }
};

// Lớp Data_Fee dẫn xuất từ Cost, đại diện cho gói cước dữ liệu có cước phí thêm
class Data_Fee : public Cost {
private:
    long _luongTruyCap; // Lượng truy cập dữ liệu

public:
    static long NGUONG_MIEN_PHI; // Ngưỡng miễn phí truy cập dữ liệu
    static long CUOC_THUE_BAO;   // Cước thuê bao dữ liệu
    // Phương thức tính tổng chi phí
    long calFee() {
        long phone_fee = this->_phone_fee.calFee();
        long internet_fee = 0;
        if (_luongTruyCap > NGUONG_MIEN_PHI) {
            Internet_Fee temp;
            temp.PRICE_INTERNET = _luongTruyCap - NGUONG_MIEN_PHI;
            internet_fee = CUOC_THUE_BAO + temp.calFee();
        } else {
            internet_fee = CUOC_THUE_BAO;
        }
        return phone_fee + internet_fee;
    }
};

long Data_Fee::NGUONG_MIEN_PHI = 100;
long Data_Fee::CUOC_THUE_BAO = 50;

// Lớp Data_Fix dẫn xuất từ Cost, đại diện cho gói cước dữ liệu có cước phí cố định
class Data_Fix : public Cost {
public:
    static long MUC_CO_DINH; // Mức cước cố định
    // Phương thức tính tổng chi phí
    long calFee() {
        return 0.9 * (this->_phone_fee.calFee()) + MUC_CO_DINH;
    }
};

long Data_Fix::MUC_CO_DINH = 1000000;

// Lớp Contract đại diện cho hợp đồng sử dụng dịch vụ
class Contract {
private:
    Customer _cus; // Thông tin khách hàng
    Cost* _cost;   // Loại gói cước dịch vụ

public:
    // Phương thức đăng ký hợp đồng
    void dangKy() {
        this->_cus.dangKy();
        cout << "Chon goi cuoc: 1-Basic, 2-Data_Fee, 3-Data_Fix:\n";
        int choice;
        cin >> choice;
        if (choice == 1) {
            this->_cost = new Basic();
        } else if (choice == 2) {
            this->_cost = new Data_Fee();
        } else if (choice == 3) {
            this->_cost = new Data_Fix();
        } else {
            this->_cost = new Basic();
        }
    }

    // Phương thức thông báo chi phí sử dụng dịch vụ
    void thongBao() {
        cout << "Khach hang:\n";
        cout << "Tien cuoc goi cuoc la:" << this->_cost->calFee() << endl;
    }

    // Hàm hủy, giải phóng bộ nhớ
    ~Contract() {
        if (this->_cost) {
            delete this->_cost;
            this->_cost = NULL;
        }
    }
};

// Lớp QuanLy đại diện cho quản lý danh sách hợp đồng
class QuanLy {
    vector<Contract*> _ds; // Danh sách các hợp đồng

public:
    // Phương thức đăng ký hợp đồng
    void dangKy() {
        int n;
        cout << "Nhap luong hop dong:";
        cin >> n;
        for (int i = 0; i < n; i++) {
            Contract* c = new Contract();
            c->dangKy();
            this->_ds.push_back(c);
        }
    }

    // Phương thức thông báo chi phí sử dụng dịch vụ cho từng hợp đồng
    void thongBao() {
        for (int i = 0; i < this->_ds.size(); i++) {
            this->_ds[i]->thongBao();
        }
    }

    // Hàm hủy, giải phóng bộ nhớ
    ~QuanLy() {
        for (int i = 0; i < this->_ds.size(); i++) {
            if (this->_ds[i]) {
                delete this->_ds[i];
            }
        }
        this->_ds.clear();
    }
};

// Hàm main
int main() {
    QuanLy ql;
    ql.dangKy(); // Đăng ký hợp đồng
    ql.thongBao(); // Thông báo chi phí sử dụng dịch vụ cho từng hợp đồng

    return 0;
}
