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
    if (income >= MIN_INCOME)
    {
        // nhập số năm đã làm công việc hiện tại
        cout << "How many years have you worked at "
            << "your current job? ";
        int years; 
        cin >> years;
        if (years > MIN_YEARS)//lồng if
            //điều kiện đậu, thu nhập >= 35000 và số năm >5
            cout << "You qualify.\n";
        else//trường hợp khác là rớt
        {
            cout << "You must have been employed for\n"
                << "more than " << MIN_YEARS
                << " years to qualify.\n";
        }
    }
    else//thu nhập <35000 là rớt
    {
        cout << "You must earn at least $" << MIN_INCOME
            << " to qualify.\n";
    }
    return 0;
}