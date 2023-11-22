#include <bits/stdc++.h>
using namespace std;

// khai báo hàm
double presentValue(double, double, int);

int main()//hàm chính
{
    //khai báo biến
	double PValue,//số tiền hiện tại hoặc số tiền bạn cần gửi hôm nay
		   FValue,//số tiền trong tương lai bạn muốn có trong tài khoản
		   AIRate;//lãi suất hằng năm
	int    	  Yrs;//số năm
    //nhập số tiền trong tương lai người dùng muốn có trong tài khoản
	cout << "\n              Present value calculator\n"
		 << "--------------------------------------------------------\n"
		 << "What is the future amount you want in the account? ";
	cin  >> FValue;
    //nhập lãi suất hàng năm
	cout << "What is your annual interest rate? ";
	cin  >> AIRate;
    //nhập số năm thực hiện
	cout << "How many years do you plan to let the money sit in the account? ";
	cin  >> Yrs;

	PValue = presentValue(FValue, AIRate, Yrs);//tính số tiền hiện tại cần gửi

	cout << fixed << showpoint << setprecision(2);//formatting
    //hiển thị kết quả
	cout << "You need to deposit $" << PValue << " to have a balance of $"
		 << FValue << " in " << Yrs << " years.\n\n";
	return 0;
}

//hàm tính số tiền hiện tại cần gửi vô tài khoản
double presentValue(double FValue, double AIRate, int Yrs)//định nghĩa hàm
{
	return FValue / pow(1 + AIRate, Yrs);//trả kết quả
}