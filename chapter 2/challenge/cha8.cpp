#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến giá từng sản phẩm
    double item1 = 15.95,
            item2 = 24.95,
            item3 = 6.95,
            item4 = 12.95,
            item5 = 3.95;
    double subtotal = item1 + item2 + item3 + item4 + item5;//tổng tiền bán
    double salesTax = subtotal * 0.07;//tiền thuế bán hàng
    double total = subtotal + salesTax;//tổng số tiền
    //hiển thị giá từng sản phẩm
    cout <<"The Price of item 1: "<<item1<<"\n";
    cout <<"The Price of item 2: "<<item2<<"\n";
    cout <<"The Price of item 3: "<<item3<<"\n";
    cout <<"The Price of item 4: "<<item4<<"\n";
    cout <<"The Price of item 5: "<<item5<<"\n";
    //hiển thị tiền bán, tiền thuế và tổng tiền
    cout <<"The subtotal of the sale: "<<subtotal<<"\n";
    cout <<"The amount of the sale tax: "<<salesTax<<"\n";
    cout <<"The total: "<<total <<"\n";
    return 0;
}