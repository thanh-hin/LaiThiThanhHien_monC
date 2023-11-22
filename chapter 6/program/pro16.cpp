#include <bits/stdc++.h>
using namespace std;

void anotherFunction();//khai báo hàm

int main()//hàm chính
{
   // khai báo biến
    int num = 1; // Biến cục bộ
    cout << "In main, num is " << num << endl;//hiển thị giá trị của biến num 
    anotherFunction();//gọi hàm anotherFunction
    cout << "Back in main, num is " << num << endl;//iển thị giá trị của biến num
    return 0;
}

void anotherFunction()//định nghĩa hàm
{
    int num = 20; // biến cục bộ
    //biến khai báo ở hàm này bị ẩn ở hàm main
    cout << "In anotherFunction, num is " << num << endl;//hiển thi giá trị của biến num
}