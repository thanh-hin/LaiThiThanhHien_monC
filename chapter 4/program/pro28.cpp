#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến hằng
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    // nhập thu nhập hàng năm
    cout << "What is your annual income? ";
    double income; //biến thu nhập hàng năm
    cin >> income;
    // nhập số năm đã làm công việc hiện tại
    cout << "How many years have you worked at "
        << "your current job? ";
    int years;
    cin >> years;
    // xác định khoản vay của người dùng
    if (income >= MIN_INCOME || years > MIN_YEARS)//xác định điều kiện đậu
        cout << "You qualify.\n";
    else//trường hợp khác là rớt
    {
        cout << "You must earn at least $"
            << MIN_INCOME << " or have been "
            << "employed more than " << MIN_YEARS
            << " years.\n";
    }
    return 0;
}