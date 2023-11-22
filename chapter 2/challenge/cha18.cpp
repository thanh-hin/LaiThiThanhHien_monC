#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    int customer = 16500;//số khách hàng
    double a = customer * 0.15;// số người đã mua nước trong kho=ảo sát
    double b = a * 0.58;//số người thích vị cam quýt
    //hiển thi kết quả
    cout <<"The approximate number of customers in the survey who purchase one or more energy drinks per week: "<<a<<endl;
    cout <<"The approximate number of customers in the survey who purchase one or more energy drinks per week: "<<b<<endl;
    return 0;
}