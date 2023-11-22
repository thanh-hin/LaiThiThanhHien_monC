#include <bits/stdc++.h>
using namespace std;
int main()
{
    int user_integer;//khai báo biến
    //nhập 1 số nguyên dương không lớn hơn 15
    cout << "Enter a positive integer no greater than 15: ";
    //xác thực đầu vào
    while(!(cin >> user_integer) || user_integer > 15  || user_integer < 0)
    {
        cout << "Error. A positive integer no \n"<< "greater than 15 must be entered: ";//báo lỗi
        //xóa bộ đệm
        cin.clear();
        cin.ignore(1200, '\n');
        //nhập lại
    }
    //cứ mỗi hàng ngang có X hàng
    for (int i = 0; i < user_integer; i++)//hàng ngang
    {
        //cứ mỗi hàng dọc có X hàng
        for (int j = 0; j < user_integer; j++)//hàng dọc
        {
            cout << "X";
        }
        cout << endl;//xuống dòng
    }
    return 0;
}