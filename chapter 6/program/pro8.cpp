#include <bits/stdc++.h>
using namespace std;

void showSum(int, int, int);//khai báo hàm

int main()//hàm chính
{
    int value1, value2, value3;//khai báo biến
    //nhập 3 số nguyên
    cout << "Enter three integers and I will display ";
    cout << "their sum: ";
    cin >> value1 >> value2 >> value3;
    showSum(value1, value2, value3);//gọi hàm showSum truyền 3 đối số
    return 0;
}

//hàm tính tổng
void showSum(int num1, int num2, int num3)//định nghĩa hàm showSum
{
    cout << (num1 + num2 + num3) << endl;//xuất tổng 3 số
}