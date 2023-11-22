#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    ofstream outputFile;//khởi tọa file
    int numberOfDays;//biến số ngày
    double sales;//biến bán hàng
    cout << "For how many days do you have sales? ";
    cin >> numberOfDays;//nhập số ngày bán
    // mở file sale 
    outputFile.open("Sales.txt");
    // nhập doanh số bán mỗi ngày và viết xuống file
    for (int count = 1; count <= numberOfDays; count++)//tạo vòng lặp nhập các ngày
    {
        // nhập doanh số bán của 1 ngày
        cout << "Enter the sales for day "
            << count << ": ";
        cin >> sales;
        //viết xuống file
        outputFile << sales << endl;
    }
    // đống file
    outputFile.close();
    cout << "Data written to Sales.txt\n";
    return 0;
}