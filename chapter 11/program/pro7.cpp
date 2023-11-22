#include <bits/stdc++.h>
using namespace std;

// khai báo số hằng
const double PI = 3.14159;

// khai báo struct
struct Circle
{
    double radius;
    double diameter;
    double area;
};

Circle getInfo();//tạo cấu trúc Circle có tên getInfor

int main()
{
    Circle c;//tạo cấu trúc Circle có tên c
    c = getInfo();//gọi hàm getInfor và gán giá trị của hàm vào c
    // tính diện tích hình tròn
    c.area = PI * pow(c.radius, 2.0);
    // hiển thị dữ liệu hình tròn
    cout << "The radius and area of the circle are:\n";
    cout << fixed << setprecision(2);//formatting
    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;
    return 0;
}

//cấu trúc hàm nhập thông tin hình tròn
Circle getInfo()
{
    Circle tempCircle; // Biến cấu trúc tạm thời
    // nhập đường kính trong biến tạm thời
    cout << "Enter the diameter of a circle: ";
    cin >> tempCircle.diameter;
    tempCircle.radius = tempCircle.diameter / 2.0;//tính bán kính
    // Trả về biến tạm thời
    return tempCircle;
}