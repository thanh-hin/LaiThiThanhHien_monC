#include <iostream>
#include <string> 
#include <fstream>
using namespace std;

int main()
{
    //khai bao bien xau ky tu
    string fileName;
    string str;
    ifstream inputFile;
    cout << "Enter the name of the file: ";
    //nhap vao ten file
    cin >> fileName;
    cout << "Enter the string to search for: ";
    //nhap vao ten file str
    cin >> str;
    cout << endl;
    //tao bien dem
    int count = 0;
    int current = 0;
    string line;
    //mo tep o che do doc
    fstream file(fileName, ios::in);
    //neu du lieu khong phai o cuoi tep thi thuc hien ca cau lenh
    while (!file.eof())
    {  
       bool found = false;
       //doc du lieu o file luu du lieu do vao line
       getline(file, line, '\n');
       //khoi tao vong lap for kiem tra chuoi tim kiem co xuat hien hay khong
       for (int i = 0; i < line.length(); i++)
       {
          //neu dieu kien o if thoa man thi tang bien current len mot don vi
          if (line[i] == str[current])
          {
             current++;
          }
          //neu dieu kien o if khong thoa man thi current = 0
          else current = 0;
          //neu chuoi cac ky tu bang nhau bang do dai cua chuoi tim kiem  thi thuc hien cac cau lenh
          if (current == str.length() && !isalnum(line[i+1]))
          {
             //cho gia ri cua bien found bang true
             found = true;
             count++;//tang bien count len mot don vi
             current = 0;
          }
       }
       //neu found = true thi thuc hien cau lenh, xaut ra man hinh
       if (found)
          cout << line << endl;
    }
    cout << "\nNumber of occurences: " << endl;
    return 0;
}