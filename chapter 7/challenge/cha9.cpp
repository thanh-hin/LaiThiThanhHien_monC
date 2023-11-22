#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    const int numOfEmployees = 7;//khai báo hằng nguyên
    int long empId[numOfEmployees]= {5658845,4520125,7895122,8777541,8451277,1302850,7580489};//khai báo mảng số id của nhân viên
    int hours[numOfEmployees];//khai báo mảng số giờ làm
    double payRate[numOfEmployees];//khai báo mảng lương hàng giừo
    double wages[numOfEmployees];//khai báo mảng lương
    //nhập số giờ làm việc của 7 nhân viên và lương hàng giờ
    cout<< "Enter the hours worked by 7 employees and their hourly pay rates.\n";
    //tạo vòng lặp nhập thông tin cho từng nhân viên
    for (int count = 0;count < numOfEmployees;count++)
    {
        //nhập số giờ làm việc
        cout<< "Hours worked by employee #"<<empId[count]<< ":";
        cin>> hours[count];
        while (hours < 0)//xác thực đầu vào
        {
            cout<<"Please enter a positive number: ";
            cin>> hours[count];//nhập lại số giờ làm việc
        }
        //nhập lương hàng giờ
        cout<< "Hourly pay rate for employee #"<<empId[count]<<":";
        cin>> payRate[count];
        while (payRate[count] < 6.00)//xác thực đầu vào
        {
            cout<< "Please enter a pay rate higher than $6.00: ";
            cin>> payRate[count];//nhập lại lương hàng giờ
        }
    }
    //tạo vòng lặp hiển thị lương từng nhân viên
    for (int count = 0;count < numOfEmployees;count++)
    {
        wages[count]= hours[count] * payRate[count];//tính lương 
        cout<<"Here is the gross pay for each employee:\n";
        cout<<fixed<<showpoint<<setprecision(2);//formatting
        cout<< "Employee #"<<empId[count]<<": $"<<wages[count]<< endl;//hiển thị lương
    }
    return 0;
}