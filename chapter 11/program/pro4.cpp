#include <bits/stdc++.h>
using namespace std;

struct PayInfo//khai báo struct
{
    int hours;// số giờ làm việc
    double payRate; // mức lương hàng giờ
};

int main()//hàm chính
{    //khai báo biến
    const int NUM_WORKERS = 3;// Số lượng công nhân
    PayInfo workers[NUM_WORKERS]; //mảng cấu trúc
    int index;// bộ đếm
    // nhập dữ liệu trả lương của nhân viên
    cout << "Enter the hours worked by " << NUM_WORKERS
        << " employees and their hourly rates.\n";
    //vòng lặp cho tugwf nhân viên
    for (index = 0; index < NUM_WORKERS; index++)
    {
        // Lấy số giờ làm việc của một nhân viên
        cout << "Hours worked by employee #" << (index + 1);
        cout << ": ";
        cin >> workers[index].hours;
        // Nhận mức lương theo giờ của nhân viên
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> workers[index].payRate;
        cout << endl;
    }
    // Hiển thị tổng lương của mỗi nhân viên.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);//formatting
    //vòng lặp xác định tổng lương từng nhân viên
    for (index = 0; index < NUM_WORKERS; index++)
    {
        double gross;//khai báo biến tổng lương
        gross = workers[index].hours * workers[index].payRate;//tính tổng lương
        //hiển thị tổng lương
        cout << "Employee #" << (index + 1);
        cout << ": $" << gross << endl;
    }
    return 0;
}