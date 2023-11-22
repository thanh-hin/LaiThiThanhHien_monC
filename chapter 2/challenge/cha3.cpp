#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    double product = 95,//giá sản phẩm
            stateSalesTax = 0.04,//thuế ở tiểu bang
            countrySalesTax = 0.02,//thuế ở nông thôn
            toTalSalestax;//tổng thuế bán
    toTalSalestax = product * stateSalesTax + product * countrySalesTax;//tính tổng thuế bán
    cout <<"The total sale tax is "<<toTalSalestax<<endl;//hiển thị tổng thuế
    return 0;
}