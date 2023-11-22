#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void getChoice(char &);
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

int main()//hàm chính
{
    //khai báo biến
    char selection; // lực chọn 
    int worked; //số giờ làm việc
    double rate; // mức lương hàng giờ
    double yearly; //lương hàng năm
    cout << fixed << showpoint << setprecision(2);//formatting
    // hiển thị menu và nhập lựa chọn
    cout << "Do you want to calculate the weekly pay of\n";
    cout << "(H) an hourly paid employee, or \n";
    cout << "(S) a salaried employee?\n";
    getChoice(selection);//gọi hàm getChoice để nhập lựa chọn
    // xử lí lựa chọn menu
    switch (selection)
    {
        //Nhân viên được trả lương theo giờ
        case 'H' :
        case 'h' : cout << "How many hours were worked? ";
            cin >> worked;
            cout << "What is the hourly pay rate? ";
            cin >> rate;
            cout << "The gross weekly pay is $";
            cout << calcWeeklyPay(worked, rate) << endl;//gọi hàm calcWeeklyPay
            break;
        // Nhân viên được trả lương
        case 'S' :
        case 's' : cout << "What is the annual salary? ";
            cin >> yearly;
            cout << "The gross weekly pay is $";
            cout << calcWeeklyPay(yearly) << endl;//gọi hàm calcWeeklyPay
            break;
    }
    return 0;
}

//hàm nhập lựa chọn
void getChoice(char & letter)
{
    //nhập lựa chọn
    cout << "Enter your choice (H or S): ";
    cin >> letter;
    // Xác thực lựa chọn
    while (letter != 'H' && letter != 'h' && letter != 'S' && letter != 's')
    {
        cout << "Please enter H or S: ";
        cin >> letter;
    }
}

//hàm tính lương 
double calcWeeklyPay(int hours, double payRate)
{
    return hours * payRate;//trả kết quả
}


//hàm tính lương
double calcWeeklyPay(double annSalary)
{
    return annSalary / 52;//trả kết quả
}