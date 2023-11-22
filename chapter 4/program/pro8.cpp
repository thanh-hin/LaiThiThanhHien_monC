#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    int number;//khai báo 
    cout << "Enter an integer and I will tell you if it\n";
    cout << "is odd or even. ";
    cin >> number;//nhấp số 
    //khởi tạo điều kiện nếu number chia hết cho 2 thì xuất là số chẵn
    //ngược lại nếu number ko chia hết cho 2 hì xuất là số lẻ
    if (number % 2 == 0)
        cout << number << " is even.\n";
    else
        cout << number << " is odd.\n";
    return 0;
}