#include <bits/stdc++.h>
using namespace std;

int countChars(char *, char); //khai báo hàm

int main()//hàm chính
{
    const int SIZE = 51;//kihs thước mảng
    char userString[SIZE]; 
    char letter;// biến kí tự letter
    // nhập 1 chuỗi từ người dùng
    cout << "Enter a string (up to 50 characters): ";
    cin.getline(userString, SIZE);
    // Chọn một ký tự có số lần xuất hiện trong chuỗi sẽ được tính
    cout << "Enter a character and I will tell you how many\n";
    cout << "times it appears in the string: ";
    cin >> letter;//nhập kí tự
    // Hiển thị số lần ký tự xuất hiện
    cout << letter << " appears ";
    cout << countChars(userString, letter) << " times.\n";
    return 0;
}

//hàm đếm số lần kí tự xuất hiện
int countChars(char *strPtr, char ch)
{
    int times = 0; // Số lần char xuất hiện trong chuỗi
    // duyệt qua các lần đếm chuỗi của char
    while (*strPtr != '\0')
    {
        if (*strPtr == ch)// Nếu ký tự hiện tại bằng char
            times++;// tăng biến đếm
        strPtr++;//Đi tới ký tự tiếp theo trong chuỗi
    }
    return times;
}