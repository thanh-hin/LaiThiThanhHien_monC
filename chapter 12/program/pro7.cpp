#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;//khai báo chuỗi
    fstream nameFile;
    nameFile.open("murphy.txt", ios::in);//mở file để đọc
    //khoi tao cau dieu kien if, neu mo duoc file namefile thi thuc hien cac cau lenh ben duoi
    if (nameFile)
    {
    //khi dieu kien trong ngoac thoa man thi thuc hien cac cau lenh ben duoi
    while (nameFile >> input)
    {
      cout << input;
    }
    nameFile.close();//đóng file
  }
  return 0;
}
