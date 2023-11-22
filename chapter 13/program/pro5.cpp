#include <iostream>
#include "Rectangle.h" // Cần dùng để sử dụng lớp Rectangle
using namespace std;
int main()
{
    Rectangle box; // Xác định một lớp Rectangle
    double rectWidth; //Biến cục bộ cho chiều rộng
    double rectLength; //Biến cục bộ cho độ dài

    //nhập chiều rộng và chiều dài của hình chữ nhật từ người dùng
    cout << "This program will calculate the area of a\n";
    cout << "rectangle. What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;

    // Lưu trữ chiều rộng và chiều dài của hình chữ nhật trong đối tượng box
    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Hiển thị dữ liệu của hình chữ nhật
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}