#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
int *reverseArray(int [], const int);
void displayArray(int *, const int);

int main()//hàm chính
{
    const int ARRAY_SIZE = 10;//khai báo kích thước mảng
    //khai báo mảng
    int numbers[ARRAY_SIZE] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int *numbers_reversed = reverseArray(numbers, ARRAY_SIZE);//gọi hàm reverseArray
    displayArray(numbers, ARRAY_SIZE);//gọi hàm displayArray
    displayArray(numbers_reversed, ARRAY_SIZE);//gọi hàm displayArray
    delete [] numbers_reversed;
    numbers_reversed = nullptr; // 0x0
    return 0;
}

//hàm dùng để đảo ngược mảng
int *reverseArray(int array[], const int SIZE)
{
    int *newArray = new int[SIZE];//cấp phát bộ nhớ
    int j = (SIZE - 1);//khai báo
    //khởi tạo vòng lặp for
    for (int i = 0; i < SIZE; i++, j--)
        *(newArray + i) = array[j]; 
    return newArray;//trả lại hàm sau khi đảo ngược
}

//hàm hiển thị mảng
void displayArray(int *array, const int SIZE)
{
    //khởi tạo vòng lặp for
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " ";
}