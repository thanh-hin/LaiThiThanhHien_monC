#include <iostream>
#include <cmath>

using namespace std;
//khai bao ham MonthLyExoense
struct MonthlyExpenses{
    double housing;
    double utilities;
    double houseHold;
    double transport;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double misc;
};

//khai bao ham
void getData(MonthlyExpenses &);
void printData(const MonthlyExpenses &,
               const MonthlyExpenses &);
double getDifference(double);
int main()
{
    MonthlyExpenses goal = {500, 150, 65, 50,
                            250, 30, 100, 150,
                            75, 50};
    //tao ban ghi
    MonthlyExpenses currentMonth;
    //goi ham getData truyen vao do currentMonth
    cout << "Enter data for current month\n";
    getData(currentMonth);
    //goi ham printData truyen vao do goal, currentMonth
    cout << "\n\nNow printing the amount of over";
    cout << " or under budget\n";
    printData(goal, currentMonth);
    return 0;
}
//khai bao ham getData
void getData(MonthlyExpenses &m){
    //xuat ra cau dan de nguoi dung nhap vao gai tri cua cac thanh vien trong m
    cout << "Housing: ";
    cin >> m.housing;
    cout << "Utilities: ";
    cin >> m.utilities;
    cout << "Household expenses: ";
    cin >> m.houseHold;
    cout << "Transportation: ";
    cin >> m.transport;
    cout << "Food: ";
    cin >> m.food;
    cout << "Medical: ";
    cin >> m.medical;
    cout << "Insurance: ";
    cin >> m.insurance;
    cout << "Entertainment: ";
    cin >> m.entertainment;
    cout << "Clothing: ";
    cin >> m.clothing;
    cout << "Miscellaneous: ";
    cin >> m.misc;
}
//khai bao ham printdata
void printData(const MonthlyExpenses &budget,
               const MonthlyExpenses &current)
{
    //khai bao va gan gia tri cho bien total 
    double total = 0;
    //gan gai tri cho bien total bang bieu thuc tinh toan
    cout << "Housing: ";
    total += getDifference(budget.housing - current.housing);
    cout << "\nUtilities: ";
    total += getDifference(budget.utilities - current.utilities);
    cout << "\nHousehold expenses: ";
    total += getDifference(budget.houseHold - current.houseHold);
    cout << "\nTransportation: ";
    total += getDifference(budget.transport - current.transport);
    cout << "\nFood: ";
    total += getDifference(budget.food - current.food);
    cout << "\nMedical: ";
    total += getDifference(budget.medical - current.medical);
    cout << "\nInsurance: ";
    total += getDifference(budget.insurance - current.insurance);
    cout << "\nEntertainment: ";
    total += getDifference(budget.entertainment - current.entertainment);
    cout << "\nClothing: ";
    total += getDifference(budget.clothing - current.clothing);
    cout << "\nMiscellaneous: ";
    total += getDifference(budget.misc - current.misc);
    cout << "\n\nMonthly: ";
    //goi ham getDifference truyen vao do bien total
    getDifference(total);
}
//khai bao ham getDifferent
double getDifference(double diff){
    //khoi tao cau dieu kien if else if de xet gia tri bien diff, neu bien diff thuoc truong hop nao thi thuc hien cac cau lenh o dieu kien do
    if(diff > 0)
        cout << "+$" << diff;
    else if(diff < 0)
        cout << "-$" << abs(diff);
    else
        cout << "$" << diff;

    return diff;
}