#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream dataFile;// định nghĩa 
    cout << "Opening file...\n";
    dataFile.open("demofile.txt", ios::out);//mở file , dữ liệu được ghi vào cuối file
    cout << "Now writing data to the file.\n";
    //ghi vaò file
    dataFile << "Jones\n";
    dataFile << "Smith\n";
    dataFile << "Willis\n";
    dataFile << "Davis\n";
    dataFile.close();//đóng file
    cout << "Done.\n";
    return 0;
}