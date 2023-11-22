#include <iostream>
using namespace std;
int main()//chương trình chính
{
    char ch;//khai báo biến kí tự
    int number;//khai báo
    cout << "Enter a number: ";
    cin >> number;//nhập số
    cin.ignore();//bỏ qua kí tự ở dòng mới
    cout << "Enter a character: ";
    ch = cin.get();// nhập kí tự 
    cout << "Thank You!\n";
    return 0;
}