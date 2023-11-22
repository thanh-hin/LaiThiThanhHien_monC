#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    int number;//khai báo
    //nhập số lớn hơn 0
    cout << "Enter a number greater than 0: ";
    cin >> number;
    if (number > 0)
    {
        int number; // biến khác cũng tên number
        //nhập số number khác
        cout << "Now enter another number: ";
        cin >> number;
        cout << "The second number you entered was "
             << number << endl;//xuất số number thứ 2 trong if
    }
    cout << "Your first number was " << number << endl;//xuất số number thứ nhất
    return 0;
}