#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến 
    const double EXTRA_MONTHLY_CHARGE =  15,
                 TEN_CENTS            = 0.10,
                 EIGHT_CENTS          = 0.08,
                 SIX_CENTS            = 0.06,
                 FOUR_CENTS           = 0.04; 
    double beginning_balance,//số dư ban đầu 
           total_monthly_charges = 10;//phí mỗi tháng
    int number_of_checks;//số séc
    //nhập số dư kì đầu 
    cout << "\nWhat is the beginning balance? $";
    cin >> beginning_balance;
    //xác thực đầu vào của số dư
    if (beginning_balance < 0)
        cout << "URGENT! Your account is overdrawn.";
    // xác định số phí mỗi tháng dựa vào số séc
    if (beginning_balance < 400)//số dư đầu kì bé hơn 400
        total_monthly_charges += EXTRA_MONTHLY_CHARGE;
    //nhập số séc
    cout << "\nNumber of check written? ";
    cin >> number_of_checks;
    if (number_of_checks < 0)//xác thực đầu vào của số séc
    {
        cout << "Oops. Number of checks written must be\n 0 or more.\n";
        cout << "Please rerun the program and try again.";
    }
    else     //xác định số séc và tính số tiền phí dịch vụ mỗi tháng
    {
        cout << setprecision(2) << fixed;//formatting
        if (number_of_checks >= 0 && number_of_checks < 20)
            total_monthly_charges += (number_of_checks * TEN_CENTS);
        else if (number_of_checks >= 20 && number_of_checks <= 39)
            total_monthly_charges += (number_of_checks * EIGHT_CENTS);
        else if (number_of_checks >= 40 && number_of_checks <= 59)
            total_monthly_charges += (number_of_checks * SIX_CENTS);
        else if (number_of_checks >= 60)
            total_monthly_charges += (number_of_checks * FOUR_CENTS);
    }
        //hiển thị số tiền phí dịch vụ mỗi tháng
        cout << "Bank's service fees for the month are: $" << total_monthly_charges << endl;
    return 0;
}