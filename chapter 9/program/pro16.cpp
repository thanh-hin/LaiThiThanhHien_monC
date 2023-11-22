#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
int *duplicateArray(const int *, int);
void displayArray(const int[], int);

int main()//hàm chính
{
    // Xác định các hằng số cho kích thước mảng
    const int SIZE1 = 5, SIZE2 = 7, SIZE3 = 10;
    //Xác định ba mảng có kích thước khác nhau
    int array1[SIZE1] = { 100, 200, 300, 400, 500 };
    int array2[SIZE2] = { 10, 20, 30, 40, 50, 60, 70 };
    int array3[SIZE3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // Xác định ba con trỏ cho các mảng trùng lặp
    int *dup1 = nullptr, *dup2 = nullptr, *dup3 = nullptr;
    // Nhân đôi các mảng
    dup1 = duplicateArray(array1, SIZE1);
    dup2 = duplicateArray(array2, SIZE2);
    dup3 = duplicateArray(array3, SIZE3);
    // Hiển thị các mảng ban đầu
    cout << "Here are the original array contents:\n";
    displayArray(array1, SIZE1);
    displayArray(array2, SIZE2);
    displayArray(array3, SIZE3);
    // Hiển thị các mảng mới
    cout << "\nHere are the duplicate arrays: \n";
    displayArray(dup1, SIZE1);
    displayArray(dup2, SIZE2);
    displayArray(dup3, SIZE3);
    // Giải phóng bộ nhớ được cấp phát động và đặt con trỏ về 0.
    delete [] dup1;
    delete [] dup2;
    delete [] dup3;
    dup1 = nullptr;
    dup2 = nullptr;
    dup3 = nullptr;
    return 0;
}

//hàm nhân đôi mảng
int *duplicateArray(const int *arr, int size)
{
    int *newArray = nullptr;
    // Xác thực kích thước. Nếu 0 hoặc số âm được truyền vào, hãy trả về con trỏ null
    if (size <= 0)
        return nullptr;
    // Cấp phát một mảng mới.
    newArray = new int[size];
    // Sao chép nội dung của mảng sang mảng mới.
    for (int index = 0; index < size; index++)
        newArray[index] = arr[index];
    //trả về mảng mới
    return newArray;
}

//hàm hiển thị giá trị trong mảng
void displayArray(const int arr[], int size)//định nghĩa hàm displayArray
{
    //hiển thị giá trị mảng
    for (int index = 0; index < size; index++)
    cout << arr[index] << " ";
    cout << endl;
}