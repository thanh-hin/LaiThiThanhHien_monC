#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    string Name, Date1, Date2, Date3;//tên và các ngày thi
	double Height1, Height2, Height3;//chiều cao nhảy qua trong các ngày thi
	// nhập tên, ngày tháng và chiều cao của từng ngày thi
	cout << "What is the name of the pole vaulter? ";
	cin  >> Name;
	cout << "Enter the date of " << Name << "'s first jump: ";
	cin  >> Date1;
	cout << "What was " << Name << "'s vault height in meters on " << Date1 << ": ";
	cin  >> Height1;
	cout << "Enter the date of " << Name << "'s second jump: ";
	cin  >> Date2;
	cout << "What was " << Name << "'s vault height in meters on " << Date2 << ": ";
	cin  >> Height2;
	cout << "Enter the date of " << Name << "'s third jump: ";
	cin  >> Date3;
	cout << "What was " << Name << "'s vault height in meters on " << Date3 << ": ";
	cin  >> Height3;
	// tính và xác định xếp hạng mỗi chiều cao nhảy sào
	if (Height1 >= 2.0 && Height1 <= 5.0 && Height2 >= 2.0 && Height2 <= 5.0
		&& Height3 >= 2.0 && Height3 <= 5.0)//xác thực đầu vào của chiều cao nhảy sào
	{
		if(Height1 > Height2 && Height1 > Height3)
			if(Height2 > Height3)
            			{
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
			}
			else
			{
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
			}
		else if(Height2 > Height1 && Height2 > Height3)
			if(Height1 > Height3)
			{
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
			}
			else
            {
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
			}
		else
			if(Height1 > Height2)
			{
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
			}
			else
            {
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
			}
	}
	else//báo lỗi đầu vào
		cout << "Invalid height! Height values must be between 2.0 and 5.0 meters\n\n";
	return 0;
}