#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    // khai báo biến
    const float ASSESSMENT_PER = 0.60;
    float value_of_property,
          current_tax_rate,
          total_annual_property_tax,
          quarterly_tax_bill;
    //nhập giá trị tài sản và thuế suất hiện hành
    cout << "What is the value of the property? ";
    cin  >> value_of_property;
    cout << "What is tha current tax rate? ";
    cin  >> current_tax_rate;
    // tính thuế tài sản thường năm và hóa đơn thuế hàng
    total_annual_property_tax = (((value_of_property * ASSESSMENT_PER) - 5000) / 100) * current_tax_rate;
    quarterly_tax_bill = total_annual_property_tax / 4;
    // Hiển thị thuế tài sản hàng năm và hóa đơn thuế hàng quý
    cout << setprecision(2) << fixed << right;//formatting
    cout << "Value of the property: $";
    cout << setw(11) << value_of_property;
    cout << "\nAnnual property tax:   $";
    cout << setw(11) << total_annual_property_tax;
    cout << "\nQuarterly tax bill:    $";
    cout << setw(11) << quarterly_tax_bill;
    return 0;
}