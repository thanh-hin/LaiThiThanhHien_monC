#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    const int NUM_COINS = 5;//khai báo kích thước mảng
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};//khai báo mảng
    double *doublePtr = nullptr; //biến con trỏ
    int count;//biến đếm
    // Sử dụng con trỏ để hiển thị các giá trị trong mảng
    cout << "Here are the values in the coins array:\n";
    for (count = 0; count < NUM_COINS; count++)
    {
        // Lấy địa chỉ của một phần tử mảng
        doublePtr = &coins[count];
        // Hiển thị nội dung của phần tử.
        cout << *doublePtr << " ";
    }
    cout << endl;
    return 0;
}