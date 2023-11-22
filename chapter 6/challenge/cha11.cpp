#include <bits/stdc++.h>
using namespace std;

// khai báo hàm
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()//hàm chính
{
	int Score1, Score2, Score3, Score4, Score5;//khai báo biến 5 lần điểm
	// Gọi hàm getScore một lần cho mỗi điểm trong 5 lần điểm
	getScore(Score1);
	getScore(Score2);
	getScore(Score3);
	getScore(Score4);
	getScore(Score5);
	// gọi hàm calcAverage tính điểm trung bình của 4 bài cao điểm nhất
	calcAverage(Score1, Score2, Score3, Score4, Score5);
	return 0;
}

//hàm nhập biến điểm
void getScore(int &Score)//định nghĩa hàm
{
	do
	{
        //yêu cầu người dùng nhập điểm
		cout << "Enter a test score: ";
		cin  >> Score;
		if (Score < 0 || Score > 100)//xác thực đầu vào biến điểm
			cout << "\nInvaild test score!\n"<< "Test score must be greater than 0 and less than 100.\n\n";   //báo lỗi
	} while(Score < 0 || Score > 100);//xác thực đầu vào để quay lại vòng lặp nhập lại 
}

//hàm tính điểm trung bình
void calcAverage(int Score1, int Score2, int Score3, int Score4, int Score5)
{
    //khai báo biến
	int Lowest; 	
	double Avg;     
	// gọi hàm findLowest
	Lowest = findLowest(Score1, Score2, Score3, Score4, Score5);//xác định điểm thấp nhất và gán vào biến
	// Tính điểm trung bình của 4 bài thi cao nhất
	if (Lowest == Score1)
		Avg = (Score2 + Score3 + Score4 + Score5)/4;
	else if(Lowest == Score2)
		Avg = (Score1 + Score3 + Score4 + Score5)/4;
	else if(Lowest == Score3)
		Avg = (Score2 + Score1 + Score4 + Score5)/4;
	else if(Lowest == Score4)
		Avg = (Score2 + Score3 + Score1 + Score5)/4;
	else
		Avg = (Score2 + Score3 + Score4 + Score1)/4;
	
	// hiển thị điểm trung bình
	cout << "\nThe average of the four highest scores is "<< Avg << ".\n\n";
}

//hàm tìm điểm thấp nhất
int findLowest(int Score1, int Score2, int Score3, int Score4, int Score5)//định nghĩa hàm
{	//xác định điểm thấp nhất
    //trả kết quả điểm thấp nhất
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 && Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 &&  Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 && Score4 < Score5)
		return Score4;
	else
		return Score5;	
}