#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //khai báo hằng số tốc độ
    const int START_KPH = 60, // tốc độ bắt đầu
    END_KPH = 130, // tốc độ kết thúc
    INCREMENT = 10; // tăng tốc độ 
    const double CONVERSION_FACTOR = 0.6214;//hệ số chuyển đổi
    int kph;
    double mph; 
    cout << fixed << showpoint << setprecision(1);//formatting
    cout << "KPH\tMPH\n";
    cout << "---------------\n";
    //hiển thị tốc độ
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)//khởi tạo kph = 60, điều kiện kp <=130,  kph +10
    {
         //tính mph
        mph = kph * CONVERSION_FACTOR;
        // hiển thị cả mph và kph
        cout << kph << "\t" << mph << endl;
    }
    return 0;
}