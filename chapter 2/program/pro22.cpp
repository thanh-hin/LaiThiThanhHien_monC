#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    double monthlyPay = 6000.0, contribution;//biến tiền trả hàng tháng và số tiền đóng góp
    // tính và hiển thị mức đóng góp 5%.
    contribution = monthlyPay * 0.05;
    cout << "5 percent is $" << contribution
        << " per month.\n";
    // tính và hiển thị mức đóng góp 7%
    contribution = monthlyPay * 0.07;
    cout << "7 percent is $" << contribution
        << " per month.\n";
    // tính và hiển thị mức đóng góp 10%.
    contribution = monthlyPay * 0.1;
    cout << "10 percent is $" << contribution
        << " per month.\n";
    return 0;
}