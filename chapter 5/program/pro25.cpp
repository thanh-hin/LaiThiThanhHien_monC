#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //khai báo biến
    double value;
    char choice;
    //nhập số 
    cout << "Enter a number: ";
    cin >> value;
    cout << "This program will raise " << value;
    cout << " to the powers of 0 through 10.\n";
    // tạo lũy thừa (1-10) của 1 số 
    for (int count = 0; count <= 10; count++)
    {
        cout << value << " raised to the power of ";
        cout << count << " is " << pow(value, count);
        //muốn thoát khỏi chương trình nhấn Q/q, nhấn phím khác để coi lũy thừa tiếp theo
        cout << "\nEnter Q to quit or any other key ";
        cout << "to continue. ";
        cin >> choice;//nhâp luajwc chọn
        if (choice == 'Q' || choice == 'q')
        break;
    }
    return 0;
}