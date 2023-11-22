#include <bits/stdc++.h>
using namespace std;

int main()
{
  //khai báo hằng
  const int ROWS = 3;//dòng 
  const int COLS = 3; //cột
  //khai báo mảng cho sẵn
  int nums[ROWS][COLS] = { 2897, 5, 837,
                            34, 7, 1623,
                          390, 3456, 12 };
  fstream outFile("table.txt", ios::out);//mở file
  //khởi tạo vòng lặp, viết vào các phần tử của mảng
  for (int row = 0; row < ROWS; row++)//hàng
  {
      for (int col = 0; col < COLS; col++)//cột
      {
        outFile << setw(8) << nums[row][col];
      }
      outFile << endl;
  }
  outFile.close();//đóng file
  cout << "Done.\n";
  return 0;
}
