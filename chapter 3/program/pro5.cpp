#include <iostream>
#include <cmath>
using namespace std;
int main()//chương trình chính
{
    const double PI = 3.14159;//khai báo biến hằng số pi
    double area, radius;//khai báo biến
    cout << "This program calculates the area of a circle.\n";
    cout << "What is the radius of the circle? ";
    cin >> radius;//nhập bán kính
    area = PI * pow(radius, 2.0);//tính diện tích hình tròn
    cout << "The area is " << area << endl;//hiển thị kết quả
    return 0;
}