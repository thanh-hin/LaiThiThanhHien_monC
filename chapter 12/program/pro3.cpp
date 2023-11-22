#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream dataFile;//định nghĩa
    double num = 17.816392;
    dataFile.open("numfile.txt", ios::out);//mở chế độ đầu ra
    dataFile << fixed;//formating
    dataFile << num << endl;//ghi vào file
    dataFile << setprecision(4);//formatting
    dataFile << num << endl;//ghi vao file
    dataFile << setprecision(3);//formatting
    dataFile << num << endl;//ghi vao file
    dataFile << setprecision(2);//formatting
    dataFile << num << endl;//ghi vao file
    dataFile << setprecision(1);//formatting
    dataFile << num << endl;//ghi vao file
    cout << "Done.\n";
    dataFile.close();//đóng file
    return 0;
}