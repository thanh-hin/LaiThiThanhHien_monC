#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    int max;// Kích thước tối đa của mảng
    //nhập số lượng giá trị để lưu trữ
    cout << "How many numbers do you want to enter? ";
    cin >> max;
    //Xác định một con trỏ thông minh Unique_ptr, trỏ tới một mảng int được phân bổ động
    unique_ptr<int[]> ptr( new int[max]);
    // nhập giá trị của mảng
    for (int index = 0; index < max; index++)
    {
        cout << "Enter an integer number: ";
        cin >> ptr[index];
    }
    // hiển thị các giá trị của mảng
    cout << "Here are the values you entered:\n";
    for (int index = 0; index < max; index++)
        cout << ptr[index] << endl;
    return 0;
}