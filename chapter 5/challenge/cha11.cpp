#include <iostream>
using namespace std;
int main ()
{
  float starting_number,//số lượng quần thể ban đầu 
      increase,//số phần trăm tăng mỗi ngày
      population,//kích thước quần thể sinh vật
      day;//số ngày nhân
  //nhập số lượng quần thể ban đầu
  do
  {
    cout<<"Enter the starting number of organisms: ";
    cin >>starting_number;
  } while (starting_number<2);
  //nhập số phần trăm tăng mỗi ngày
  do 
  {
    cout <<"Enter average daily population increase (%): ";
    cin >>increase;
  }while(increase<0);
  //nhập số ngày chúng sẽ nhân lên
  do
  {
    cout <<"Enter number of days they will multiply: ";
    cin >>day;
  }while (day<1);
  for(int i=0;i<starting_number;i++)
  {
    cout <<"day "<<(i+1)<<" : "<<starting_number <<endl ;
    starting_number+=(starting_number*increase);

  }
  return 0;

  
} 
