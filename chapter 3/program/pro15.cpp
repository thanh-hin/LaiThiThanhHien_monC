#include <iostream>
#include <iomanip>
using namespace std;
int main()//chương trình chính
{
    double quotient, number1 = 132.364, number2 = 26.91;//khai báo biến
    quotient = number1 / number2;//gán công thức tính
    cout << quotient << endl;//hiển thị kết quả
    //setprecision là lệnh đặt số lượng chữ số in ra
    cout << setprecision(5) << quotient << endl;// in đến số thứ 5
    cout << setprecision(4) << quotient << endl;// in đến số thứ 4
    cout << setprecision(3) << quotient << endl;// in đến số thứ 3
    cout << setprecision(2) << quotient << endl;// in đến số thứ 2
    cout << setprecision(1) << quotient << endl;// in đến số thứ 1
    return 0;
}