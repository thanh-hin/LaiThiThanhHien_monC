#include <iostream>
using namespace std;
int main()//chương trình chính
{
    int length, width, area;//khai báo biến
    cout << "This program calculates the area of a ";
    cout << "rectangle.\n";
    cout << "Enter the length and width of the rectangle ";
    cout << "separated by a space.\n";
    cin >> length >> width;//nhập lần lượt chiều dài và chiều rộng
    area = length * width;//tính diện tích
    cout << "The area of the rectangle is " << area << endl;//hiển thị diện tích
    return 0;
}