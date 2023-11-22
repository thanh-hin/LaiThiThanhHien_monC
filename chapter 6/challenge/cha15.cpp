#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double calcData(int, double, double, double);
double calcData(double, double);

int main()//hàm chính
{
    //khai báo biến
	char   InOut;//lựa chọn của người dùng
	int    NumOfDays;//ngày nằm viện
	double DailyRate,//tỉ giá hàng ngày
		   ServChges,//chi phí dịch vụ
		   MedChges,//chi phí thuốc
		   TotChges;//tổng chi phí phải trả
    //nhập lựa chọn bệnh nhân ngoại trú hoặc nội trú
	cout << "Enter (I) for in-patient\nEnter (O) for out-patient\n";
	cin  >> InOut; 
    //xác định bên nhân thuộc trường hợp nào
	switch(InOut)
	{
        // trường hợp bệnh nhân nội trú
		case 'i' :
		case 'I' :  do
					{   //nhập số ngày ở bệnh viện
						cout << "How many days were spent in the hospital? ";
				   		cin  >> NumOfDays;
				   		if (NumOfDays < 0)//xác thực đầu vào ngày nằm viện
				   			cout << "Number of days must be greater than 0.\n";//báo lỗi
				   	} while(NumOfDays < 0);//xác thực đầu vào 

				   	do
				   	{   //nhập tỉ giá hàng ngày 
				   		cout << "What was the daily rate? ";
				   		cin  >> DailyRate;
				   		if (DailyRate < 0)//xác thực đầu vào tỉ giá
				   			cout << "Daily rate must be greater than 0.\n";//báo lỗi
				   	} while(DailyRate < 0);//xác thực đầu vào
		//trường hợp ngoại trú
		case 'o' :
		case 'O' :  do
				    {   //nhập chi phí các dịch vụ của bệnh viện
						cout << "Enter the charges for hospital services (lab tests, etc.): ";
				   		cin  >> ServChges;
				   		if (ServChges < 0)//xác thực đầu vào chi phí 
				   			cout << "Charges for hospital services must be greater than 0.\n";//báo lỗi
				    } while (ServChges < 0);//xác thực đầu vào
				    do
				    {   //nhập chi phí thuốc 
				    	cout << "Enter the hospital medication charges: ";
				    	cin  >> MedChges;
				    	if (MedChges < 0)//xác thực đầu vào chi phí thuốc
				    		cout << "Hospital medication charges must be greater than 0.\n";//báo lỗi
				    } while(MedChges < 0);//xác thực đầu vào
	}
	cout << right << fixed << showpoint << setprecision(2);//formatting
	switch(InOut)
	{
        //trường hợp bệnh nhân nội trú
		case 'i' :
		case 'I' : TotChges = calcData(NumOfDays, DailyRate, ServChges, MedChges);//tính tổng chi phí phải trả bằng gọi hàm calcData truyền 4 đối số
				   cout << "Number of days spent in the hospital : " 
				        << setw(11) << NumOfDays << endl;
				   cout << "Daily rate                           : $"
				        << setw(10) << DailyRate << endl;
				   break;
        //trường hợp bệnh nhân ngoại trú
		case 'o' :
		case 'O' : TotChges = calcData(ServChges, MedChges);//tính tổng chi phí phải trả bằng gọi hàm calcData truyền 2 đối số
	}
    //hiển thị kết quả
	cout << "Charges for hospital services        : $" 
	     << setw(10) << ServChges << endl;
	cout << "Hospital medication charges          : $" 
	     << setw(10) << MedChges << endl;
	cout << "Total charges                        : $" 
	     << setw(10) << TotChges << endl;
	return 0;
}

//hàm tính tổng chi phí bệnh nhân ngoại trú
double calcData(int NumOfDays, double DailyRate, double ServChges, double MedChges)
{
	return (NumOfDays * DailyRate) + calcData(ServChges, MedChges);
}

//hàm tính tổng chi phí bệnh nhân ngoại trú
double calcData(double ServChges, double MedChges)//định nghĩa hàm
{
	return ServChges + MedChges;//trả về tổng chi phí
}