#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    double regularWages,//lương thường xuyên
        basePayRate = 18.25,//mức lương cơ bản
        regularHours = 40.0,//số giờ làm việc ít hơn ngoài giờ
        overtimeWages,//lương tăng ca
        overtimePayRate = 27.78, //mức lương tăng ca
        overtimeHours = 10,//số giờ tăng ca 
        totalWages;//tổng lương
    // tính lương thường xuyên
    regularWages = basePayRate * regularHours;
    // tính lương tăng ca
    overtimeWages = overtimePayRate * overtimeHours;
    // tính tổng lương
    totalWages = regularWages + overtimeWages;
    // hiển thị tổng lương
    cout << "Wages for this week are $" << totalWages << endl;
    return 0;
}