#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    vector<int> hours;//khai bao vector nguyen hours
    vector<double> payRate; //khai bao vector thuc double
    int numEmployees; // The number of employees
    int index; // Loop counter
    cout << "How many employees do you have? ";
    cin >> numEmployees;
    cout << "Enter the hours worked by " << numEmployees;
    cout << " employees and their hourly rates.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours; // To hold the number of hours entered
        double tempRate;
        cout << "Hours worked by employee #" << (index + 1);
        cout << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); // Add an element to hours
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Add an element to payRate
    }
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
    return 0;
}