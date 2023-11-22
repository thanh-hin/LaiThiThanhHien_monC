#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name1, name2;//khai báo 2 chuỗi tên
    // nhập 1 cái tên
    cout << "Enter a name (last name first): ";
    getline(cin, name1);
    // nhập 1 tên khác
    cout << "Enter another name: ";
    getline(cin, name2);
    // Hiển thị chúng theo thứ tự bảng chữ cái
    cout << "Here are the names sorted alphabetically:\n";
    if (name1 < name2)
        cout << name1 << endl << name2 << endl;
    else if (name1 > name2)
        cout << name2 << endl << name1 << endl;
    else
        cout << "You entered the same name twice!\n";
    return 0;
}