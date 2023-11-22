#include <iostream>
using namespace std;
int main ()
{
  int numberFloor,//số lượng tầng
      numberRoomInFloor,//số lượng phòng trên tầng
      occupied,//số phòng đã sử dụng trên tầng 
      totalRoom = 0,// bộ tích lũy tổng số phòng
      totalOccupied = 0;//bộ tích lũy tổng số phòng đã sử dụng
  //xác thực đầu vào
  do
  {
    //hỏi khách sạn có bao nhiêu tầng
    cout <<"How many floors the hotel has: ";
    cin >> numberFloor;
  }while(numberFloor<1);
  
  for (int i = 1; i<=numberFloor; i++)
  {
    if(i==13) continue;//bỏ qua nếu i =13
    else 
    {
      do//xác thực đầu vào
      {
        cout <<"\nInput the number of rooms in floor "<<i<<" ";
        cin >> numberRoomInFloor;
      }while (numberRoomInFloor<10);
      totalRoom += numberRoomInFloor;//tích lũy tổng số phòng chạy
      //nhập số phòng đã sử dụng
      cout <<"Input the number of occupied rooms in floor "<<i <<" ";
      cin >> occupied;
      totalOccupied += occupied;//tích lũy số phòng sử dụng chạy
    }
  }
  int unoccupied = totalRoom - totalOccupied;//số phòng chưa được sử dụng
  float rateOccupied =(1.0* totalOccupied/totalRoom)*100;//tỉ lệ phần trăm phòng có người sử dụn
  float rateUnoccupied = (1.0*unoccupied/totalRoom)*100;//tỉ lệ phần trăm phòng chưa được sử dụng
  //xuất các thông tin
  cout <<"Total Number of rooms: "<<totalRoom<<endl;
  cout<<"Total occupied rooms: "<<totalOccupied<<endl;
  cout<<"Total unoccupied rooms: "<<unoccupied<<endl;
  cout<<"Occupancy rate: "<<rateOccupied<<"%"<<endl;
  cout <<"unoccupancy rate: "<<rateUnoccupied<<"%"<<endl;
  return 0;
} 