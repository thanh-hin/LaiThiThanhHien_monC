#include <iostream>
using namespace std;
int main ()
{
    //khai báo biến
    int num,
        min=num,
        max=num;
    do
    {
        cout <<"enter the number: ";
        cin >>num;
        if(num>max&&num!=-99)//tìm max
        {
            max = num;
        }
        else if(num <min&&num!=-99)//tìm min
        {
            min = num;
        }
    }while(num!=-99);//điều kiện để kết thúc vòng lặp
    //hiển thị kết quả
    cout <<min<<endl;
    cout <<max<<endl;
    return 0;
}