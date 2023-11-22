#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    char again;//khai báo biến kí tự
    do
    {
        //hỏi người dùng có muốn hiển thị thông báo lần nữa không
        cout << "C++ programming is great fun!" << endl;
        cout << "Do you want to see the message again? ";
        cin >> again;//nhập vào lựa chọn của người dùng
    } while (again == 'Y' || again == 'y');//nếu lựa chọn là Y/y thì quay lại vòng lặp
    return 0;
}