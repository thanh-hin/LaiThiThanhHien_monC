#include <iostream>
using namespace std;
int main ()
{
    int minNumber,//số bắt đầu
        maxNumber;//số kết thúc
    //nhập giá trị bắt đầu và giá trị kết thúc của bảng bình phương
    cout << "I will display a table of numbers and "
        << "their squares.\n"
        << "Enter the starting number: ";
    cin >> minNumber;
    cout << "Enter the ending number: ";
    cin >> maxNumber;
    // hiển thị bảng kết quả
    cout << "Number Number Squared\n"
         << "-------------------------\n";
    for (int num = minNumber; num <= maxNumber; num++)//chạy từ số bắt đầu đến số kết thúc là dừng
        cout << num << "\t\t" << (num * num) << endl;
    return 0;
}