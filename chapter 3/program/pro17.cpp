#include <iostream>
#include <iomanip>
using namespace std;
int main()//chương trình chính
{
    double day1, day2, day3, total;//khai báo biến
    // nhập doanh số mỗi ngày
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;
    // tính tông rdoanh số
    total = day1 + day2 + day3;
    // hiển thị số liệu doanh thu 
    cout << "\nSales Figures\n";
    cout << "-------------\n";
    cout << setprecision(2)<<fixed;//formatting
    cout << "Day 1: " << setw(8) << day1 << endl;
    cout << "Day 2: " << setw(8) << day2 << endl;
    cout << "Day 3: " << setw(8) << day3 << endl;
    cout << "Total: " << setw(8) << total << endl;
    return 0;
}