#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 10;//kích thước mảng
    int numbers[ARRAY_SIZE];//khai báo mảng với 10 phần tử
    int count = 0;//bộ đếm
    ofstream outputFile;//luồng file đầu ra
    //lưu trữ các giá trị trong mảng
    for (count = 0; count < ARRAY_SIZE; count++)
    numbers[count] = count;
    // mở file để đầu ra
    outputFile.open("SavedNumbers.txt");
    // nhập mảng 
    for (count = 0; count < ARRAY_SIZE; count++)
    outputFile << numbers[count] << endl;
    //đóng file
    outputFile.close();
    cout << "The numbers were saved to the file.\n ";
    return 0;
}