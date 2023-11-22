#include <bits/stdc++.h>
using namespace std;

void divide(double, double);//khai báo hàm

int main()//hàm chính
{
    double num1, num2;//khai báo biến 
    //nhập 2 số 
    cout << "Enter two numbers and I will divide the first\n";
    cout << "number by the second number: ";
    cin >> num1 >> num2;
    divide(num1, num2);//gọi hàm divide truyền 2 đối số num1, num2
    return 0;
}

//hàm thực hiện phép chia
void divide(double arg1, double arg2)//định nghĩa hàm divide
{
    if (arg2 == 0.0) // kiểm tra nếu đối số thứ hai bằng 0 
    {
        //thì báo lỗi ko chia được
        cout << "Sorry, I cannot divide by zero.\n";
        return;//ngừng hàm
    }
    cout << "The quotient is " << (arg1 / arg2) << endl; // thực hiện phép chia và hiển thị kết quả
}