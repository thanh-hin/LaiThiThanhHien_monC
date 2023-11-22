#include <bits/stdc++.h>
using namespace std;

// khai báo hàm
void getData(int&, double&, double&, int&);
int ProjYr(int, double, double);

int main()//hàm chính
{
    //khai báo biến
	int 	StartPop,	// Kích thước ban đầu của quần thể
			NumOfYrs,	// Số năm hiển thị
			ProjPop;	// dân số dự kiến ​​vào cuối mỗi năm
	double BirthRate,	// Tỷ lệ sinh hàng năm
		   DeathRate; 	// Tỷ lệ tử vong hàng năm
	// gọi hàm getData để nhập dữ liệu
	getData(StartPop, BirthRate, DeathRate, NumOfYrs);
	// Gọi hàm Projyr và hiển thị kết quả theo từng năm
	for (int Yr = 1; Yr <= NumOfYrs; Yr++)
	{
		ProjPop = ProjYr(StartPop, BirthRate, DeathRate);
		cout << setw(4) << Yr << "      " << setw(10) << StartPop;
		cout << "             " << setw(10) << ProjPop << endl;
		StartPop = ProjPop;
	}
	return 0;
}

//hàm tính quy mô dân số mới
int ProjYr(int StartPop, double BirthRate, double DeathRate)//định nghĩa hàm
{
	return StartPop * (1 + BirthRate) * (1 - DeathRate);//trả về kết quả 
}

//hàm nhập dữ liệu 
void getData(int& StartPop, double& BirthRate, double& DeathRate, int& NumOfYrs)//định nghĩa hàm
{
	do
	{  //nhập kích thước ban đầu của tổng thể
		cout << "What is the starting size of the population? ";
		cin  >> StartPop;
	} while (StartPop < 2);//xác thực đầu vào phải lớn hơn 2

	do
	{   //nhập tỉ lệ sinh hàng năm
		cout << "What is the annual birth rate? ";
		cin  >> BirthRate;
	} while (BirthRate < 0);//xác thực đầu vào phải lớn hơn 0

	do
	{   //nhập tỉ lệ tử vong hàng năm
		cout << "What is the annual death rate? ";
		cin  >> DeathRate;
	} while (DeathRate < 0);//xác thực đầu vào phải lớn hơn 0

	do
	{   //nhập số năm
		cout << "How many year to display? ";
		cin  >> NumOfYrs;
	} while (NumOfYrs < 1);//xác thực đầu vào phải lớn hơn 1
}