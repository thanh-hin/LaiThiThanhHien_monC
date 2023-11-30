#include <iostream>
#include <cmath>
using namespace std;

// Định nghĩa lớp Huhu
class Huhu 
{
private:
    int a;
    int b;
    static const int CAN = 7; // Hằng số static CAN

public:
    // Hàm tạo có tham số (hoặc hàm tạo mặc định)
    Huhu(int a = 0, int b = 0) : a(a), b(b) {}

    // Toán tử cộng
    Huhu operator+(const Huhu& hi) const 
    {
        return Huhu(a + hi.a, b + hi.b);
    }

    // Toán tử trừ
    Huhu operator-(const Huhu& hi) const 
    {
        return Huhu(a - hi.a, b - hi.b);
    }

    // Toán tử đảo dấu (âm)
    Huhu operator-() const 
    {
        return Huhu(-a, -b);
    }

    // Toán tử nhân
    Huhu operator*(const Huhu& hien) const 
    {
        Huhu chao_hien;
        chao_hien.a = a * hien.a + b * hien.b * CAN;
        chao_hien.b = a * hien.b + b * hien.a;
        return chao_hien;
    }

    // Toán tử xuất ra (in) thông tin đối tượng
    friend std::ostream& operator<<(std::ostream& os, const Huhu& huhu) 
    {
        os << huhu.a << " + (" << huhu.b << ")*sqrt(" << huhu.CAN << ")";
        return os;
    }

    // Toán tử nhập vào (out) thông tin đối tượng
    friend std::istream& operator>>(std::istream& is, Huhu& huhu) 
    {
        is >> huhu.a >> huhu.b;
        return is;
    }
};

// Hàm main
int main() 
{
    // Tạo đối tượng x1 và x2 từ lớp Huhu
    Huhu x1(2, 3);
    Huhu x2(1, 4);

    // Thực hiện các phép toán với đối tượng x1 và x2
    Huhu sum = x1 + x2;
    Huhu difference = x1 - x2;
    Huhu negation = -x1;
    Huhu product = x1 * x2;

    // Xuất ra kết quả
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Negation: " << negation << endl;
    cout << "Product: " << product << endl;

    return 0;
}
