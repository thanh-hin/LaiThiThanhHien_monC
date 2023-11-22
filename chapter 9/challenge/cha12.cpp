#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
int *createOneNewElement(int *, const int);
void displayArray(int *, const int);

int main() //hàm chính
{
    const int SIZE = 5;//khai báo kích thước mảng
    int numbers[SIZE] = { 2, 4, 6, 8, 10};//khai báo mảng cho trước
    int *oneElementAdded = createOneNewElement(numbers, SIZE);//gọi hàm createOneNewElement
    displayArray(numbers, SIZE);//gọi  hàm displayArray
    displayArray(oneElementAdded, (SIZE + 1));//gọi hàm displayArray
    delete [] oneElementAdded;
    oneElementAdded = nullptr; // 0x0
    return 0;
}

//hàm tăng kích thước mảng lên 1 giá trị
int *createOneNewElement(int *array, const int SIZE)
{
    const int NEW_SIZE = SIZE + 1;//khai báo kích thước mới
    int *newArray = new int[NEW_SIZE];//cấp phát bộ nhớ
    //tạo vòng lặp for
    for(int i = 0; i < NEW_SIZE; i++) // 6
    {
        if (i == 0)
            *(newArray + i) = 20; // newArray[i] = 0;
        else 
            *(newArray + i) = array[i - 1];
    }
    // 20, 2, 4, 6, 8, 10
    return newArray;//trả về mảng mới
}

//hàm hiển thị mảng
void displayArray(int *array, const int SIZE)
{
    //khởi tạo vòng lặp for
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " "; // array[i]
}
