#include <bits/stdc++.h>
using namespace std;

// khai báo hàm
void getJudgeData(double &);
double calcScore(double, double, double, double, double);
int findHighest(double, double, double, double, double);
int findLowest(double, double, double, double, double);

int main()//hàm chính
{
	double Score1, Score2, Score3, Score4, Score5;//khai báo biến 5 làn điểm
	// Gọi hàm getJudgeData một lần điểm
	getJudgeData(Score1);
	getJudgeData(Score2);
	getJudgeData(Score3);
	getJudgeData(Score4);
	getJudgeData(Score5);
    //hiển thị điểm của thí sinh
	cout << "\nThe contestant\'s score is ";
	// gọi hàm calcScore truyền cho nó năm lần điểm
	cout << calcScore(Score1, Score2, Score3, Score4, Score5);
	cout << endl;
	return 0;
}

//hàm nhập điểm
void getJudgeData(double &Score)//định nghĩa hàm
{
	do
	{
        //nhập điểm 
		cout << "Enter a judge\'s score: ";
	    cin  >> Score;

	    if (Score < 0 || Score > 10)//xác thực đầu vào điểm
	    	cout << "\nError! Invalid score.\n"<< "Judge's score must be greater than 0 and less than 10.\n";//báo lỗi
	} while (Score < 0 || Score > 10);//xác thực đầu vào điểm, quay lại vòng lặp nhập lại
}

//hàm tính điểm trung bình
double calcScore(double Score1, double Score2, double Score3, double Score4, double Score5)
{	
	int    High,//điểm cao
		    Low;//điểm thấp
	double  Avg; //điểm trung bình
	// gọi hàm findHighest và findLowest truyền 5 điểm cho chúng
	High = findHighest(Score1, Score2, Score3, Score4, Score5);	
	Low  = findLowest(Score1, Score2, Score3, Score4, Score5);
    //tính điểm trung bình
	if (High == static_cast<int>(Score1))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score2))
	{
		if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score1 + Score5)/3;
		else
			Avg = (Score1 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score3))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score1 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score1 + Score4)/3;
	}
	else if (High == static_cast<int>(Score4))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score1)/3;
	}
	else
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score1)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}
	return Avg;//trả kết quả điểm trung bình
}

//hàm tìm điểm cao nhất
int findHighest(double Score1, double Score2, double Score3, double Score4, double Score5)//định nghĩa hàm
{
    //xác định điểm cao nhất và trả giá trị điểm cao nhất
	if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
		return Score1;
	else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 && Score2 > Score5)
		return Score2;
	else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 && Score3 > Score5)
		return Score3;
	else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 && Score4 > Score5)
		return Score4;
	else
		return Score5;
}

//hàm tìm điểm thấp nhất
int findLowest(double Score1, double Score2, double Score3, double Score4, double Score5)//ddinhgj nghĩa hàm
{
    //xác định điểm thấp nhất và trả giá trị điểm thấp nhất
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 && Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 && Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 && Score4 < Score5)
		return Score4;
	else
		return Score5;
}