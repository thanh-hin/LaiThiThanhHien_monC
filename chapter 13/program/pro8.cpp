#include <iostream>
#include <iomanip>
#include "Rectangle.h" 
using namespace std;

int main()
{
    //khai báo biến
    double houseWidth, houseLength; // chiều dài và chiều rộng

    // nhập chiều rộng của ngôi nhà
    cout << "In feet, how wide is your house? ";
    cin >> houseWidth;

    // nhập chiều dài của ngôi nhà
    cout << "In feet, how long is your house? ";
    cin >> houseLength;

    //Tạo một đối tượng hình chữ nhật
    Rectangle house;
    house.setWidth(houseWidth);
    house.setLength(houseLength);

    // Hiển thị chiều rộng, chiều dài và diện tích của ngôi nhà
    cout << setprecision(2) << fixed;//formatting
    cout << "The house is " << house.getWidth() << " feet wide.\n";
    cout << "The house is " << house.getLength() << " feet long.\n";
    cout << "The house is " << house.getArea() << " square feet in area.\n";

    return 0;
}