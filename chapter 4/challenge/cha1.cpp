#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    int num1, num2;//khai báo biến
    //nhập các biến
    cout << "Enter the number 1: ";
    cin >> num1;
    cout << "Enter the number 2: ";
    cin >> num2;
    //so sánh 2 số 
    if (num1>num2)
    {
        cout << num1 <<" > "<<num2;
    }
    else
    {
        cout << num1 <<" < "<<  num2;
    }
    return 0;
}