#include <iostream>
using namespace std;
int main()
{
    //khai báo biến hằng
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];//khai báo mảng hours có 6 phần tử
    //nhập các giá trị phần tử trong mảng
    cout << "Enter the hours worked by "
    << NUM_EMPLOYEES << " employees: ";
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];
    // xuất từng giá trị trong mảng hours
    cout << "The hours you entered are:";
    cout << " " << hours[0];
    cout << " " << hours[1];
    cout << " " << hours[2];
    cout << " " << hours[3];
    cout << " " << hours[4];
    cout << " " << hours[5] << endl;
    return 0;
}