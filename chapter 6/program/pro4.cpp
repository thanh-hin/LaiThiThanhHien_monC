#include <bits/stdc++.h>
using namespace std;
void deeper()//định nghĩa hàm deeper
{
    //hiển thị 1 lời nhắn
    cout << "I am now inside the function deeper.\n";
}
void deep()//định nghĩa hàm deep
{
    //hiển thị 3 lời nhắn
    cout << "I am now inside the function deep.\n";
    deeper();//gọi hàm deeper
    cout << "Now I am back in deep.\n";
}
int main()
{
    cout << "I am starting in function main.\n";//xuất nội dung
    deep();//gọi hàm deep
    cout << "Back in function main again.\n";//xuất nội dung
    return 0;
}