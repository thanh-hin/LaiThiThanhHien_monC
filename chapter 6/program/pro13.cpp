#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double getRadius();
double square(double);

int main()//hàm chính
{
    //khai báo biến
    const double PI = 3.14159; //hằng số pi
    double radius;//bán kính
    double area;//diện tích
    cout << fixed << showpoint << setprecision(2);//formatting
    // nhập bán kính
    cout << "This program calculates the area of ";
    cout << "a circle.\n";
    radius = getRadius();//nhập bán kính bằng cách gọi hàm getRadius
    // tính diện tích hình tròn
    area = PI * square(radius);//tính diện tích = pi x gọi hàm square
    // hiển thị diện tích 
    cout << "The area is " << area << endl;
    return 0;
}

//hàm nhập bán kính
double getRadius()//định nghĩa hàm getRadius
{
    double rad;//khai báo biến bán kính
    cout << "Enter the radius of the circle: ";
    cin >> rad;//nhập bán kính
    return rad;//trả giá trị bán kính
}

//hàm tính bình phương 1 số
double square(double number)//định nghĩa hàm square
{
    return number * number;//trả bình phương của đối số
}