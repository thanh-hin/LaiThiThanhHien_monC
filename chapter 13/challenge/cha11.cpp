#include <iostream>
#include <iomanip>
using namespace std;

// khai báo class
class PayRoll {
private:
    double hourlyPayRate;   // Mức lương theo giờ của nhân viên
    double hoursWorked;     // Số giờ làm việc của nhân viên
    double totalPay;        // Tổng lương trả cho nhân viên trong tuần

public:
    // Trình xây dựng để khởi tạo các thành viên dữ liệu
    PayRoll() : hourlyPayRate(0.0), hoursWorked(0.0), totalPay(0.0) {}

    // Trình thiết lập cho PayRate hàng giờ với xác thực đầu vào
    void setHourlyPayRate(double rate) {
        // Đảm bảo rằng mức lương theo giờ không âm
        hourlyPayRate = (rate > 0.0) ? rate : 0.0;
    }

    // tính giờ làm việc với xác thực đầu vào
    void setHoursWorked(double hours) {
        //Thực hiện xác thực đầu vào để đảm bảo số giờ làm việc không lớn hơn 60
        hoursWorked = (hours >= 0.0 && hours <= 60.0) ? hours : 0.0;
    }

    // Tính toán và ấn định tổng lương dựa trên mức lương giờ và số giờ làm việc
    void calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
    }

    //Nhận tổng số tiền thanh toán
    double getTotalPay() const {
        return totalPay;
    }
};

int main() {
    const int numEmployees = 7;
    PayRoll payrollArray[numEmployees];  // 

    // Nhận đầu vào cho từng nhân viên
    for (int i = 0; i < numEmployees; ++i) {
        double hoursWorked;
        // nhập số giờ làm
        cout << "Enter hours worked for Employee " << (i + 1) << ": ";
        cin >> hoursWorked;

        // Đặt giờ làm việc với xác nhận
        payrollArray[i].setHoursWorked(hoursWorked);

        double hourlyPayRate;

        // //nhập mức lương hàng giờ
        cout << "Enter hourly pay rate for Employee " << (i + 1) << ": ";
        cin >> hourlyPayRate;

        // Đặt mức lương theo giờ
        payrollArray[i].setHourlyPayRate(hourlyPayRate);

        //tính tổng tiền trả
        payrollArray[i].calculateTotalPay();
    }

    // Hiển thị tổng lương cho mỗi nhân viên
    cout << "\nGross Pay for Each Employee:\n";
    for (int i = 0; i < numEmployees; ++i) {
        // Set output format
        cout << fixed << setprecision(2);//formatting

        // Hiển thị tổng lương của từng nhân viên
        cout << "Employee " << (i + 1) << ": $" << payrollArray[i].getTotalPay() << endl;
    }

    return 0;
}