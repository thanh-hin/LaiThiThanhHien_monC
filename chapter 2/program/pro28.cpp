#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    const double PI = 3.14159;//khai báo biến hằng số PI
    const double DIAMETER = 10.0;//khai báo biến hằng 
    double circumference;//biến chu vi
    // tính chu vi
    circumference = PI * DIAMETER;
    // hiển thị chu vi
    cout << "The circumference is: " << circumference << endl;
    return 0;
}