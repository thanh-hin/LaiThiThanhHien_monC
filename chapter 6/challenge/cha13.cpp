#include <bits/stdc++.h>
using namespace std;

//khia báo hàm
int inputValidate(int, int);
int numEmployees();
int daysAbsent(int);
double avgDaysAbsent(int, int);

int main()//hàm chính
{
    //khai báo biến
    int num_employees,//số lượng nhân viên
        total_days_absent;//tổng ngày nghỉ
    double avg_days_absent;//trung bình ngày nghỉ
    num_employees = numEmployees();//nhapajj ngày nghỉ và gán vào biến = hàm numEmployee
    total_days_absent = daysAbsent(num_employees);//tính tổng ngày nghỉ bằng gọi hàm daysAbsent và gán vào biến
    avg_days_absent = avgDaysAbsent(num_employees, total_days_absent);//tính trung bình ngày nghỉ bằng gọi hàm avgDaysAbsent và gán vào biến
    //hiển thị kết quả
    cout << "num_employees = " << num_employees << endl;
    cout << "total_days_absent = " << total_days_absent << endl;
    cout << "avg_days_absent = " << avg_days_absent << '\n' << endl;
    return 0;
} 

//hàm xác thực đầu vào
int inputValidate(int num1, int num2)//định nghĩa hàm
{
    while(!(cin >> num1) || num1 < num2)
    {
        //báo lỗi
        // nhập lại
        cout << "Error. Integer must not be "
             << " less than " << num2 << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num1;//trả về giả trị num1
}

//hàm nhập số lượng nhân viên
int numEmployees()//định nghĩa hàm
{
    int num;//khai báo biến
    cout << "Enter the number of employees in\n"<< "the company: ";      
    /*cin >> num;
    num = inputValidate(num, 1);
    return num;*/
    return inputValidate(num, 1);//trả về giá trị num
}

//hàm tính tổng ngày nghỉ của nhân viên
int daysAbsent(int num_employees)//định nghĩa hàm
{
    int total_days_absent = 0;//khai báo biến tích lũy ngày nghỉ
    //nhập số ngày nghỉ của mỗi nhân viên
    cout << "Enter number of days each employee missed during the past year: " << endl;
    for (int i = 0; i < num_employees; i++)
    {
        cout << "Employee #" << (i + 1) << ": ";
        total_days_absent += inputValidate(total_days_absent, 0);//biến tích lũy chạy
    }
    return total_days_absent;//trả giá trị tổng ngày nghỉ
}

//hàm tính trung bình mỗi nhân viên nghỉ bao nhiêu ngày
double avgDaysAbsent(int num_employees, int days_absent)
{
     double average = days_absent / static_cast<double>(num_employees);//khai báo và tính ngày nghỉ trung bình của nhân viên
     return average;//trả kết quả trung bình
}