#include <bits/stdc++.h>
using namespace std;


// Khai báo lớp hình chữ nhật
class Rectangle
{
private:
    double width;   // Chiều rộng của hình chữ nhật
    double length;  // Chiều dài của hình chữ nhật

public:
    // Thiết lập giá trị cho chiều rộng
    void setWidth(double);

    // Thiết lập giá trị cho chiều dài
    void setLength(double);

    // Lấy giá trị chiều rộng
    double getWidth() const;

    // Lấy giá trị chiều dài
    double getLength() const;

    // Tính diện tích của hình chữ nhật
    double getArea() const;
};

// Gán giá trị cho chiều rộng của hình chữ nhật
void Rectangle::setWidth(double w)
{
    width = w;
}

// Gán giá trị cho chiều dài của hình chữ nhật
void Rectangle::setLength(double len)
{
    length = len;
}

// Lấy giá trị của chiều rộng
double Rectangle::getWidth() const
{
    return width;
}

// Lấy giá trị của chiều dài
double Rectangle::getLength() const
{
    return length;
}

// Tính diện tích của hình chữ nhật
double Rectangle::getArea() const
{
    return width * length;
}


int main()
{
    Rectangle box; // Xác định một lớp Rectangle
    double rectWidth; // Biến cục bộ cho chiều rộng
    double rectLength; // Biến cục bộ cho độ dài
    // nhập chiều rộng và chiều dài của hình chữ nhật từ người dùng
    cout << "This program will calculate the area of a\n";
    cout << "rectangle. What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;
    // Lưu trữ chiều rộng và chiều dài của hình chữ nhật trong đối tượng box
    box.setWidth(rectWidth);
    box.setLength(rectLength);
    //Hiển thị dữ liệu của hình chữ nhật
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}