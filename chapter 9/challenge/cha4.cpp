#include <bits/stdc++.h>
using namespace std;

struct Data//khai báo struct
{
	string Name;
	double Grade;
};

// khai báo hàm
void getData(Data *, int);
void selectionSort(Data *, int);
double getAverage(Data *, int);
void displayData(Data *, int, double);

int main()//hàm chính
{
	Data *Test;			// Để phân bổ động một mảng
	double Average;		// điểm trung bình
	int Scores;			// số điểm
	cout << "How many scores do you have to average? ";
	cin  >> Scores;
	// Có bao nhiêu scorTự động phân bổ một mảng đủ lớn hơn
    // để giữ số điểm do người dùng xác định, bạn có phải tính trung bình không?
	Test = new Data[Scores];	// Cấp phát bộ nhớ
	getData(Test, Scores);//gọi hàm getData
	selectionSort(Test, Scores);//gọi hàm selectionSort
	Average = getAverage(Test, Scores);//gán giá trị trả về của hàm getAverage cho biến average
	displayData(Test, Scores, Average);//gọi hàm displayData
	delete [] Test;//giải phóng bộ cấp phát
	Test = 0;
	return 0;
}

//hàm nhập dữ liệu
void getData(Data *Test, int Scores)
{
    //Nhập tên và điểm của từng học sinh
	cout << "Enter the names and scores for each student.\n";
    //tạo vòng lặp để nhập thông tin của mỗi học sinh
	for (int i = 0; i < Scores; i++)
	{
        //nhập tên của học sinh
		cout << "Student #" << (i + 1) << endl;
		cout << "   Name: ";
		cin.ignore();//xóa bộ đệm
		getline(cin, (Test + i)->Name);
		do
		{
            //nhập điểm của học sinh
			cout << "   Score :"; 
			cin  >> (Test + i)->Grade;
			if ((Test + i)->Grade < 0)//xác thực đầu vào
				cout << "Scores must be greater than 0.\n"<< "Re-enter ";//báo lỗi
			cout << endl;
		} while ((Test + i)->Grade < 0);//xác thực đầu vào để nhập lại
	}
}

//hàm sắp xếp
void selectionSort(Data *Test, int Scores)
{
    //khai báo biến
	int startscan, minIndex;
	Data *minValue;
    //tạo vòng lặp for
	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;//gán giá trị
		*minValue = Test[startscan];
        //tạo vòng lặp for
		for (int i = startscan + 1; i < Scores; i++)
		{
			if ((Test + i)->Grade < minValue->Grade)
			{
				*minValue = Test[i];
				minIndex = i;
			}
		}
		Test[minIndex] = Test[startscan];
		Test[startscan] = * minValue;
	}
} 

//hàm tính giá trị trung bình
double getAverage(Data *Test, int Scores)
{
	double Total;//khai báo biến
    //tạo vòng for để tích lũy tổng điểm
	for (int i = 0; i < Scores; i++)
	{
		Total += (Test + i)->Grade;//bộ tích lũy chạy
	}

	return Total / Scores;//trả giá trị trung bình điểm
} 

//hàm hiển thị dữ liệu
void displayData(Data *Test, int Scores, double Avg) 
{
	cout << "    Test scores\n";
	cout << "Number of scores: " << Scores << endl;//hiển thị điểm
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << (Test + i)->Name << ": " << (Test + i)->Grade << endl;
	}
	cout << fixed << showpoint << setprecision(2);//formatting
	cout << "Average of scores: " << Avg << endl; //hiển thị điểm trung bình
}