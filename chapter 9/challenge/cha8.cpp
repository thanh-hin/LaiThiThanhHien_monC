#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
int findMode(int [], const int); 

int main()//hàm chính
{
    //khai báo 
    const int SIZE = 10;// kích thước mảng
    int numbers[SIZE] = { 1, 2, 3, 4, 5, 7, 7, 8 ,7, 10 };//khai báo mảng cho trước
    int mode = findMode(numbers, SIZE);
    cout << "\nMode = " << mode << endl;//hiển thị nội dung trong mode
    return 0;
}

//hàm tìm giá trị max
int findModes(int array[], const int SIZE)
{
    //khai báo biến
    int maxValue = 0,
        maxCount = 0,
        i, j;
    //khởi tạo vòng lặp
    for (i = 0; i < SIZE; i++)
    {
        int count = 0;//khai báo bộ đếm
        for (j = 0; j < SIZE; j++)
        {
            if (*(array + j) == *(array + i)) // array[j] == array[i]
                count++;//bộ đếm tăng
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxValue = *(array + i); // array[i]
        }
        else if (maxCount == 1)
            maxValue = -1;
    }

    return maxValue;//trả về giá trị max 
}