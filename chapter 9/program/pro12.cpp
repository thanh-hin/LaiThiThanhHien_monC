#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void getSales(double *, int);
double totalSales(double *, int);

int main()//hàm chính
{
    const int QTRS = 4;//khai báo kích thước mảng
    double sales[QTRS];//khai báo mảng
    // Nhận dữ liệu bán hàng cho tất cả các quý
    getSales(sales, QTRS);//gọi hàm getSales 
    cout << fixed << showpoint << setprecision(2);//formatting
    // hiển thi tổng doanh thu của năm
    cout << "The total sales for the year are $";
    cout << totalSales(sales, QTRS) << endl;//gọi hàm totalSales 
    return 0;
}

//hàm nhập doanh số bán từng quý
void getSales(double *arr, int size)//định nghĩa hàm getSales
{
    for (int count = 0; count < size; count++)
    {
        cout << "Enter the sales figure for quarter ";
        cout << (count + 1) << ": ";//số quý
        cin >> arr[count];//nhập doanh số bán của quý đó
    }
}

//hàm tính tổng doanh số của năm và trả về tổng đó
double totalSales(double *arr, int size)//định nghĩa hàm totalSales
{
    double sum = 0.0;//khai báo biến sum
    for (int count = 0; count < size; count++)
    {
        sum += *arr;//biến tích lũy tổng chạy
        arr++;//tăng index 
    }
    return sum;//trả tổng doanh số
}