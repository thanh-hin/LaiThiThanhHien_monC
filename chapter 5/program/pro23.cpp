#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ifstream inputFile;//khởi tạo lệnh đọc
    int number;
    //mở file
    inputFile.open("BadListOfNumbers.txt");
    // nếu mở file thành công thì xử lí file
    if (inputFile)
    {
    // đọc số trong file và hiển thị
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        // đóng file
        inputFile.close();
    }
    else
    {
        // báo lỗi
        cout << "Error opening the file.\n";
    }
    return 0;
}