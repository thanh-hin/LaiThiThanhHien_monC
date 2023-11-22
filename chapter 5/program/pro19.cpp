#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    ifstream inputFile;// khởi tạo 
    string name;//khai báo biến tên
    inputFile.open("Friends.txt");//mở file
    cout << "Reading data from the file.\n";
    inputFile >> name;//đọc tên 1 từ file
    cout << name << endl; //hiển thị tên 1
    inputFile >> name;//đọc tên 2 từ file
    cout << name << endl; // hiển thị tên 2
    inputFile >> name;//đọc tên 3 từ file
    cout << name << endl; // hiển thị tên 3
    inputFile.close();//đóng file
    return 0;
}