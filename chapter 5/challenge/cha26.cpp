#include <bits/stdc++.h>
using namespace std;
int main()
{	
	ofstream OutputFile;			// Xác định đối tượng ofstream
    //khai báo biến
	double StartBal,                // Starting Balance
		   Deposit,				    // Monthly deposits
		   Withdrawn,				// Monthy withdrawls
		   TotDepo  = 0,			// Total dposits
		   TotalWd  = 0,			// Total withdrawls
		   MthStart = 0, 			// Monthly starting balance
		   MthInt,					// Monthly interest
		   TotInt   = 0,			// Total Interest
		   MthEnd,					// Monthly ending balance
		   AnnInt;					// Annual Interest

    // Yêu cầu người dùng nhập số dư ban đầu và lãi suất hàng năm
	cout << "This program calculates the balance of a\n"
	     << "savings account at the end of a three month period.\n\n";
    cout << "What is the starting balance of the account? ";
    cin  >> StartBal;
    cout << endl;
	cout << "Enter the annual interest as a decimal: ";
	cin  >> AnnInt;
	cout << endl;
	MthStart += StartBal;
	//Lặp lại vòng lặp mỗi tháng một lần
	for (int Mth = 1; Mth <= 3; Mth++)
	{
		do
		{	// Yêu cầu người dùng nhập số tiền gửi trong tháng
            // và chỉ xác thực số nguyên dương
			cout << "What is the total amount deposited\ninto "
				 << "the account during month " << Mth << "? ";
			cin  >> Deposit;
			if (Deposit < 0)//xác thực đầu vào	
				cout << "Invalid integer.\n"<< "Deposits must be a positive integer.\n";
		} while (Deposit < 0); 
		cout << endl;
		TotDepo += Deposit;
		do
		{	// Yêu cầu người dùng nhập số tiền rút hàng tháng và chỉ xác thực số tiền tích cực
            // số nguyên và Tổng số tiền gửi lớn hơn số tiền rút
			cout << "What is the total amount withdrawn\nfrom "
				 << "the account during month " << Mth << "? ";
			cin  >> Withdrawn;
            //tạo lệnh điều kiện if
			if (Withdrawn < 0 || Withdrawn > TotDepo)
			{	
				cout << "Invalid integer.\n";
				if (Withdrawn < 0)
				{
					cout << "Withdrawals must be a positive integer.\n";
				}
				else
				{
					cout << "The Balacne must be greater than withdrawals.\n";
				}
			}
		} while (Withdrawn < 0 || Withdrawn > TotDepo);
		// Tích lũy tổng số tiền rút
		TotalWd += Withdrawn;
		// Tính số dư cuối tháng
		MthEnd = MthStart + Deposit - Withdrawn;
		//Tính lãi hàng tháng
		MthInt = ((MthStart + MthEnd) / 2.0) * (AnnInt / 12.0);
		//Tích lũy tổng lãi
	 	TotInt += MthInt;
	 	MthStart = MthEnd + MthInt;
	}
	OutputFile.open("Savings_Account.txt"); 	// mở file
	if (!OutputFile)							// kiểm tra lỗi mở file
		cout << "Error opening file.\n";//báo lỗi
	else
	{	// viết báo cáo xuống file
		OutputFile << "\n Quarterly Savings Account Report\n"
				   << "------------------------------------\n";
		OutputFile << fixed << showpoint << setprecision(2);//formatting
		OutputFile << "Starting balance  : $ " << setw(9) << StartBal << endl;
   		OutputFile << "Total deposits    : $ " << setw(9) << TotDepo << endl;
   		OutputFile << "Total withdrawals : $ " << setw(9) << TotalWd << endl;
		OutputFile << "Total interest    : $ " << setw(9) << TotInt << endl;
		OutputFile << "Final balance     : $ " << setw(9) << MthStart << endl;
	}
	cout << "Saved to file.";//thông báo đã lưu vào file

	OutputFile.close();//đóng file
	return 0;
}