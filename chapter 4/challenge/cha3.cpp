#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    int day, month, year;//khai báo biến ngày tháng năm
    //nhập ngày tháng năm
    //năm chỉ nhập 2 số cuối
    cout << "Enter day, month, year: "<<endl;
    cin >>day>>month>>year;
    //xác định tích ngày tháng có bằng năm ko và hiển thị lời chúc
    if ( day * month == year )
    {
        cout << "The date is magic";
    }
    else
    {
        cout << "The dat is NOT magic";
    }
    return 0;
}