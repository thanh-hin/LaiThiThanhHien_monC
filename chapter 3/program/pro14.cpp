#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()//chương trình chính
{
    int intValue = 3928;//khai báo biến 
    double doubleValue = 91.5;//khai báo biến
    string stringValue = "John J. Smith"; //khai báo chuỗi + gán nội dung
    cout << "(" << setw(5) << intValue << ")" << endl;// xuất biến với độ rộng 5 spaces
    cout << "(" << setw(8) << doubleValue << ")" << endl;// xuất biến với độ rộng 8 spaces
    cout << "(" << setw(16) << stringValue << ")" << endl;// xuất biến với độ rộng 16 spaces
    return 0;
}