#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    int num;//khai báo biến
    // nhập 1 số từ 1-10
    cout << "Enter a number between 1 and 10: ";
    cin >> num;
    // chuyển đổi số đã nhập sang số la mã
    switch (num)
    {
        case 1:
            cout << "The Roman numeral for ";
            cout  << num << " is I\n";
            break;
        case 2:
            cout << "The Roman numeral for ";
            cout << num << " is II\n";
            break;
        case 3:
            cout << "The Roman numeral for ";
            cout << num << " is III\n";
            break;
        case 4:
            cout << "The Roman numeral for ";
            cout << num << " is IV\n";
            break;
        case 5:
            cout << "The Roman numeral for ";
            cout << num << " is V\n";
            break;
        case 6:
            cout << "The Roman numeral for ";
            cout << num << " is VI\n";
            break;
        case 7:
            cout << "The Roman numeral for ";
            cout << num << " is VII\n";
            break;
        case 8:
            cout << "The Roman numeral for ";
            cout << num << " is VIII\n";
            break;
        case 9:
            cout << "The Roman numeral for ";
            cout << num << " is XI\n";
            break;
        case 10:
            cout << "The Roman numeral for ";
            cout << num << " is X\n";
            break;
        default://báo lỗi khi số nhập không trong phạm vi yêu cầu
            cout << "You must enter a number between 1 and 10\n";
            cout << "Run the program over and try again.\n";
            break;
    }
    return 0;
}