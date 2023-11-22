#include <iostream>
#include <string>

using namespace std;

// Xác định một lớp cho Date
class Date 
{
    private:
        int month;
        int day;
        int year;

    public:
        // Trình xây dựng có xác thực đầu vào
        Date(int m, int d, int y) {
            setMonth(m);
            setDay(d);
            setYear(y);
        }

        // Hàm truy cập
        int getMonth() const 
        {
            return month;
        }

        int getDay() const 
        {
            return day;
        }

        int getYear() const 
        {
            return year;
        }

        // Chức năng biến đổi với xác thực đầu vào
        void setMonth(int m) 
        {
            if (m >= 1 && m <= 12) 
            {
                month = m;
            } 
            else 
            {
                cerr << "Invalid month. Setting to default (1)." << endl;
                month = 1;
            }
        }

        void setDay(int d) {
            if (d >= 1 && d <= 31) 
            {
                day = d;
            } 
            else 
            {
                cerr << "Invalid day. Setting to default (1)." << endl;
                day = 1;
            }
        }

        void setYear(int y) {
            if (y >= 0) {
                year = y;
            } else {
                cerr << "Invalid year. Setting to default (0)." << endl;
                year = 0;
            }
        }

        // Chức năng thành viên để in ngày ở các định dạng khác nhau
        void printDate() const {
            // Format 1: MM/DD/YYYY
            cout << "Format 1: " << month << "/" << day << "/" << year << endl;

            // Format 2: Month DD, YYYY
            string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
            cout << "Format 2: " << months[month] << " " << day << ", " << year << endl;

            // Format 3: DD Month YYYY
            cout << "Format 3: " << day << " " << months[month] << " " << year << endl;
        }
};

int main() {
    // tạo class Date có tên myDate
    Date myDate(12, 25, 2014);

    // In ngày ở các định dạng khác nhau
    myDate.printDate();

    return 0;
}