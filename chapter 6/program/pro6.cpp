#include <bits/stdc++.h>
using namespace std;

void displayValue(int);//khai báo hàm ở đầu chương trình

int main()//hàm chính
{
    cout << "I am passing 5 to displayValue.\n";//xuất nội dung
    displayValue(5); // gọi hàm displayValue và truyền giá trị 5 vào
    cout << "Now I am back in main.\n";//hiển thị nội dung
    return 0;
}

void displayValue(int num)//định nghĩa hàm displayValue
{
    cout << "The value is " << num << endl;//hiển thị giá trị của num
}