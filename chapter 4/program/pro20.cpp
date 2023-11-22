#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    char ch;//khai báo 
    // nhập kí tự 
    cout << "Enter a digit or a letter: ";
    ch = cin.get();
    // xác định kí tự người dùng vừa nhập là chữ thường, chữ hoa hay số
    if (ch >= '0' && ch <= '9')
        cout << "You entered a digit.\n";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "You entered an uppercase letter.\n";
    else if (ch >= 'a' && ch <= 'z')
        cout << "You entered a lowercase letter.\n";
    else
        cout << "That is not a digit or a letter.\n";
    return 0;
}