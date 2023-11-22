#include <iostream>
#include <iomanip>
#include <vector>//khai bao thu vien de su dung vector
using namespace std;
int main ()
{
    const int NUM_EMPLOYEES = 5;//khai bao hang nguyen 
    vector<int> hours(NUM_EMPLOYEES);//khai bao vector nguyen
    vector<double> payRate(NUM_EMPLOYEES);//khai bao vector thuc
    int index; //khai bao bien nguyen
    cout << "Enter the hours worked by " << NUM_EMPLOYEES;
    cout << " employees and their hourly rates.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++){//khoi tao vong lap nhap vao cac phan tu trong vector
        cout << "Hours worked by employee #" << (index + 1);
        cout << ": ";
        cin >> hours[index];//nhap vao phan tu thu index trong vector hours
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ":";
        cin >> payRate[index];//nhap vao phan tu thu index trong vector payRate
        cout << endl;
    }
    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);//mac dinh hai so thap phan
    for (index = 0; index < NUM_EMPLOYEES; index++){//khoi tao vong lap gan gia tri cho bien grossPay bang cong thuc cho san
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;//xuat ra man hinh gia tri grossPay
    }
    return 0;
}