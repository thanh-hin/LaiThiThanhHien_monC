#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    string Runner1, Runner2, Runner3;//tên 3 ứng viến
	double RunTime1, RunTime2, RunTime3;//thời gian hoàn thành của mỗi ứng viên
	// nhập tên của ứng viên và thời gian hoàn thành của họ
	cout << "What is the name of the fist runner? ";
	cin  >> Runner1;//nhập tên ứng viên 1
	cout << "How long did " << Runner1 << " take to finish the race? ";
	cin  >> RunTime1;//nhập thời gian hoàn thành của người 1
	cout << "What is the name of the second runner? ";
	cin  >> Runner2;//nhập tên ứng viên 2
	cout << "How long did " << Runner2 << " take to finish the race? ";
	cin  >> RunTime2;//nhập thời gian hoàn thành của người 2
	cout << "What is the name of the third runner? ";
    cin  >> Runner3;//nhập tên ứng viên 3
	cout << "How long did " << Runner3 << " take to finish the race? ";
	cin  >> RunTime3;//nhập thời gian hoàn thành của người 3
	if (RunTime1 > 0 && RunTime2 > 0 && RunTime3 > 0)//xác thực đầu vào 
        //xác định thứ tự giải thưởng
		if (RunTime1 < RunTime2 && RunTime1 < RunTime3)
			if (RunTime2 < RunTime3)
			{
				cout << "First place : " << Runner1 <<endl;
				cout << "Second place: " << Runner2 <<endl;
				cout << "Third place : " << Runner3 <<endl;
			}
			else 
			{
				cout << "First place : " << Runner1 <<endl;
				cout << "Second place: " << Runner3 <<endl;
				cout << "Third place : " << Runner2 <<endl;
			}
		else if (RunTime2 < RunTime1 && RunTime2 < RunTime3)
			if (RunTime1 < RunTime3)
			{
				cout << "First place : " << Runner2 <<endl;
				cout << "Second place: " << Runner1 <<endl;
				cout << "Third place : " << Runner3 <<endl;
			}
			else
            			{
				cout << "First place : " << Runner2 <<endl;
				cout << "Second place: " << Runner3 <<endl;
				cout << "Third place : " << Runner1 <<endl;
			}
		else 
			if (RunTime1 < RunTime2)
			{
				cout << "First place : " << Runner3 <<endl;
				cout << "Second place: " << Runner1 <<endl;
				cout << "Third place : " << Runner2 <<endl;
			}
			else
			{
				cout << "First place : " << Runner3 <<endl;
				cout << "Second place: " << Runner2 <<endl;
				cout << "Third place : " << Runner1 <<endl;
			}
	else //báo lỗi đầu vào
		cout << "Invalid time input! Times can not be less than zero.\nPlease run the program again with valid time values.\n";
    return 0;
}