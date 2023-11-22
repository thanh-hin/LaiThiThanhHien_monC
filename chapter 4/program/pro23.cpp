#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    char choice;//khai báo 
    //nhập lựa chọn
    cout << "Enter A, B, or C: ";
    cin >> choice;
    //xác định người dùng vừa nhập chữ cái nào
    switch (choice)
    {
        //các lệnh break để thoát ngay lập tức nếu đã đúng case
        case 'A': cout << "You entered A.\n";
        break;
        case 'B': cout << "You entered B.\n";
        break;
        case 'C': cout << "You entered C.\n";
        break;
        default: cout << "You did not enter A, B, or C!\n";
    }
    return 0;
}