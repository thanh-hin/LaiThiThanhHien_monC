#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    const int SIZE = 8;//khai báo kích thước mảng
    int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};//khai báo mảng
    int *numPtr = nullptr; // biến con trỏ
    int count;//biến đếm
    // Biến đếm cho vòng lặp
    // Tạo điểm numPtr cho mảng đã đặt
    numPtr = set;
    // Sử dụng con trỏ để hiển thị nội dung mảng
    cout << "The numbers in set are:\n";
    for (count = 0; count < SIZE; count++)
    {
    cout << *numPtr << " ";
    numPtr++;
    }
    // Hiển thị nội dung mảng theo thứ tự ngược lại
    cout << "\nThe numbers in set backward are:\n";
    for (count = 0; count < SIZE; count++)
    {
    numPtr--;
    cout << *numPtr << " ";
    }
    return 0;
}