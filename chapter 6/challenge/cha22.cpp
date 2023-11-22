#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
bool isPrime(int);

int main()//hàm chính
{
	int Num;//khai báo biến
	//nhập 1 số
	cout << "This program let you know if the number entered is a prime number.\nEnter a number: ";
	cin  >> Num;
	//hiển thị giá trị số vừa nhập
	cout << "The number " << Num;
	//xác định số vừa nhập có phải số nguyên tố không
	if (isPrime(Num))//(gọi hàm isPrime(num)==true)
		cout << " is a Prime number." << endl;
	else//trường hợp false
		cout << " is not a Prime number." << endl;
	return 0;
}

//hàm kiểm tra số nguyên tố
bool isPrime(int Num)//định nghĩa hàm
{
	if (Num > 1)//số nhỏ hơn 1 trả về false
	{
		for (int i = 2; i <= Num; ++i)
		{
			if (Num % i == 0)
			{
				if(Num == i)
					return true;
				else
					return false;
			}
		}
	}
	return false;
}