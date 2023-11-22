#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 3;//kích thước mảng
    int values[SIZE]; // mảng với 3 phần tử
    int count;//biến bộ đếm
    // cố gắng lưu trữ 5 phần tử 
    cout << "I will store 5 numbers in a 3-element array!\n";
    for (count = 0; count < 5; count++)
    values[count] = 100;
    //hiển thị con số nếu chương trình chạy
    cout << "If you see this message, it means the program\n";
    cout << "has not crashed! Here are the numbers:\n";
    for (count = 0; count < 5; count++)
    cout << values[count] << endl;
    return 0;
}