#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int NUM_OF_MONTHS = 12;//số tháng

    int num_of_years,//số năm
        total_num_of_months = 0;//bộ tích lũy

    double rainfall,
           total_rainfall,//tổng lượng mưa
           average_rainfall_per_month;//trung bình lượng mưa mỗi tháng
    //nhập số lượng năm
    cout << "Enter number of years: ";
    cin >> num_of_years;
    for(int i = 0; i < num_of_years; i++)//vòng lặp cho từng năm
    {
        cout << "Year " << (i + 1) << ": " << endl;
        for(int j = 0; j < NUM_OF_MONTHS; j++)//vòng lặp nhập cho từng tháng
        {
            cout << "How much rainfall (inches)\n"
                 << "for month " << (j + 1) << ": ";
            cin >> rainfall;
            total_rainfall += rainfall;//bộ tích lũy lượng mưa chạy
            total_num_of_months++;
        }
    }
    average_rainfall_per_month = total_rainfall / total_num_of_months;//tính trung bình lượng mưa
    cout << setprecision(2) << fixed;//formatting
    cout << "Total number of months = " << total_num_of_months << endl;
    cout << "Total inches of rainfall = " << total_rainfall << endl;
    cout << "Average rainfall per month = " << average_rainfall_per_month << endl;
    return 0;
}