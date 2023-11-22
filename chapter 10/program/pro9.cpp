#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến
    const int NAME_LENGTH = 30;//kích thước mảng
    char name1[NAME_LENGTH], name2[NAME_LENGTH];//khai báo 2 mảng kí tự
    // nhập vào 2 mảng
    cout << "Enter a name (last name first): ";
    cin.getline(name1, NAME_LENGTH);
    cout << "Enter another name: ";
    cin.getline(name2, NAME_LENGTH);
    // In hai chuỗi theo thứ tự bảng chữ cái
    cout << "Here are the names sorted alphabetically:\n";
    if (strcmp(name1, name2) < 0)
        cout << name1 << endl << name2 << endl;
    else if (strcmp(name1, name2) > 0)
        cout << name2 << endl << name1 << endl;
    else
        cout << "You entered the same name twice!\n";
    return 0;
}