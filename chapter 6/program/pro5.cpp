#include <bits/stdc++.h>
using namespace std;
//khai báo hàm ở đầu chương trình
void first();
void second();
int main()
{
    cout << "I am starting in function main.\n";//xuất nội dung
    first(); // gọi hàm first
    second(); // gọi hàm second
    cout << "Back in function main again.\n";//xuất nội dung
    return 0;
}
void first()//định nghĩa hàm first
{
    //hiển thị 1 lời nhắn
    cout << "I am now inside the function first.\n";
}
void second()//định nghĩa hàm second
{
    //hiển thị 1 lời nhắn
    cout << "I am now inside the function second.\n";
}