#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()//chương trình chính
{
    double a, b, c;//khai báo
    //nhập a và b
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    c = sqrt(pow(a, 2.0) + pow(b, 2.0));//tính c theo công thức
    cout << "The length of the hypotenuse is ";
    cout << setprecision(2) << c << endl;//formatting, hiển thị c
    return 0;
}