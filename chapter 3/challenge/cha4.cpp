#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    int month1, month2, month3;
    float rainfall1, rainfall2, rainfall3, total, avr;
    //chương trình nhập tên tháng và lượng mưa của tháng đó
    cout << "Enter the name for month 1: ";
    cin >> month1;
    cout << "How many inches of rain fell for " << month1;
    cout << ": ";
    cin >> rainfall1;
    cout << "Enter the name for month 2: ";
    cin >> month2;
    cout << "How many inches of rain fell for " << month2;
    cout << ": ";
    cin >> rainfall2;
    cout << "Enter the name for month 3: ";
    cin >> month3;
    cout << "How many inches of rain fell for " << month3;
    cout << ": ";
    cin >> rainfall3;
    //tính tổng lượng mưa 3 tháng
    total = rainfall1 + rainfall2 + rainfall3;
    //tính trung bình lượng mưa 
    avr = total / 3;
    //hiển thị kết quả
    cout << setprecision(2) << fixed;//formatting
    cout << "\nThe average rainfall for ";
    cout << month1 << ", ";
    cout << month2 << ", and ";
    cout << month3 << " is ";
    cout << avr << " inches.\n" << endl;
    return 0;
}