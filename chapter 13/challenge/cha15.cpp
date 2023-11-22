#include <iostream>
#include <string>
#include <iomanip>
#include "Mortgage.h"

using namespace std;

int main()
{
    //tạo đối tượng Mortgage
    Mortgage mtg;

    //tạo lấy dữ liệu từ người dùng và đặt thành object
    mtg.setLoan();
    mtg.setInterestRate();
    mtg.setYears();

    //hiển thị đầu ra cuối cùng
    cout << setprecision(2) << fixed;//formatting
    cout << "\nMonthly payment to bank: $";
    cout << mtg.getMonthlyPayment();

    cout << "\nTotal paid to bank at the end of period: $";
    cout << mtg.getTotalPaid();

    return 0;
}
