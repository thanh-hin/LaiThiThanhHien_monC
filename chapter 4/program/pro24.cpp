#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    char choice;//khai báo
    //nhập lựa chọn
    cout << "Enter A, B, or C: ";
    cin >> choice;
    // thiếu lệnh break thì  sẽ thực thi toàn bộ lệnh xuất ngay bên dưới case đó
    switch (choice)
    {
        case 'A': cout << "You entered A.\n";
        case 'B': cout << "You entered B.\n";
        case 'C': cout << "You entered C.\n";
        default: cout << "You did not enter A, B, or C!\n";
    }
    return 0;
}