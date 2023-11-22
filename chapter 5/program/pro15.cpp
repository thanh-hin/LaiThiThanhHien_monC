#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream outputFile;//xuất ra tập tin
    outputFile.open("demofile.txt");//mở file  
    cout << "Now writing data to the file.\n";
    // Viết bốn tên vào tập tin
    //output dùng để đưa dữ liệu vào file
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";
    // đóng file 
    outputFile.close();
    cout << "Done.\n";
    return 0;
}