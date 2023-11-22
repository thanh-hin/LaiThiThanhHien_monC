#include <iostream>
using namespace std;
int main()//chương trình chính
{
    double numerator, denominator;//khai báo biến
    cout << "This program shows the decimal value of ";//xuất
    cout << "a fraction.\n";//xuất
    cout << "Enter the numerator: ";//xuất
    cin >> numerator;//nhập biến
    cout << "Enter the denominator: ";//xuất
    cin >> denominator;//nhập biến
    cout << "The decimal value is ";//xuất
    cout << (numerator / denominator) << endl;//xuất kết quả phép tính
    return 0;
}