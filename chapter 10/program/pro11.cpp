#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến
    const int INPUT_SIZE = 81; // kích thước mảng input
    const int NAME_SIZE = 30; // kích thước mảng name
    char input[INPUT_SIZE];// mảng kí tự input
    char name[NAME_SIZE];// mảng kí tự name
    int idNumber;// số ID
    int age;// tuổi
    double income;// thu nhập
    // nhập số ID của người dùng
    cout << "What is your ID number? ";
    cin.getline(input, INPUT_SIZE); 
    // Chuyển đổi sang int
    idNumber = atoi(input);
    // nhập tên người dùng. Không cần chuyển đổi
    cout << "What is your name? ";
    cin.getline(name, NAME_SIZE);
    // nhập tuổi 
    cout << "How old are you? ";
    cin.getline(input, INPUT_SIZE); 
    // chuyển đổi sang dạng int
    age = atoi(input);
    // nhập thu nhập
    cout << "What is your annual income? ";
    cin.getline(input, INPUT_SIZE); 
    // chuyển dang double
    income = atof(input);
    // hiển thị dữ liệu
    cout << setprecision(2) << fixed << showpoint;//formatting
    cout << "Your name is " << name
        <<", you are " << age
        << " years old,\nand you make $"
        << income << " per year.\n";
    return 0;
}