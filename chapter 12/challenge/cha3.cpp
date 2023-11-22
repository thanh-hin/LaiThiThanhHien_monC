#include <iostream>
#include <fstream>
using namespace std;

//khai bao ham printFile, printLastLine
void printFile (ifstream &);
void printLastLine (ifstream &);

int main()
{
  ifstream filename, punch;
  //mo file filename o che do ghi
  filename.open("filename.txt", ios::in);
  if (!filename)//neu file duoc khon thanh cong thi xuat ra man hinh bao loi
  {
    cout << "Error opening filename file." << endl;
    return 0;
  }
  printFile(filename);
  //mo file punch o che do ghi
  punch.open ("puchnline.txt", ios::in);
  if (!punch){//neu file mo khogn thanh cong thi xuat ra man hinh bao loi
    cout << "Error opening puchline file." << endl;
    return 0;
  }
  printLastLine(punch);
  return 0;
}
//khai bao ham printFile gom iftream file
void printFile (ifstream &file)
{
  //khai bao bien ky tu ch
  char ch;
  //doc du lieu 
  file.get(ch);
  while (file)//khi doc du lieu thanh cong, thuc hien tiep cac cau lenh
  {
    //xuat ra bien ch
    cout << ch;
    //doc du lieu
    file.get(ch);
   }
}
//khai bao ham printLastLine gom iftream file
void printLastLine (ifstream &file)
{
  //khai bao bien ky tu ch
  char ch;
  //di chuyen con tro doc file bat dau tu diem ket thuc cua file
  file.seekg(-1L, ios::end);
  file.get(ch);
  while(ch != '\n')//khi ch khac ky tu '\n
  {
    //di chuyen con tro doc file bat dau tu diem dau cua file
    file.seekg(-2L, ios::cur);
    //doc du lieu
    file.get(ch);
  }
  file.get(ch);
  while (!file.eof())//doc tung ky tu cho den ky het fie
  {
    //xuat ra gia tri ch
    cout << ch;
    file.get(ch);
  }
}
