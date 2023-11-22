#include <bits/stdc++.h>
using namespace std;

void anotherFunction(); //khai báo hàm
int num = 2;// biến toàn cục
//biến toàn cục hiển thị ở tất cả các hàm sau khi được khai báo

int main()//hàm chính
{
    cout << "In main, num is " << num << endl;//hiển thị giá trị của num
    anotherFunction();//gọi hàm anotherFunction
    //giá trị của biến toàn cục bị thay đổi
    cout << "Back in main, num is " << num << endl;//hiển thị giá trị của num 
    return 0;
}

void anotherFunction()//định nghĩa hàm anotherFunction
{
    cout << "In anotherFunction, num is " << num << endl;//hiển thị giá trị của num từ biến toàn cục
    num = 50;//gán num bằng giá trị mới
    //thay đổi giá trị của biến toàn cục
    cout << "But, it is now changed to " << num << endl;//hiển thị giá trị num vừa gán
}