#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    double payAmount = 2200,//số tiền được trả mỗi kì lương
            payPeriods = 26,// số kì lương làm 1 năm
            annualPay = payAmount * payPeriods;//tỉnh tổng lương hàng năm
    cout <<"The total annual pay "<< annualPay <<endl;//hiển thị tổng lương hàng năm
    return 0;
}