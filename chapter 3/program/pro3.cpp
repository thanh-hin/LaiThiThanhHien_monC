#include <iostream>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    int whole;
    double fractional;
    char letter;
    cout << "Enter an integer, a double, and a character: ";
    cin >> whole >> fractional >> letter;//nhập lần lượt 3 biến
    //hiển thị kết quả
    cout << "Whole: " << whole << endl;
    cout << "Fractional: " << fractional << endl;
    cout << "Letter: " << letter << endl;
    return 0;
}