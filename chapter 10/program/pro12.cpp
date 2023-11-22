#include <bits/stdc++.h>
using namespace std;

void stringCopy(char [], char []);//khai báo hàm

int main()
{
    const int LENGTH = 30; // kích thước mảng
    char first[LENGTH]; // mảng lựa chọn của người dùng
    char second[LENGTH]; // mảng giữ copy
    // nhập 1 chuỗi từ người dùng và lưu trữ
    cout << "Enter a string with no more than "
         << (LENGTH - 1) << " characters:\n";
    cin.getline(first, LENGTH);
    // sao chép nội dung mảng first sang mảng second
    stringCopy(first, second);//gọi hàm stringCopy
    // hiển thị mảng second 
    cout << "The string you entered is:\n" << second << endl;
    return 0;
}

void stringCopy(char string1[], char string2[])
{
    int index = 0; // biến đếm
    // Bước qua chuỗi 1, sao chép từng phần tử của chuỗi 2. Dừng khi gặp ký tự null
    while (string1[index] != '\0')
    {
        string2[index] = string1[index];
        index++;
    }
    // Đặt một ký tự null trong chuỗi2
    string2[index] = '\0';
}