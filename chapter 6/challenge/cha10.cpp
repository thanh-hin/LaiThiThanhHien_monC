#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double inputValedate(double);
char inputValidate(char);
double futureValue(double, double, double);

int main()//hàm chính
{
    //khai báo biến
    double present_value,//giá trị hiện tại
           future_value,///giá trị tương lai
           monthly_interestrate,//lãi suất hàng tháng
           number_of_months;//số tháng
    char user_choice;//lựa chọn người dùng
    do//vòng lặp chạy lại phép tính khác
    {
        //nhập giá trị hiện tại trong tài khoản
        cout << "Enter account's present value  : ";
        present_value = inputValidate(present_value);//gán biến = hàm inputValidate (giá trị num trả về)
        //nhập lãi suất hàng tháng
        cout << "Enter monthly interest rate    : ";
        monthly_interestrate = inputValidate(monthly_interestrate);//gán biến = hàm inputValidate (giá trị num trả về)
        //nhập só lượng tháng
        cout << "Enter number of months         : ";
        number_of_months = inputValidate(number_of_months);//gán biến = hàm inputValidate (giá trị num trả về)

        future_value = futureValue(present_value, monthly_interestrate, number_of_months);//tính giá trị tương lai có được
        cout << "Future value is: $"<< future_value << endl ;//hiển thị kết quả
        //hỏi người dùng có muốn tính lại không?
        cout << "Would you like to make another calculation? (y/n):";
        user_choice = inputValidate(user_choice);//xác thực lựa chọn người dùng đê chạy tiếp vòng lặp
        cout << endl;

    } while (user_choice ==  'y' || user_choice == 'Y');
    return 0;
}

//hàm xác thực đầu vào số nguyên dương
double inputValidate(double num)//định nghĩa hàm
{
    while(!(cin >> num) || num < 0)
    {
        //báo lỗi
        //yêu cầu nhập số lớn hơn 0
        //nhập lại
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;//trả về giá trị num
}

//hàm xác thực đầu vào kí tự y hoặc n
char inputValidate(char letter)//định nghĩa hàm
{
    cin >> letter;//khai báo biến

    while (!(letter == 'y' || letter == 'Y' || 
           letter == 'N' || letter == 'n'))
    {
        //báo lỗi
        //yêu cầu nhập y hoặc n
        cout << "ERROR: a Y or an N must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> letter;   //nhập lại
    }

    return letter;//trả về kí tự letter
}

//hàm tính giá trị tương lai
double futureValue(double present_value, double monthly_interestrate, double number_of_months)//định nghĩa hàm
{
    monthly_interestrate *= .01; // 3.33% = .0333

    return present_value * pow((1 + monthly_interestrate), number_of_months);//trả kết quả  giá trị tương lai
}