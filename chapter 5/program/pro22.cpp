#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ifstream inputFile;//khởi tạo
    int number;
    // mở file
    inputFile.open("ListOfNumbers.txt");
    // đọc số từ file và hiển thị nó
    while (inputFile >> number)
    {
        cout << number << endl;
    }
    // đóng file
    inputFile.close();
    return 0;
}