#include <bits/stdc++.h>
using namespace std;

int main()
{
  //khai báo enum water gồm các trạng thái được gán giá trị
  enum Water { FREEZING = 32, BOILING = 212 };
  //khai báo biến
  int waterTemp;
  //nhập nhiệt độ nước 
  cout << "Enter the current water temperature: ";
  cin >> waterTemp;
  //khởi tạo câu điều kiện if
  //xác định nhiệt độ nước như thế nào
  if (waterTemp <= FREEZING)//trường hợp nước lạnh
    cout << "The water is frozen.\n";
  else if (waterTemp >= BOILING)//trường hợp nước sôi
    cout << "The water is boiling.\n";
  else//trường hợp nước bình thường
    cout << "The water is not frozen or boiling.\n"; 
  return 0;
}