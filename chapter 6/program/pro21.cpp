#include <bits/stdc++.h>
using namespace std;

void showLocal();//khai báo hàm

int main()//hàm chính
{
    showLocal();//gọi hàm showLocal
    showLocal();//gọi hàm showLocal
    return 0;
}

//hàm hiển thị biến cục bộ
void showLocal()//định nghĩa hàm showLocal
{
    int localNum = 5; //biến cục bộ
    cout << "localNum is " << localNum << endl;//hiển thị giá trị của biến 
    localNum = 99;//gán giá trị mới cho biến cục bộ
}