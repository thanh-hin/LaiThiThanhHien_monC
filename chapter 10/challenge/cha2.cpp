#include <iostream>
#include <cstring>
using namespace std;

//khai bao ham printReverser
void printReverse(char*);
int main()
{
  //khai bao mang ky tu gom 50 phan tu
  char str[50];
  cout << "Enter some text (MAX= 50): ";
  //nhap vao mang ky tu
  cin.getline(str,50);
  //goi ham printReveser truyen vao do gia tri str
  printReverse(str);
  return 0;
}
//khai bao ham printReveser
void printReverse(char*str)
{
  //khoi tao vong lap for duyet qua tung phan tu cua mang str
  for(int i = strlen(str) - 1; i >= 0; i--)
       //xuat ra mang hinh phan tu str[i]
       cout << str[i];
  cout << endl;
}