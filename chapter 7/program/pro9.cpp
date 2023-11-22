#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 7;//kích thước mảng
    int numbers[SIZE] = {1, 2, 4, 8}; // khởi tạo 4 phần tử đầu tiên
    cout << "Here are the contents of the array:\n";
    //hiển thị giá trị của mảng
    for (int index = 0; index < SIZE; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}