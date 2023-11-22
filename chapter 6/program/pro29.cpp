#include <bits/stdc++.h>
using namespace std;

void functionn();//khai báo hàm

int main()//hàm chính
{
    functionn();//gọi hàm
    return 0;
}

//hàm hiển thị nội dung
void functionn()
{
    cout << "This program terminates with the exit function.\n";
    cout << "Bye!\n";
    exit(0);//ngay lập tức kết thúc hàm
    cout << "This message will never be displayed\n";
    cout << "because the program has already terminated.\n";
}