#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class HoatDong {
private:
    int ngay; // Ngày thực hiện hoạt động
    string msbn; // Mã số bệnh nhân
    string loaiHoatDong; // Loại hoạt động (KB: khám bệnh, NV: nhập viện, XV: xuất viện)
    int phi; // Phí hoạt động (nếu có)

public:
    HoatDong(int ngay, string msbn, string loaiHoatDong, int phi)
        : ngay(ngay), msbn(msbn), loaiHoatDong(loaiHoatDong), phi(phi) {}
};

class BenhNhan {
private:
    int msbn; // Mã số bệnh nhân
    string hoTen; // Họ tên bệnh nhân
    bool noiTru; // True nếu là bệnh nhân nội trú, false nếu là bệnh nhân ngoại trú
    int ngayNhapVien; // Ngày nhập viện (nếu là bệnh nhân nội trú)
    int soNgayDieuTri; // Số ngày điều trị (nếu là bệnh nhân nội trú)
    string loaiPhong; // Loại phòng (nếu là bệnh nhân nội trú)
    vector<HoatDong> lichSuDieuTri; // Lịch sử điều trị của bệnh nhân

public:
    BenhNhan(int msbn, string hoTen, bool noiTru)
        : msbn(msbn), hoTen(hoTen), noiTru(noiTru), ngayNhapVien(0), soNgayDieuTri(0), loaiPhong("") {}

    void nhapVien(int ngayNhapVien, string loaiPhong) {
        this->ngayNhapVien = ngayNhapVien;
        this->loaiPhong = loaiPhong;
        // Thêm hoạt động nhập viện vào lịch sử
        lichSuDieuTri.push_back(HoatDong(ngayNhapVien, to_string(msbn), "NV", 0));
    }

    void xuatVien() {
        // Xử lý khi bệnh nhân nội trú xuất viện
        // Thêm hoạt động xuất viện vào lịch sử
        lichSuDieuTri.push_back(HoatDong(ngayNhapVien + soNgayDieuTri, to_string(msbn), "XV", 0));
    }

    void lapHoSoBenhAn(int ngay, string loaiHoatDong, int phi) {
        // Thêm hoạt động vào lịch sử
        lichSuDieuTri.push_back(HoatDong(ngay, to_string(msbn), loaiHoatDong, phi));
    }

    bool laBenhNhanNoiTru() const {
        return noiTru;
    }

    int tinhVienPhi() const {
        // Tính viện phí dựa trên thông tin của bệnh nhân
    }
};

class QuanLyBenhVien {
private:
    vector<BenhNhan> danhSachBenhNhan;

public:
    void docDuLieuTuFile(string tenFile) {
        // Đọc dữ liệu từ file và tạo danh sách bệnh nhân
    }

    void thongKeVaXuatHoaDon() {
        // Thống kê và xuất hóa đơn cho từng bệnh nhân
    }

    int tongVienPhi() const {
        // Tính tổng viện phí của tất cả bệnh nhân
    }

    int soBenhNhanNoiTru() const {
        // Đếm số bệnh nhân nội trú
    }

    int soBenhNhanNgoaiTru() const {
        // Đếm số bệnh nhân ngoại trú
    }
};

int main() {
    QuanLyBenhVien benhVien;
    benhVien.docDuLieuTuFile("ten_file.txt");
    benhVien.thongKeVaXuatHoaDon();

    cout << "Tong vien phi: " << benhVien.tongVienPhi() << " VND\n";
    cout << "So benh nhan noi tru: " << benhVien.soBenhNhanNoiTru() << "\n";
    cout << "So benh nhan ngoai tru: " << benhVien.soBenhNhanNgoaiTru() << "\n";

    return 0;
}
