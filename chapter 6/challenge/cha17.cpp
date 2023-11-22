#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double calcOfPopulation(double, double, double, double, double);
double inputValidate(double, int);

int main()//hàm chính
{
     double P, // quy mô dân số
         B,    // tỉ lệ sinh %
         D,    // tỉ lệ tử %
         num_years,//số năm
         arrivals,
         departures;
    //nhập dân số ban đầu
     cout << "Starting size of population: ";
     P = inputValidate(P, 2);
    //nhập tỉ lệ sinh hàng năm
     cout << "Annual birth rate: %";
     B = inputValidate(B, 0);
    //nhập tỉ lệ tử hàng năm
     cout << "Annual death rate: %";
     D = inputValidate(D, 0);
    //nhập số nhập cư mỗi năm
     cout << "Arrivals each year: ";
     arrivals = inputValidate(arrivals, 0);
     //nhập số di cư mỗi năm
     cout << "Departures each year: ";
     departures = inputValidate(departures, 0);
     //nhập số năm 
     cout << "Number of years to display: ";
     num_years = inputValidate(num_years, 1);
    //hiển thị kết quả
     cout << "Population size for "<< num_years << " years " << " = "
          << (calcOfPopulation(P, B, D, arrivals, departures) * num_years) << endl;
     return 0;
} 

//hàm xác thực đầu vào
double inputValidate(double number, int limit)//định nghĩa hàm
{
     while (!(cin >> number) || number < limit)
     {
        //báo lỗi và nhập lại
          cout << "Error. Number must not be  0 or greater:";
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
     }
     return number;//trả về giá trị biến number
}

//hàm tính dân số 
double calcOfPopulation(double P,double B,double D,double arrivals,double departures)//định nghĩa hàm
{
     B *= .01; // 3.33% = .0333
     D *= .01; // 4.44% = .0444
     return ((P + (B * P) - (D * P)) + arrivals) - departures;
}