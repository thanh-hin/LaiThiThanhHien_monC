#include <iostream>
#include "Rectangle.h" 
#include <cstdlib>     
using namespace std;

int main()
{
    double rectWidth;  // Biến cục bộ cho chiều rộng
    double rectLength; // Biến cục bộ cho độ dài

    //nhập chiều rộng của hình chữ nhật từ người dùng
    cout << "This program will calculate the area of a rectangle.\n";
    cout << "What is the width? ";
    cin >> rectWidth;

    // Kiểm tra xem chiều rộng có hợp lệ không
    if (rectWidth <= 0)
    {
        cout << "Invalid width\n";
        exit(EXIT_FAILURE);
    }

    //nhập chiều dài của hình chữ nhật từ người dùng
    cout << "What is the length? ";
    cin >> rectLength;

    // Kiểm tra xem độ dài có hợp lệ không
    if (rectLength <= 0)
    {
        cout << "Invalid length\n";
        exit(EXIT_FAILURE);
    }

    // Tạo một thể hiện của lớp Rectangle
    Rectangle box;

    // Đặt chiều rộng và chiều dài của hình chữ nhật
    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Hiển thị dữ liệu của hình chữ nhật
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}