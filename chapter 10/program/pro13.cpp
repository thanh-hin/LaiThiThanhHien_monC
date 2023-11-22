#include <bits/stdc++.h>
using namespace std;

void nameSlice(char []);//khai báo hàm

int main()//hàm chính
{
    const int SIZE = 41; // kích thước mảng
    char name[SIZE];//tên
    //nhập tên người dùng
    cout << "Enter your first and last names, separated ";
    cout << "by a space:\n";
    cin.getline(name, SIZE);
    nameSlice(name);//gọi hàm nameSlice
    //hiển thị tên người dùng
    cout << "Your first name is: " << name << endl;
    return 0;
}

void nameSlice(char userName[])//định nghĩa hàm
{
    int count = 0; // biến đếm
    // Xác định vị trí khoảng trắng đầu tiên hoặc dấu kết thúc null nếu không có khoảng trắng
    while (userName[count] != ' ' && userName[count] != '\0')
        count++;//bến đếm tăng
    // Nếu tìm thấy khoảng trắng, hãy thay thế nó bằng dấu kết thúc null
    if (userName[count] == ' ')
        userName[count] = '\0';
}