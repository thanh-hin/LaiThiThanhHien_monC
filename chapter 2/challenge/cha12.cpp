#include <iostream>
#include <math.h>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    double acre = 43.560,
            tract = 391.876,
            numberAcre;
    numberAcre = tract / acre;
    //hàm round để làm tròn
    cout <<"The number of acres: "<<round(numberAcre)<<endl;//hiển thị kết quả
    return 0;
}