#include <bits/stdc++.h>
using namespace std;

void displayValue(int);//khai báo hàm

int main()//hàm chính
{
    cout << "I am passing several values to displayValue.\n";//xuất nội dung
    displayValue(5); //gọi hàm displayValue và truyền giá trị 5 vào
    displayValue(10); //gọi hàm displayValue và truyền giá trị 10 vào
    displayValue(2); //gọi hàm displayValue và truyền giá trị 2 vào
    displayValue(16); //gọi hàm displayValue và truyền giá trị 16 vào
    cout << "Now I am back in main.\n";//xuất nội dung
    return 0;
}

void displayValue(int num)//định nghĩa hàm displayValue
{
    cout << "The value is " << num << endl;// hiển thị giá trị của num
}