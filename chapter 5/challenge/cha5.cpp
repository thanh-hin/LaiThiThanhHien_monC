#include <iostream>
using namespace std;
int main()
{
    const int CHARGES =2500;//phí thành viên ban đầu
     const float INCREASE = .04;//phí tăng mỗi năm
    float fee = CHARGES;//tiền đóng mỗi năm
    //hiển thị tiền lãi suất phải đóng mỗi năm
    for (int i = 1; i <=6; i++)
    {
        
        cout << "year "<<i<<" : "
            << fee
            <<endl;
         fee +=  (fee*INCREASE);
    }
    return 0;
}
    