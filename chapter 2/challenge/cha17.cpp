#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    double stock = 750,
            price = 35.00,
            stockbroken = 0.02;
    double total, commission, stockAlone;
    //gán công thức tính
    stockAlone = stock * price;//tiền cổ phiếu
    commission = stockbroken * stockAlone;//tiền hoa hồng
    total = stockAlone + commission;//tổng tiền
    //hiển thị kết quả
    cout <<"The amount paid for the stock alone: "<<stockbroken <<endl;
    cout <<"The amount of the commmision: " <<commission <<endl;
    cout <<"The total: " <<total<<endl;
    return 0;
}