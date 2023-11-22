#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const float BROKER_COM_PER = 0.02,//hoa hồng
                PRICE_PAID_PER_SHARE = 45.50,//mỗi cổ phiếu mua vơi sgias 45.5
                PRICE_SOLD_PER_SHARE = 56.90;//mỗi cổ phiếu bán có giá 56.9
    const int NUM_OF_SHARES = 1000;//số cổ phiếu mua
    float joes_stock_purchase,//số tiền mua cổ phiếu
          total_com_paid_bought,//tổng số tiền hoa hồng phải trả khi mua
          total_com_paid_sold,//tổng số tiền hoa hồng phải trả khi bán
          amount_stock_sold_for,//tổng lượng tiền đã bán cổ phiếu
          amount_of_profit;//lãi kiếm được sau khi bán cổ phiếu và trả hoa hồng
    // tính các khoản phí
    joes_stock_purchase = NUM_OF_SHARES * PRICE_PAID_PER_SHARE;
    total_com_paid_bought = joes_stock_purchase * BROKER_COM_PER;
    amount_stock_sold_for = NUM_OF_SHARES * PRICE_SOLD_PER_SHARE;
    total_com_paid_sold = amount_stock_sold_for * BROKER_COM_PER;
    amount_of_profit = (amount_stock_sold_for - (total_com_paid_bought + total_com_paid_sold)) - joes_stock_purchase;
    // hiển thị các thông tin dữ liệu
    cout << setprecision(2) << fixed << endl;//formatting
    cout << "Amount paid for the stock: ";
    cout << joes_stock_purchase << endl;
    cout << "Amount commission paid when bought stock: ";
    cout << total_com_paid_bought << endl;
    cout << "Amount Joe sold stock for: ";
    cout << amount_stock_sold_for << endl;
    cout << "Amount commission paid when stock sold: ";
    cout << total_com_paid_sold << endl;
    cout << "Amount of profit Joe made after selling stock and\n";
    cout << "paying two commissions to broker ";
    cout << amount_of_profit << '\n' << endl;
    return 0;
}