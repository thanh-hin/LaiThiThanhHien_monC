#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int days;//số ngày 
    double total = 0.0;//bộ tích lũy
    // nhập số ngày
    cout << "For how many days do you have sales figures? ";
    cin >> days;
    // nhập doanh số mỗi ngày và tính tổng tích lũy 
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;
        total += sales; // tổng tích lũy chạy
    }
    // hiển thị tổng tích lũy bán hàng
    cout << fixed << showpoint << setprecision(2);//formatting
    cout << "The total sales are $" << total << endl;
    return 0;
}