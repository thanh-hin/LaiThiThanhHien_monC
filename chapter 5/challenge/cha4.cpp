#include <iostream>
using namespace std;
int main()
{
    const float PERMINUTE = 3.6;//số calo đốt mỗi phút
    //hiển thị calo đốt cứ sau 5p 
    for(int i = 5; i < 31; i+=5)
    {
        cout <<"the number of calories burned after "<<i<<" minutes : "
            <<i*PERMINUTE<<endl;
    }
    return 0;
}