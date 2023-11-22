#include <bits/stdc++.h>
using namespace std;

int *getRandomNumbers(int);//khai báo hàm

int main()//hàm chính
{
    int *numbers = nullptr; // Để trỏ đến những con số
    // nhập mảng gồm 5 số ngẫu nhiên
    numbers = getRandomNumbers(5);
    // hiển thị 5 số đã nhập
    for (int count = 0; count < 5; count++)
        cout << numbers[count] << endl;
    // Giải phóng bộ nhớ
    delete [] numbers;
    numbers = 0;
    return 0;
}

//hàm nhận số ngẫu nhiên
int *getRandomNumbers(int num)//định nghĩa hàm getRandomNumbers
{
    int *arr = nullptr; // Mảng để giữ số
    // trả về một con trỏ null nếu num bằng 0 hoặc âm
    if (num <= 0)
        return nullptr;
    // Cấp phát mảng động
    arr = new int[num];
    // Tạo trình tạo số ngẫu nhiên bằng cách chuyển giá trị trả về của time(0) cho srand
    srand( time(0) );
    // Điền vào mảng với các số ngẫu nhiên
    for (int count = 0; count < num; count++)
        arr[count] = rand();
    // Trả về một con trỏ tới mảng
    return arr;
}