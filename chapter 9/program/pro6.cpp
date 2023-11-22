#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    const int SIZE = 5;//khai báo kích thước mảng
    int numbers[SIZE]; // khai báo mảng có kích thước là 5
    int count;//biến đếm
    // Nhận các giá trị để lưu trữ trong mảng
    // Sử dụng ký hiệu con trỏ thay vì chỉ số dưới
    cout << "Enter " << SIZE << " numbers: ";
    for (count = 0; count < SIZE; count++)
    cin >> *(numbers + count);
    // Hiển thị các giá trị trong mảng
    // Sử dụng ký hiệu con trỏ thay vì chỉ số dưới
    cout << "Here are the numbers you entered:\n";
    for (count = 0; count < SIZE; count++)
    cout << *(numbers + count)<< " ";
    cout << endl;
    return 0;
}