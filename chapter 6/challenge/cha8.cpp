#include <bits/stdc++.h>
using namespace std;

//hàm tung đồng xu ngẫu nhiên
int coinToss(void) //định nghĩa hàm
{
	int randomNumber;//khai báo biến
	randomNumber = 1 + rand() % 2;//tạo 1 số ngẫu nhiên 1 hoặc 2
	return randomNumber;
}

int main() //hàm chính
{
    //khai báo biến
	int howManyTimes = 0;
	int randomNumber = 0;
	string headTail = "";
    //nhập số lần người dùng tung đồng xu
	cout << "how many times would you like to toss the coin?: ";
	cin >> howManyTimes;
    //khởi tạo bộ số ngẫu nhiên
	srand((time(0)));
    //xác định lần thẩy đồng xu là "đầu" hay "đuôi"
    // nếu số ngẫu nhiên là 1 thì là "đầu"
    //nếu số ngãu nhiên là 2 thì là "đuôi"
	for (int i = 1; i <= howManyTimes; i++) 
    {
		randomNumber = coinToss();
		if (randomNumber == 1)
			headTail = "head";
		else
			headTail = "tail";
		cout << headTail << endl;//hiển thị kết quả
	}
    return 0;
}