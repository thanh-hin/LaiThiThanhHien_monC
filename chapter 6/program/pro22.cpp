#include <bits/stdc++.h>
using namespace std;

void showStatic();//khai báo hàm

int main()//hàm chính
{
    //gọi hàm showStatic 5 lần
    for (int count = 0; count < 5; count++)
        showStatic();
    return 0;
}

void showStatic()//định nghĩa hàm
{
    static int statNum;//khai báo biến
    cout << "statNum is " << statNum << endl;//hiển thị giá trị của biến statNum
    statNum++;//tăng giá trị của biến statNum lên 1
}