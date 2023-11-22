#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double celsius(int);

int main()//hàm chính
{
    //giới thiệu chương trình 
	cout << "\nTable of Fahrenheit temperatures 0 - 20\n"
		 << "and their Celsius equivalents.\n\n"
		 << "------------------------------\n"
		 << "  Fahrenheit       Celsius\n";
    //hiển thị độ C tương ứng với từng độ F
	for (int F = 0; F <= 20; F++)
	{
		cout << "      " << setw(2) << F;//formatting
		cout << "          "
			 << setw(3) << celsius(F) << endl;//formatting
	}
	cout << endl;
	return 0;
}

//hàm tính độ C
double celsius(int F)//định nghĩa hàm
{
	
	return (5.0 * (F - 32))/9;//trả về giá trị độ C
}