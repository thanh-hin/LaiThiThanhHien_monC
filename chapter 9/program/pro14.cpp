#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    double *sales = nullptr, // Để phân bổ động một mảng
            total = 0.0,//biến tổng tích lũy
            average;//giá trị trung bình doanh số
    int numDays,//số ngày bán hàng
        count;//biến đếm
    // nhập số ngày bán hàng
    cout << "How many days of sales figures do you wish ";
    cout << "to process? ";
    cin >> numDays;
    // Cấp phát động một mảng đủ lớn để chứa số ngày bán hàng đó.
    sales = new double[numDays];
    // nhập doanh số mỗi ngày
    cout << "Enter the sales figures below.\n";
    for (count = 0; count < numDays; count++)
    {
        cout << "Day " << (count + 1) << ": ";//hiển thị ngày bán 
        cin >> sales[count];//nhập doanh số ngày
    }
    // tính tổng doanh số 
    for (count = 0; count < numDays; count++)
    {
        total += sales[count];//bộ tích lũy chạy
    }
    // tính doanh số trung bình mỗi ngày
    average = total / numDays;
    // hiển thị kết quả
    cout << fixed << showpoint << setprecision(2);//formatting
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;
    // Bộ nhớ được cấp phát động giải phóng
    delete [] sales;
    sales = nullptr;// Biến việc bán hàng thành một con trỏ rỗng
    return 0;
}