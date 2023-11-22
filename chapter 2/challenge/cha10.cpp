#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    double gallons = 15;// số lít xăng
    double travel = 375;// biến quãng đường
    double mpg = travel / gallons;// mpg = miles per gallon
    cout <<"The number of miles per gallon the car gets: "<<mpg<<endl;//hiển thị kết quả
    return 0;
}