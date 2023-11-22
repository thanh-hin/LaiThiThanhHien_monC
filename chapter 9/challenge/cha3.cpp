#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void getScore(int &);
void calcAverage(int, int, int, int, int, int);
int findLowest(int, int, int, int, int, int);

int main() 
{
    //khai báo biến
	int testScore1,//điểm 1
		testScore2,//điểm 2
		testScore3,//điểm 3
		testScore4,//điểm 4
		testScore5,//điểm 5
		testScore6;//điểm 6
	// nhập điểm 5 bài kiểm tra
	for (int i = 0; i < 6; i++)
    {
        //gọi hàm getScore để nhập điểm kiểm tra
		if (i == 0) 
			getScore(testScore1);
		else if (i == 1) 
			getScore(testScore2);
		else if (i == 2) 
			getScore(testScore3);
		else if (i == 3) 
			getScore(testScore4);
		else if (i == 4) 
			getScore(testScore5);
		else if (i == 5) 
			getScore(testScore6);
	} 
	calcAverage(testScore1, testScore2, testScore3, testScore4, testScore5, testScore6);//gọi hàm calcAverage
	return 0;
}

//hàm nhập điểm
void getScore(int &score) 
{
	int validScore;//khai báo biến
    //nhập điểm
	cout << "Enter the score of the test: ";
	cin >> validScore;
	//xác thực đầu vào
	while ((validScore < 0) || (validScore > 100))
    {
        //báo lỗi và yêu cầu nhập lại
		cout << "Test scores values can only be between 0 and 100." << endl
			<< "Please reenter the test score: ";
		cin >> validScore;//nhập lại điểm
	}
	score = validScore;//gán giá trị của biến validScore cho biến score
}

//hàm tính giá trị trung bình
void calcAverage(int score1, int score2, int score3, int score4, int score5, int score6) 
{
    //khai báo biến
	int dropScore = findLowest(score1, score2, score3, score4, score5, score6);
	int sum = score1 + score2 + score3 + score4 + score5 + score6 - dropScore;//tính tổng các bài kiểm tra nhưng trừ bài thấp nhất
	double average = sum / 5.0;//tính giá trị trung bình 5 bài kiểm tra cao nhất
	cout << setprecision(2) << fixed << showpoint;//formatting
	cout << "The average score of your tests is: " << average << endl;//hiển thị điểm trung bình
}

//hàm tìm bài kiểm tra có số điểm thấp nhất
int findLowest(int score1, int score2, int score3, int score4, int score5, int score6) 
{
	int lowestScore;//khai báo biến
    //dùng lệnh if else tìm bài kiểm tra điểm thấp nhất
	if (score1 <= score2) 
		lowestScore = score1;
	else 
		lowestScore = score2;
	if (score3 < lowestScore) 
		lowestScore = score3;
	if (score4 < lowestScore) 
		lowestScore = score4;
	if (score5 < lowestScore) 
		lowestScore = score5;
	if (score6 < lowestScore) 
		lowestScore = score6;
	return lowestScore;//trả về giá trị của biến lowestScore
}