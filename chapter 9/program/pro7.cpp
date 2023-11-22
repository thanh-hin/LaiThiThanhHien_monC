#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    const int NUM_COINS = 5;//khai báo kích thước mảng
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};//khai báo mảng
    double *doublePtr; // biến con trỏ
    int count;//biến đếm
    doublePtr = coins;//gán địa chỉ của mảng coins cho doublePtr
    // Hiển thị nội dung của mảng tiền xu. Sử dụng chỉ số dưới
    // với con trỏ!
    cout << "Here are the values in the coins array:\n";
    for (count = 0; count < NUM_COINS; count++)
    cout << doublePtr[count] << " ";
    // Hiển thị lại nội dung của mảng, nhưng lần này
    // sử dụng ký hiệu con trỏ với tên mảng!
    cout << "\nAnd here they are again:\n";
    for (count = 0; count < NUM_COINS; count++)
    cout << *(coins + count) << " ";
    cout << endl;
    return 0;
}