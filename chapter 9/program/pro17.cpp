#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //Xác định một con trỏ thông minh Unique_ptr, trỏ tới một int được cấp phát động.
    unique_ptr<int> ptr( new int );
    // Gán 99 cho int được phân bổ động
    *ptr = 99;
    // Hiển thị giá trị của int được cấp phát động
    cout << *ptr << endl;
    return 0;
}