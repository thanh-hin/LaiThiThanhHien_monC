#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MONTHS = 12;//khai báo biến hằng
    //khai báo biến
    float starting_balance,
          annual_interest_rate,
          amount_deposited,
          amount_withdrawn,
          interest_rate,
          monthly_interest_rate,
          balance,
          total_deposits,
          total_withdrawn,
          total_interest_earned;
    int months_since_established;
    //nhập lãi suất hàng năm
    cout << "\nEnter annual interest rate: ";
    //xác thực đầu vào lãi suất hàng năm
    while (!(cin >> annual_interest_rate))
    {
        cout << "Error: a number must be entered... ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    //nhập số dư ban đầu
    cout << "Enter starting balance: ";
    //xác thực đầu vào số dư ban đầu
    while (!(cin >> starting_balance))
    {
        cout << "Error: a number must be entered... ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    balance = starting_balance;//gán 
    //nhập số tháng
    cout << "Enter # of months passed since account was established: ";
    //xác thực đầu vào số tháng
    while (!(cin >> months_since_established) || months_since_established < 0)
    {
        cout << "Error: a number must be entered... ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    monthly_interest_rate = annual_interest_rate / MONTHS;//tính lãi suất hàng tháng

    for (int i = 0; i < months_since_established; i++)
    {
        //nhập số tiền gửi trong tháng
        cout << "Enter the amount deposited for month "  << (i + 1) << ": ";
        //xác thực đầu vào
        while (!(cin >> amount_deposited) ||  amount_deposited < 0)
        {
            cout << "Error: a positive number must be "
                 << "entered.\nEnter the amount deposited "
                 << "for month " << (i + 1) << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        total_deposits += amount_deposited;//tính tổng tiền gửi
        balance += amount_deposited;//tính số dư còn lại

        if (balance < 0)//xác thực 
            break;
        //nhập số tiền rút
        cout << "Enter the amount withdrawn for month "  << (i + 1) << ": ";
        while (!(cin >> amount_withdrawn) ||  amount_withdrawn < 0)//xác thực đầu vào
        {
            cout << "Error: a positive number must be "
                 << "entered. Enter the amount withdrawn "
                 << "for month " 
                 << (i + 1) << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        total_withdrawn += amount_withdrawn;//tính tổng tiền rút
        balance -= amount_withdrawn;//tính số dư còn lại

        if (balance < 0)
            break;

        interest_rate = (monthly_interest_rate * balance);//tính lãi suất
        balance += interest_rate;

        if (balance < 0)
            break;

        total_interest_earned += (interest_rate);
    } // for loop end
    if(balance < 0)//xác thực báo lỗi
    {
        cout << "I'm sorry, your account has been closed\n"; 
        cout << "due to having a negative balance." << endl;
    }
    else
    {
        cout << setprecision(2) << fixed << endl;//formatting
        //hiển tị kết quả
        cout << "Starting balance            = $" << starting_balance << endl;
        cout << "Ending balance              = $" << balance << endl;
        cout << "Total amount in deposits    = $" << total_deposits << endl;
        cout << "Total amount in withdrawals = $" << total_withdrawn << endl;
        cout << "Total interest earned       = $" << total_interest_earned << endl;
    }
    return 0;
}