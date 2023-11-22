#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //union không tên
  union
  {
     int hours;
     float sales;
  };
  //khai báo
  char payType;
  float payRate;
  float grossPay;
  cout << fixed << showpoint << setprecision(2);  //formating
  cout << "This program calculates either hourly wages or\n";
  cout << "sales commission.\n";
  cout << "Enter H for hourly wages or C for commission: ";
  //nhập lựa chọn của người dùng
  cin >> payType;
  //khởi tạo câu điều kiện
  //xác định lựa chọn của người dùng
  if (payType == 'H' || payType == 'h')
  {
    //nhập lương hàng giờ
   cout << "What is the hourly pay rate? ";
   cin >> payRate;
   //nhập số giwof làm
   cout << "How many hours were worked? ";
   cin >> hours; 
   grossPay = hours * payRate;//tính lương
   cout << "Gross pay: $" << grossPay << endl;//hiển thị lương
  }
  else if (payType == 'C' || payType == 'c')
  {
    //nhập tổng doanh thu
    cout << "What are the total sales for this employee? ";
    cin >> sales;
    grossPay = sales * 0.10;//tính lương
    cout << "Gross pay: $" << grossPay << endl;//hiển thị lương
  }
  else//đầu vào ko hợp lệ
  {
    cout << payType << " is not a valid selection.\n";//báo lỗi
  }
  return 0;
}