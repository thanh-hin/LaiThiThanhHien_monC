#include <iostream>
using namespace std;
int main()//chương trình chính
{
    int length, width, area;//khai báo biến
    cout << "This program calculates the area of a ";
    cout << "rectangle.\n";
    cout << "What is the length of the rectangle? ";
    cin >> length;//nhập chiều dài
    cout << "What is the width of the rectangle? ";
    cin >> width;//nhập chiều rộng
    area = length * width;//tính diện tích
    cout << "The area of the rectangle is " << area << ".\n";//hiển thị diện tích
    return 0;
}