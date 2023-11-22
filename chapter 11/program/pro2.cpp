#include <bits/stdc++.h>
using namespace std;

// khai báo hằng số
const double PI = 3.14159;

// khai báo struct
struct Circle
{
    //khai báo biến
    double radius; // bán kính
    double diameter; // đương kính
    double area;// hiện tích
};

int main()//hàm chính
{
    Circle c; // Xác định một biến cấu trúc
    // nhập đường kính
    cout << "Enter the diameter of a circle: ";
    cin >> c.diameter;
    // tính bán kính 
    c.radius = c.diameter / 2;
    //tính diện tích
    c.area = PI * pow(c.radius, 2.0);
    // hiển thị thông tin hình tròn
    cout << fixed << showpoint << setprecision(2);//formatting
    cout << "The radius and area of the circle are:\n";
    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;
    return 0;
}