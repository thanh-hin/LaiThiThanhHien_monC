#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    int x = 25;//khai báo biến
    cout << "The address of x is " << &x << endl;//hiển thị địa chỉ của biến
    cout << "The size of x is " << sizeof(x) << " bytes\n";//hiển thị kích thước của biến
    cout << "The value in x is " << x << endl;//hiển thị giá trị của biến
    return 0;
}