#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến hằng
     const float STATE_SALES_TAX  = 0.04,
                COUNTY_SALES_TAX = 0.02,
                SALES_TAX        = 0.06;
    //khai báo biến
    float S,    // sản phẩm bán
          T,    // tổng thu  (product sales + sales tax)
          total_state_tax,
          total_county_tax,
          total_sales_tax;
    string month;
    int year;
    // nhập tháng năm và tổng thu
    cout << "Enter the month to receive the report for: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Total amount collected for the month of " << month << ": ";
    cin >> T;
    // Tính doanh thu, thuế bán hàng của quận, thuế bán hàng của tiểu bang và tổng thuế bán hàng
    S = T / 1.06;
    total_state_tax = S * STATE_SALES_TAX;
    total_county_tax = S * COUNTY_SALES_TAX;
    total_sales_tax  = S * SALES_TAX;
    // hiển thị kết quả các phép tính
    cout << setprecision(2) << fixed << right << endl;//formatting
    cout << "Month: " << month << endl;
    cout << "Total Collected:    $" << setw(10) << T << endl;
    cout << "Sales:              $" << setw(10) << S << endl;
    cout << "County Sales Tax:   $" << setw(10) << total_county_tax << endl;
    cout << "State Sales Tax:    $" << setw(10) << total_state_tax << endl;
    cout << "Total Tales Tax:    $" << setw(10) << total_sales_tax << endl;
    return 0;
}