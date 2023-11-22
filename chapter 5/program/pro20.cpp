#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ifstream inFile;//lệnh khởi tạo
    int value1, value2, value3, sum;
    // mở file
    inFile.open("NumericData.txt");
    // đọc 3 cái số từ file
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;
    // đóng file
    inFile.close();
    // tính tổng
    sum = value1 + value2 + value3;
    // hiển thị 3 số
    cout << "Here are the numbers:\n"
        << value1 << " " << value2
        << " " << value3 << endl;
    // hiển thị tổng
    cout << "Their sum is: " << sum << endl;
    return 0;
}