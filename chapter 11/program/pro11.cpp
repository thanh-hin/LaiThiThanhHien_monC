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
  int index;//biến đếm
  //khởi tạo vòng lặp for để nhập các phần tử của sales
  for (index = MONDAY; index <= FRIDAY; index++)
  {
    cout << "Enter the sales for day "<< index << ": ";
    cin >> sales[index];
  }
  //khởi tạo vòng lặp for chạy bộ tích lũy
  for (index = MONDAY; index <= FRIDAY; index++)
    //cộng dồn các giá trị của phần tử trong sales vào biến total
     total += sales[index];//bộ tích lũy chạy
  //formating, hiển thị tổng
  cout << "The total sales are $" << setprecision(2)<< fixed << total << endl;
  return 0;
}