#include <bits/stdc++.h>
using namespace std;

void changeMe(int);//khai báo hàm

int main()//hàm chính
{
    int number = 12;//khai báo biến
    // hiển thị giá trị của biến number
    cout << "number is " << number << endl;
    // gọi hàm changeMe và truyền giá trị của biến number vào
    changeMe(number);
    // hiển thị giá trị của biến number lần nữa 
    cout << "Now back in main again, the value of ";
    cout << "number is " << number << endl;
    return 0;
}

//hàm thay đổi giá trị của biến
void changeMe(int myValue)//định nghĩa hàm changeMe
{
    myValue = 0;// thay đổi giá trị của myValue về 0
    // hiển thị giá trị của biến myValue
    cout << "Now the value is " << myValue << endl;
}