#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    int x = 25, y = 50, z = 75;//khai báo biến
    int *ptr = nullptr;//biến con trỏ
    //hiển thị nội dung
    cout << "Here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;
    //Sử dụng con trỏ để thao tác x, y và z
    ptr = &x;//Lưu trữ địa chỉ của x trong ptr
    *ptr += 100; // Thêm 100 vào giá trị trong x
    ptr = &y;//Lưu trữ địa chỉ của y trong ptr
    *ptr += 100; // Thêm 100 vào giá trị trong y
    ptr = &z;//Lưu trữ địa chỉ của z trong ptr
    *ptr += 100; //Thêm 100 vào giá trị trong z
    //hiển thị nội dung
    cout << "Once again, here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;
    return 0;
}