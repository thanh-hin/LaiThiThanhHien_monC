#include <bits/stdc++.h>
using namespace std;

int sum(int, int);//khai báo hàm

int main()//hàm chính
{
    //khai báo biến
    int value1 = 20,
        value2 = 40,
        total;// tổng
    total = sum(value1, value2);//tính tổng bằng gọi hàm sum và truyền 2 đối số value1, value2
    // hiển thị tổng của 2 số
    cout << "The sum of " << value1 << " and "
        << value2 << " is " << total << endl;
    return 0;
}

//hàm tính tổng
int sum(int num1, int num2)//định nghĩa hàm sum
{
    return num1 + num2;//trả về num1 + num2
}