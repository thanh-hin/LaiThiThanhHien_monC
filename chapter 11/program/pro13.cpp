#include <bits/stdc++.h>
using namespace std;

//khai báo enum Day gồm các trạng thái
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
void displayDayName(Day);//khai báo hàm

int main()
{
  //khai báo hằng 
  const int NUM_DAYS = 5;
  double sales[NUM_DAYS];//khai báo mảng
  double total = 0.0;//bộ tích lũy
  Day workDay;
  //khởi tạo vòng lặp nhập các phần tử của sales
  for (workDay = MONDAY; workDay <= FRIDAY;
                         workDay = static_cast<Day>(workDay + 1))
  {
    //nhập doanh thu
      cout << "Enter the sales for day ";
      displayDayName(workDay);//gọi hàm displayDayName
      cout << ": ";
      cin >> sales[workDay];
  }
  //khởi tạo vòng lặp để chạy biến tích lũy
  for (workDay = MONDAY; workDay <= FRIDAY;
                        workDay = static_cast<Day>(workDay + 1))
      //cong don gia tri cau phan tu workDay trong mang sales
      total += sales[workDay];//bộ tích lũy chạy
  //formating, hiển thị giá trị 
  cout << "The total sales are $" << setprecision(2)<< fixed << total << endl;
  return 0;
}

//hàm hiển thị tên ngày
void displayDayName(Day d)
{
  //khởi tạo câu điều kiện
  switch(d)
  {
    //nếu biến d thuộc case nào thì thực thi lệnh cout ngay cạnh và break ngay lập tức
    case MONDAY    : cout << "Monday";
                   break;
    case TUESDAY   : cout << "Tuesday";
                   break;
    case WEDNESDAY : cout << "Wednesday";
                   break;
    case THURSDAY  : cout << "Thursday";
                   break;
    case FRIDAY    : cout << "Friday";
  }
}