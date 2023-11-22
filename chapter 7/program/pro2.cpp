#include <iostream>
using namespace std;
int main()
{
    //khai báo biến hằng
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];//khai báo mảng hours có 6 phần tử
    int count;
    //nhập giờ làm việc
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout <<"enter the hours worked by employee "
            << (count + 1) << ": ";
        cin >> hours[count];
    }
    // hiển thị nội dung trong mảng
    cout << "The hours you entered are:";
    for (count = 0; count < NUM_EMPLOYEES; count++)
        cout << " " << hours[count];
        cout << endl;
    return 0;
}