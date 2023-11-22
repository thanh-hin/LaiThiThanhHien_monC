#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    // khhai báo biến
    int N;
    float Rate,
          L,
          Payment,
          amount_paid_back,
          interest_paid;
    //nhập dữ liệu
    cout << "What is interest rate of the loan? %";
    cin >> Rate;
    cout << "What is the Amount of the loan? ";
    cin >> L;
    cout << "Number of payments? ";
    cin >> N;
    // tính số tiền chính xác
    Rate /= 12;
    Rate /= 100; // 4.25% == 0.0425
    // Payment = [Rate * (1 + Rate)^N / ((1 + Rate)^N - 1)] * L
    Payment = ((Rate) * pow(1 + (Rate), N) / (pow(1 + (Rate), N) - 1)) * L;
    Rate *= 100; // 0.0425 == 4.25
    amount_paid_back = N * Payment;
    interest_paid    = (N * Payment) - L;
    //hiển thị các thông tin 
    cout << setprecision(2) << fixed << right << endl;//formatting
    cout << "Loan Amount:           $";
    cout << setw(10) << L << endl;
    cout << "Monthly Interest Rate: ";
    cout << setw(10) << Rate << '%' << endl;
    cout << "Number of Payments:     ";
    cout << setw(10) << N     << endl;
    cout << "Monthly Payment:       $";
    cout << setw(10) << Payment << endl;
    cout << "Amount Paid Back:      $";
    cout << setw(10) << amount_paid_back << endl;
    cout << "Interest Paid:         $";
    cout << setw(10) << interest_paid;
    return 0;
}