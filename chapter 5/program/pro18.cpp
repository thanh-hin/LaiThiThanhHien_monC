#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    ofstream outputFile;//khởi tạo 1 file
    string name1, name2, name3;//khái báo 3 biến tên
    // mở file
    outputFile.open("Friends.txt");
    // nhập tên 3 người bạn
    cout << "Enter the names of three friends.\n";
    cout << "Friend #1: ";
    cin >> name1;
    cout << "Friend #2: ";
    cin >> name2;
    cout << "Friend #3: ";
    cin >> name3;
    // viết tên 3 người bạn vào file
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "The names were saved to a file.\n";
    // đóng file
    outputFile.close();
    return 0;
}