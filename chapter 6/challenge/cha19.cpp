#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double inputValidate(double);
char userChoice(char);
double calculateTotalCharges(double, double);
double calculateTotalCharges(double, double, double, double);
void displayMenu();
void receiveCalculateDisplay();
void writeToFile(double);

int main()//hàm chính
{
    //gọi hàm displayMenu và receiveCalculateDisplay
    displayMenu();
    receiveCalculateDisplay();    
    return 0;
}

//hàm nhập lựa chọn
char userChoice(char letter)//định nghĩa hàm
{
    cin >> letter;//nhập kí tự
    // xác thực đầu vào
    while (!((letter == '1') || (letter == '2')))
    {
        // báo lỗi
        cout << "ERROR: enter 1 or 2: ";
        // Xóa luồng đầu vào
        cin.clear();
        // Loại bỏ đầu vào trước đó
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // nhập lại lần nữa
        cin >> letter;
    }
    return letter;//trả về kí tự letter
}

//hàm xác thực đầu vào
double inputValidate(double num)//định nghĩa hàm
{
    while(!(cin >> num) || num < 0)
    {
        //thông báo lỗi
        //nhập lại
        cout << "Error. Number must not be 0 or greater:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;//trả về giá trị num
}

//hàm tính tổng chi phí ngoại trú
double calculateTotalCharges(double med_charges, double services_charge)//định nghĩa hàm
{
     return med_charges + services_charge;//trả kết quả
}

//hàm tính tổng chi phí nội trú
double calculateTotalCharges(double days_spent, double daily_rate, double med_charges, double services_charge)//định nghĩa hàm
{
     return (days_spent * daily_rate) + med_charges + services_charge;//trả kết quả
}

//hàm hiển thị menu
void displayMenu()//định nghĩa hàm
{
    //hiển thị menu
    cout << "Where you admitted as an " << endl
         << "in-patient or an out-patient? " << endl
         << "Enter 1 for in-patient or 2 for out-patient"<< endl;
}

//hàm tính và hiển thị kết quả
void receiveCalculateDisplay()
{
    //khai báo biến
    char user_choice; // 1 or 2 lựa chọn của người dùng
    double days_spent,//số ngày ở
           daily_rate,//tỉ giá mỗi ngày
           med_charges,//tiền thuốc
           services_charge,//tiền dịch vụ
           total_charges;//tổng chi phí
    //nhập lựa chọn của người dùng
    //gọi hàm userChoice
    user_choice = userChoice(user_choice);
    //xác định lựa chọn của người dùng
    if (user_choice == '1')//lựa chọn 1
    {
        //nhập số ngày ở viện
        cout << "Number of days spent in the hospital: ";
        days_spent = inputValidate(days_spent);
        //nhập tỉ giá mỗi ngày
        cout << "Daily rate: $";
        daily_rate = inputValidate(daily_rate);
        //nhập tiền thuốc
        cout << "Hospital medication charges: $";
        med_charges = inputValidate(med_charges);
        //nhập tiền dịch vụ
        cout << "Charges for hospital services (lab tests, etc.): $";
        services_charge = inputValidate(services_charge);
        //tính tổng chi phí
        total_charges = calculateTotalCharges(days_spent,daily_rate,med_charges,services_charge);
        //viết vô file
        writeToFile(total_charges);        
        // cout << "total_charges = $" 
        //     << total_charges
        //     << endl;
    }
    else//lựa chọn 2
    {   //nhập tiền thuốc
        cout << "Hospital medication charges: $";
        med_charges = inputValidate(med_charges);
        //nhập tiền dịch vụ
        cout << "Charges for hospital services (lab tests, etc.): $";
        services_charge = inputValidate(services_charge);
        //tính tổng chi phí
        total_charges = calculateTotalCharges(med_charges,services_charge);
        //viết vô file
        writeToFile(total_charges);
        // cout << "total_charges = $" 
        //        << total_charges
        //        << endl;
    }
}

//hàm viết thông tin vô fie
void writeToFile(double data)//định nghĩa hàm
{
    //mở file
    ofstream outputFile;
    outputFile.open("hospital_report.txt");
    if(outputFile.fail())
    {
        cout << "Failedto open file. Program ended." << endl;
        exit(EXIT_SUCCESS);
    }
    else
    {
        // xử lí thông tin
        outputFile << "total_charges = $" << data<< endl;
        cout << "Report written to file. " << endl;
        // đóng file
        outputFile.close();
    }
}