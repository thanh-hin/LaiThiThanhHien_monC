#include <bits/stdc++.h>
using namespace std;

const int BIRDS = 500;//hằng số toàn cục

void california();//khai báo hàm

int main()//hàm chính
{
    cout << "In main there are " << BIRDS//hiển thị giá trị của biến toàn cục
        << " birds.\n";
    california();//gọi hàm colifornia
    return 0;
}

void california()
{
    const int BIRDS = 10000;//khai báo 1 biến cục bộ có tên giống biến toàn cục
    //biến cục bộ phủ biến toàn cục
    cout << "In california there are " << BIRDS//hiển thị giá trị của biến cục bộ
         << " birds.\n";
}