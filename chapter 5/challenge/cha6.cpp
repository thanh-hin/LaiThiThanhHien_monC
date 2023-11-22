#include <iostream>
using namespace std;
int main()
{
    double speed,//tốc độ xe
            hour,//số giờ
            distance;//khoảng cách xe đi được
    //yêu cầu người dùng nhập vận tốc và số giờ
    cout <<"What is the speed of the vehicle in mph?\t";
    cin >>speed;
    cout <<"How many hours has it traveled?\t";
    cin >>hour;
    cout <<"Hour Distance Traveled\n";
    //tính khoảng cách đi được sau từng giờ
    for (int i=1;i<=hour;i++)
    {
        distance += speed;
        cout  <<i<<"\t"<<distance<<"\n";
    }
    return 0;
}
