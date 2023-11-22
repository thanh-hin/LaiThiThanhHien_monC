#include <bits/stdc++.h>
using namespace std;

//khai báo union PaySource
union PaySource
{
  int hours;
  float sales;
};

int main()
{
   //tạo PaySource có tên employee1
  PaySource employee1;
  //khai báo biến
  char payType;
  float payRate;
  float grossPay;
  //formating
  cout << fixed << showpoint << setprecision(2);
  cout << "This program calculates either hourly wages or\n";
  cout << "sales commission.\n";
  cout << "Enter H for hourly wages or C for commission: ";
  //nhập giá trị vào biến payType
  cin >> payType;
  //khởi tạo câu điều kiện if 
  //xác định lựa chọn của người dùng
  if (payType == 'H' || payType == 'h')
  {
   //nhập mức lương hàng giờ
     cout << "What is the hourly pay rate? ";
     cin >> payRate;
     //nhập số giờ làm việc
     cout << "How many hours were worked? ";
     cin >> employee1.hours;
     grossPay = employee1.hours * payRate;//tính lương
     cout << "Gross pay: $" << grossPay << endl;//hiển thị lương
  }
  else if (payType == 'C' || payType == 'c')
  {
   //nhập doanh thu
     cout << "What are the total sales for this employee? ";
     cin >> employee1.sales;
     grossPay = employee1.sales * 0.10;//tính lương
     cout << "Gross pay: $" << grossPay << endl;
  }
  else//đầu vào ko hợp lệ
  {
     cout << payType << " is not a valid selection.\n";
  }
  return 0;
}
