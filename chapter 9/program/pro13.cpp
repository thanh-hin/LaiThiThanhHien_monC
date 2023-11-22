#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void displayValues(const int *, int);

int main()//hàm chính
{
    const int SIZE = 6;//khai báo kích thước mảng
    // Xác định một mảng hằng số nguyên
    const int array1[SIZE] = { 1, 2, 3, 4, 5, 6 };
    // Xác định một mảng các số nguyên không hằng
    int array2[SIZE] = { 2, 4, 6, 8, 10, 12 };
    // Hiển thị nội dung của mảng hằng 
    displayValues(array1, SIZE);//gọi hàm displayValues
    // Hiển thị nội dung của mảng không hằng
    displayValues(array2, SIZE);//gọi hàm displayValues
    return 0;
}

//hàm hiển thị giá trị trong mảng
void displayValues(const int *numbers, int size)//định nghĩa hàm displayValues
{
    // hiển thị toàn bộ giá trị
    for (int count = 0; count < size; count++)
    {
        cout << *(numbers + count) << " ";
    }
    cout << endl;
}