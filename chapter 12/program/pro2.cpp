#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream dataFile;// định nghĩa
    dataFile.open("demofile.txt", ios::out);//mở file
    cout << "Now writing data to the file.\n";
    //ghi vào file
    dataFile << "Jones\n";//ghi dòng 1
    dataFile << "Smith\n";//ghi dòng 2
    cout << "Now closing the file.\n";
    dataFile.close();//đóng file
    cout << "Opening the file again...\n";
    dataFile.open("demofile.txt", ios::out | ios::app);//mở tệp ở chế độ viết thêm
    cout << "Writing more data to the file.\n";
    //ghi vào file
    dataFile << "Willis\n";//ghi dòng 3
    dataFile << "Davis\n";//ghi dòng 4
    cout << "Now closing the file.\n";
    dataFile.close();//đóng file
    return 0;
}