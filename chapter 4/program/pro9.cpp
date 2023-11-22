#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    double num1, num2, quotient;//khai báo biến
    // nhập số thứ 1
    cout << "Enter a number: ";
    cin >> num1;
    // nhập số thứ 2
    cout << "Enter another number: ";
    cin >> num2;
    // nếu số thứ 2 khác 0 thì thực hiện phép chia và thực hiện lệnh xuất ở else
    // nếu số thứ 2 bằng 0 thì yêu cầu nhập số khác 0
    if (num2 == 0)
    {
        cout << "Division by zero is not possible.\n";
        cout << "Please run the program again and enter\n";
        cout << "a number other than zero.\n";
    }
    else
    {
        quotient = num1 / num2;
        cout << "The quotient of " << num1 << " divided by ";
        cout << num2 << " is " << quotient << ".\n";
    }
    return 0;
}