#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
	//khai báo biến kí tự
	char input;
	//nhập 1 kí tự vào biến input
	cout << "Enter any character: ";
	cin.get(input);
	cout << "The character you entered is: " << input << endl;
	//khởi tạo lệnh điều kiện if, nếu tìm thấy isalpha của biến input thì xuất ra màn hình
	if (isalpha(input))
	cout << "That's an alphabetic character.\n";
	//khởi tạo lệnh điều kiện if, nếu tìm thấy isdigit của biến input thì xuất ra màn hình/
	if (isdigit(input))
	cout << "That's a numeric digit.\n";
	//khởi tạo lệnh điều kiện if, nếu tìm thấy islower của biến input thì xuất ra màn hình
	if (islower(input))
	cout << "The letter you entered is lowercase.\n";
	//khởi tạo lệnh điều kiện if, nếu tìm thấy isupper của biến input thì xuất ra màn hình
	if (isupper(input))
	cout << "The letter you entered is uppercase.\n";
	//khởi tạo lệnh điều kiện if, nếu tìm thấy isspace của biến input thì xuất ra màn hình
	if (isspace(input))
	cout << "That's a whitespace character.\n";
	return 0;
}