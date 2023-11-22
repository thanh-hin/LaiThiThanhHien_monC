#include <iostream>
using namespace std;
int main()
{
    int num = 4;//khởi tạo giá trị biến = 4
    cout << num << endl; // hiển thị 4
    cout << num++ << endl; // hiển thị 4, sau đó cộng 1 vào num
    cout << num << endl; // hiển thị 5
    cout << ++num << endl; // cộng thêm 1 vào num, sau đó hiển thị 6
    cout << endl;//xuất dòng trắng
    cout << num << endl; // hiển thị 6
    cout << num-- << endl; // hiển thị 6 và trừ 1 vào num
    cout << num << endl; // hiển thị 5
    cout << --num << endl; // trừ  1 vào num rồi hiển thị 4
    return 0;
}