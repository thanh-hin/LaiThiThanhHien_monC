#include <bits/stdc++.h>
using namespace std;
void displayMessage()//định nghĩa hàm hiển thị lời nhắn
{
    //hiển thị 1 lời nhắn
    cout << "Hello from the function displayMessage.\n";
}
int main()//hàm chính
{
    cout << "Hello from main.\n";//xuất nội dung
    displayMessage();//thực hiện lệnh xuất trong hàm displayMessage
    cout << "Back in function main again.\n";//xuất nội dung
    return 0;
}