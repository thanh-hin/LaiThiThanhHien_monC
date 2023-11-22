#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    double mealCharge = 88.67,//tiền thức ăn
            tax = mealCharge * 0.0675,//tiền thuế
            tip = mealCharge * 0.2,//tiền tip
            total = mealCharge + tax + tip;//tổng hóa đơn
    // hiển thị kết quả
    cout <<"The meal charge "<<mealCharge<<endl;
    cout <<"The tax amount "<<tax<<endl;
    cout <<"The tip "<<tip<<endl;
    cout <<"The total "<<total<<endl;
    return 0;
}