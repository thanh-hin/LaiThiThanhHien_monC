#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    int x = 25;//khai báo biến
    int *ptr = nullptr; // Biến con trỏ, có thể trỏ tới int
    ptr = &x;//Lưu trữ địa chỉ của x trong ptr
    cout << "The value in x is " << x << endl;//hiển thị giá trị của biến x
    cout << "The address of x is " << ptr << endl;// hiển thi địa chỉ của biến x
    return 0;
}