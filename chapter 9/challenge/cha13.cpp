#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void getData(int *, int);
void selectionSort(int *, int);
double getAvg(int *, int);
double getMedian(int *, int);
int getMode(int *, int);

int main()//hàm chính
{
    //khai báo biến
	int *Movies, Stud, Mode;
	double Avg, Med;

	//Hỏi người dùng có bao nhiêu sinh viên đã được khảo sát.
	cout << "How many students were surveyed? ";
	cin	 >> Stud;

	Movies = new int[Stud];//cấp phát bộ nhớ

	getData(Movies, Stud);//gọi hàm getData

	selectionSort(Movies, Stud);//gọi hàm selectionSort

	Avg = getAvg(Movies, Stud);//gọi hàm getAvg

	Med = getMedian(Movies, Stud);//gọi hàm getMedian

	Mode = getMode(Movies, Stud);//gọi hàm getMode

    //hiển thị thông tin 
	cout << "Statistical results for the number of movies\n"
		 << "     college students see in a month.\n";
	cout << fixed << showpoint << setprecision(2);//formatting
	cout << "Average: " << Avg << endl;
	cout << "Median:  " << Med << endl;
	cout << "Mode:    " << Mode << endl;
	delete [] Movies;
	Movies = 0;
	return 0;
}

//hàm nhập dữ liệu
void getData(int *array, int size)
{
    //nhập số lượng phim mà mỗi học sinh xem
	cout << "Enter the number of movies each student has seen in the month.\n";
    //tạo vòng for để nhập từng học sinh
	for (int i = 0; i < size; i++)
	{
		cout << "Student " << (i + 1) << ": ";
		cin  >> *(array + i);
	}
}

//hàm sắp xếp
void selectionSort(int *array, int size)
{
	int scan, minIndex, minValue;//khai báo biến
    //khởi tạo vòng for
	for (int scan = 0; scan < (size - 1); scan++)
	{
		minIndex = scan;//gán giá trị
		minValue = *(array + scan);//gán giá trị
        //khởi tạo vòng for
		for (int i = scan + 1; i < size; i++)
		{
			if (*(array + i) < minValue)
			{
				minValue = *(array + i);
				minIndex = i;
			}
		}
		*(array + minIndex) = *(array + scan);
		*(array + scan) = minValue;
	}
}

//hàm tính số trung bình
double getAvg(int *array, int size)
{
	double Sum = 0;//khai báo biến tích lũy
    //khởi tạo vòng for để tích lủy tổng 
	for (int i = 0; i < size; i++)
	{
		Sum += *(array +i);//biến tích lũy chạy
	}
	return Sum / size;//trả giá trị trung bình
}

double getMedian(int *array, int size)
{
	int Mid = (size - 1) / 2;//khai báo biến 
	double Med;//khai báo biến

	if (size % 2 == 0)//khởi tạo câu điều kiện if
	{//nếu size chia hết cho 2
		Med = (*(array + Mid) + *(array + (Mid + 1))) / 2;
	}
	else//nếu size chia ko hết cho 2
		Med = *(array + Mid);

	return Med;//trả về giá trị med
}

int getMode(int *array, int size)
{
	int Mode, Most, Count;//khai báo biến
	Count = Most = 0;//gán giá trị
    //khởi tạo vòng lặp for
	for (int i = 0; i < size; i++)
	{
		Count++;//biến đếm tăng
		if (*(array + i) < *(array + i + 1))//khởi tạo lệnh điều kiện if
		{
			if (Count > Most)
			{
				Mode = *(array + i);
				Most = Count;
			}
			Count = 0;
		}
	}
	return Mode;//trả về giá trị mode
}