#include <iostream>
using namespace std;
int main()//chương trình chính
{
    char ch;//khai báo biến kí tự
    int number;//khai báo
    cout << "Enter a number: ";
    cin >> number;//nhập số
    cout << "Enter a character: ";
    ch = cin.get();// nhập kí tự nhưng bị lỗi khi dùng mix cin và cin.get
    cout << "Thank You!\n";
    return 0;
}