#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 10;//kích thước mảng
    int numbers[ARRAY_SIZE];//khai báo mảng với 10 phần tử
    int count = 0;//bộ đếm
    ifstream inputFile;
    inputFile.open("TenNumbers.txt");//mở file
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
    count++;
    // đóng file
    inputFile.close();
    // hiển thị các số được đọc
    cout << "The numbers are: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;
    return 0;
}