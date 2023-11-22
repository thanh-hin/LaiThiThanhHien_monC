#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream outputFile;//tạo một file
    outputFile.open("demofile.txt");//mở file
    cout << "Now writing data to the file.\n";
    // viết 4 tên vào file
    outputFile << "Bach";
    outputFile << "Beethoven";
    outputFile << "Mozart";
    outputFile << "Schubert";
    // đóng file
    outputFile.close();
    cout << "Done.\n";
    return 0;
}