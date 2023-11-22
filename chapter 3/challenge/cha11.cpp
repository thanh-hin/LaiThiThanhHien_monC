#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //kai báo biến
    float payment,
          insurance,
          gas,
          oil,
          tires,
          maintenance,
          total_monthly_exp,
          annual_cost;
    //nhập dữ liệu
    cout << "\nEnter the following monthly costs for your";
    cout << "\nautomobile: " << endl;
    cout << "Loan Payment : $";
    cin >> payment;
    cout << "Insurance    : $";
    cin >> insurance;
    cout << "Gas          : $";
    cin >> gas;
    cout << "Oil          : $";
    cin >> oil;
    cout << "Tires        : $";
    cin >> tires;
    cout << "Maintenae    : $";
    cin >> maintenance;
    cout << endl;
    // tính tổng chi phí hàng tháng
    total_monthly_exp = payment + insurance + gas + oil + tires + maintenance;
    // tính tổng chi phí hàng năm
    annual_cost = total_monthly_exp  * 12;
    // xuất tổng tiền chi phí hàng tháng
    cout << "\nMonthly car expenses = $" << total_monthly_exp;
    // xuất tổng chi phí hàng năm
    cout << "\nTotal annual cost = $" << annual_cost;
    return 0;
}