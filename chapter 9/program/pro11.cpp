#include <bits/stdc++.h>
using namespace std;

//khai báo hàm 
void getNumber(int *);
void doubleValue(int *);

int main()//hàm chính
{
    int number;//khai báo biến
    // Gọi hàm getNumber và truyền địa chỉ của số đó
    getNumber(&number);
    // gọi hàm doubleValue và chuyển địa chỉ của số
    doubleValue(&number);
    // hiển thị giá trị bằng số
    cout << "That value doubled is " << number << endl;
    return 0;
}

//hàm nhập 1 số
void getNumber(int *input)//định nghĩa hàm getNumber
{
    cout << "Enter an integer number: ";
    cin >> *input;//nhập
}

//hàm bình phương một số
void doubleValue(int *val)//định nghĩa hàm doubleValue
{
    *val *= 2;//trả giá trị bình phương
}
