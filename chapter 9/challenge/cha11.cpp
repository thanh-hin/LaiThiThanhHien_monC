#include <iostream>
using namespace std;

//khai báo hàm
int *doubleArraySize(int [], const int);
void displayArray(int *, const int);

int main()//hàm chính
{
    const int SIZE = 5;//khai báo kích thước mảng
    int numbers[SIZE] = { 2, 4, 6, 8, 10 };//khai báo mảng cho trước
    int *numbers_doubled = doubleArraySize(numbers, SIZE);//gọi hàm doubleArraySize
    displayArray(numbers, SIZE);//gọi hàm displayArray
    displayArray(numbers_doubled, (SIZE * 2));//gọi hàm displayArray
    delete [] numbers_doubled;
    numbers_doubled = nullptr; // 0x0
    return 0;
}

//hàm tăng đôi kích thước mảng
int *doubleArraySize(int array[], const int SIZE)
{
    //khai báo
    const int NEW_SIZE = SIZE * 2;//kích thước mới
    int *newArray = new int[NEW_SIZE];//cấp phát bộ nhớ
    //khởi tạo vòng lặp for
    for (int i = 0; i < NEW_SIZE; i++)
    {
        if (i >= SIZE)
            *(newArray + i) = 0;
        else
            *(newArray + i) = array[i];
    }
    return newArray;//trả mảng sau khi tăng kích thước mảng
}

//hàm hiển thị mảng
void displayArray(int *array, const int SIZE)
{
    //tạo vòng lặp for
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " "; // array[i]
}