#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main()
{
    //khai báo biến
    const double TAX_RATE = 0.06; 
    double cost;

    // Nhận chi phí của mặt hàng
    cout << "Enter the cost of the item: ";
    cin >> cost;

    // Tạo một đối tượng Bán hàng cho giao dịch này
    Sale itemSale(cost, TAX_RATE);
    cout << fixed << showpoint << setprecision(2);//foamatting

    //Hiển thị thuế bán hàng và tổng số
    cout << "The amount of sales tax is $"
         << itemSale.getTax() << endl;

    cout << "The total of the sale is $"
         << itemSale.getTotal() << endl;

    return 0;
}