#include <bits/stdc++.h>
using namespace std;

//khai báo enum day gồm các trạng thái
enum day { MONDAY, TUEDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main()
{
  //khai báo hằng nguyên
  const int NUM_DAYS = 5;
  double sales[NUM_DAYS];//khai báo mảng
  double total = 0.0;//bộ tích lũy
  day workDay;
  //khoiử tạo vòng lặp for để nhập các phần tử của sales
  for (workDay = MONDAY; workDay <= FRIDAY;workDay = static_cast<day>(workDay + 1))
  {
    cout << "Enter the sales for day "<< workDay << ": ";
    cin >> sales[workDay];
  }
  //khởi tạo vòng lặp để chạy bộ tích lũy
  for (workDay = MONDAY; workDay <= FRIDAY;
                         workDay = static_cast<day>(workDay + 1))
      total += sales[workDay];//bộ tích lũy chạy
  //formating, hiển thị tổng
  cout << "The total sales are $" << setprecision(2)
       << fixed << total << endl;
  return 0;
}