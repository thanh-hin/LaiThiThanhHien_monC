#include<bits/stdc++.h>
using namespace std;

class MayLoc // Khai báo lớp MayLoc
{
    private:
        float tgian; // Thuộc tính: thời gian hoạt động của máy

    public:
        void setThoiGian(float t) // Phương thức: thiết lập thời gian hoạt động
        {
            tgian = t;
        }

        float getThoiGian() // Phương thức: lấy giá trị thời gian hoạt động
        {
            return tgian;
        }
};

class MayXucTac : public MayLoc // Khai báo lớp MayXucTac kế thừa từ MayLoc
{
    private:
        int luongHoaChat;   // Thuộc tính: lượng hóa chất
        float congSuatLoc;  // Thuộc tính: công suất lọc

    public:
        static long DON_GIA_HOA_CHAT; // Đơn giá hóa chất (biến tĩnh)
        static long DON_GIA_THUE;     // Đơn giá thuê (biến tĩnh)

        // Phương thức: nhập thông tin máy xúc tác
        void nhap()
        {
            float thoiGian = 0;
            cout << "Nhap thoi gian hoat dong:";
            cin >> thoiGian;  // Nhập thời gian hoạt động
            setThoiGian(thoiGian); // Gọi hàm để thiết lập thời gian
            cout << "Nhap Luong hoa chat:";
            cin >> luongHoaChat; // Nhập lượng hóa chất
            cout << "Nhap cong suat loc cua may:";
            cin >> congSuatLoc; // Nhập công suất
        }

        // Phương thức: tính công suất thực tế của máy
        float CongSuatThucTe()
        {
            if (getThoiGian() >= 10)
            {
                return congSuatLoc * (luongHoaChat / 100) / (getThoiGian() / 10);
            }
            else
            {
                return congSuatLoc * (luongHoaChat / 100);
            }
        }

        // Phương thức: tính chi phí thuê máy
        long tinhChiPhiThueMoiMay()
        {
            return DON_GIA_THUE * getThoiGian();
        }

        // Phương thức: tính tổng chi phí sử dụng máy
        long tinhChiPhi()
        {
            return tinhChiPhiThueMoiMay() + luongHoaChat * 10000;
        }

        // Phương thức: tính lượng nước lọc được
        float tinhLuongNuoc()
        {
            return getThoiGian() * CongSuatThucTe();
        }
};

long MayXucTac::DON_GIA_HOA_CHAT = 10000; // Khởi tạo đơn giá hóa chất
long MayXucTac::DON_GIA_THUE = 80000;     // Khởi tạo đơn giá thuê

int main()
{
    cout << "Don gia hoa chat: " << MayXucTac::DON_GIA_HOA_CHAT << endl;
    MayXucTac m; // Khai báo đối tượng m
    m.nhap();   // Gọi hàm nhập thông tin từ người dùng
    cout << "Chi phi su dung may: " << m.tinhChiPhi() << endl; // In ra chi phí sử dụng máy
    cout << "Luong nuoc loc duoc: " << m.tinhLuongNuoc() << endl; // In ra lượng nước lọc được

    return 0;
}
