#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
int square(int);
double square(double);

int main()//hàm chính
{
    //khai báo biến
    int userInt;
    double userFloat;
    // nhập 1 số nguyên và 1 số thực
    cout << fixed << showpoint << setprecision(2);//formatting
    cout << "Enter an integer and a floating-point value: ";
    cin >> userInt >> userFloat;
    // hiển thị bình phương của số 
    cout << "Here are their squares: ";
    cout << square(userInt) << " and " << square(userFloat);//gọi hàm square
    return 0;
}

//hàm tính bình phương 1 số nguyên
int square(int number)//định nghĩa hàm square
{
    return number * number;//trả vè bình phương 1 số 
}

//hàm tính bình phương 1 số thực
double square(double number)//định nghĩa hàm square
{
    return number * number;//trả về bình phương 1 số
}