#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream outputFile;// khởi tạo file
    int number1, number2, number3;//khai báo biến 
    // mở file
    outputFile.open("Numbers.txt");
    // nhập 3 số vào
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another number: ";
    cin >> number2;
    cout << "One more time. Enter a number: ";
    cin >> number3;
    // viết những số vào file
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "The numbers were saved to a file.\n";
    // đóng file
    outputFile.close();
    cout << "Done.\n";
    return 0;
}