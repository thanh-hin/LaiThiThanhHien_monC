#include <bits/stdc++.h>
using namespace std;

// khai báo hàm
void getData(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

int main()//hàm chính
{
	double *Test,		// Để phân bổ động một mảng
		   Average;		// điểm trung bình
	int Scores;			// điểm số
	// nhập số lượng điểm có
	cout << "How many scores do you have to average? ";
	cin  >> Scores;
	// Phân bổ động một mảng đủ lớn hơn
    // để giữ số điểm do người dùng xác định
	Test = new double[Scores];	// cấp phát bộ nhớ
	getData(Test, Scores);//gọi hàm getData

	selectionSort(Test, Scores);//gọi hàm selectionSort

	Average = getAverage(Test, Scores);//tính điểm trung bình bằng gọi hàm getAverage

	displayData(Test, Scores, Average);//gọi hàm displayData

	return 0;
}

//hàm nhập dữ liệu
void getData(double *Test, int Scores)//định nghãi hàm
{
    //nhập lần lượt điểm số 
	cout << "Enter each of the scores.\n";
    //tạo vòng lặp để lần lượt nhập điểm
	for (int i = 0; i < Scores; i++)
	{
		do
		{
            //nhập điểm
			cout << "Score #" << (i + 1) << ": ";
			cin  >> *(Test + i);

			if (*(Test + i) < 0)//xác thực đầu vào để báo lỗi
				cout << "Scores must be greater than 0.\n"	 << "Re-enter ";
		} while (*(Test + i) < 0);//xác thực đầu vào để quay lại vòng lặp để nhập lại
	}
}

//hàm sắp xếp
void selectionSort(double *Test, int Scores)//định nghĩa hàm
{
    //khai báo biến
	int startscan, minIndex;
	double minValue;
    //tạo vòng lặp
	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;//gán giá trị cho biến
		minValue = *(Test + startscan);//gán giá trị
        //tạo vòng lặp
		for (int i = startscan + 1; i < Scores; i++)
		{
			if (*(Test + i) < minValue)
			{
				minValue = *(Test + i);
				minIndex = i;
			}

		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
} 

//hàm tính điểm trung bình
double getAverage(double *Test, int Scores)//định nghĩa hàm
{
	double Total;//khai báo biến
    //tạo vòng lặp để tich sluyx tổng điểm các bài 
	for (int i = 0; i < Scores; i++)
	{
		Total += *(Test + i);//tổng tích lũy chạy
	}
	return Total / Scores;//trả giá trị điểm trung bình
} 

//hàm hiển thị dữ liệu
void displayData(double *Test, int Scores, double Avg) //định nghĩa hàm
{
	cout << "\n    Test scores\n";
	cout << "Number of scores: " << Scores << endl;//hiển thị số lượng điểm 
	cout << "Scores in ascending-order:\n";
    //hiển thị điểm lần lượt các bài
	for (int i = 0; i < Scores; i++)
	{
		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);//formatting
	cout << "Average score: " << Avg << endl; //hiển thị điểm trung bình
}