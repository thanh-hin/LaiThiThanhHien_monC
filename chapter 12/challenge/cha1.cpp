#include <iostream>
#include <fstream>

using namespace std;
int main()
{
   //khai bao bien xua ky tu string filename
   string filename;
   cout << "Enter the name of the life: ";
   //nhap vao gai tri bien fielname
   cin >> filename;
   //tao bien dem
   int count = 0;
   string line;
   //mo file o che do ghi
   fstream inputFile("filename", ios::in);
   cout << endl;
   if(!inputFile.fail())//neu mo file thanh cong thi thuc hien tiep chuong trinh
   {
     //neu dieu kien o while thoa man thi thuc hien tiep chuong trinh
     while(count != 10 & !inputFile.eof())
     {
       //doc du lieu tu file inputFule va luu vao bien line, ket thuc doc khi gap '\n'
       getline(inputFile, line, '\n');
       cout << line << endl;
       //tang bien dem
       count++;
     }
     if(count < 10)
        cout << "\nThe entire file has been displayed.";
   }
   else//neu file mo khong thanh cong thi xuat ra man hinh
      cout << "The file  failed to open!";
  return 0;
}