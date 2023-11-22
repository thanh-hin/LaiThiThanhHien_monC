#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void getInfo(string, double &);
double profit(double, double, double, double, double);
double inputValidate(double);
void displayCalculation(double);

int main()//hàm chính
{
    //khai báo biến
    double NS,  // Số lượng cổ phần
           PP,  // Giá mua mỗi cổ phần
           PC,  // Đã trả hoa hồng mua hàng
           SP,  // Giá bán mỗi cổ phần
           SC,  //  trả hoa hồng bán hàng
           profit_or_loss; //lợi nhuận hoặc lỗ
    //gọi hàm getInfo
    getInfo("Number of shares: ", NS);
    getInfo("Purchase price per share: ", PP);
    getInfo("Purchase commission paid: ", PC);
    getInfo("Sale price per share: ", SP);
    getInfo("Sale commission paid: ", SC);
    //tính lợi nhuận hoặc lỗ
    profit_or_loss = profit(NS, PP, PC, SP, SC);
    //hiển thị kết quả
    displayCalculation(profit_or_loss);
    return 0;
}

//hàm nhập thông tin
void getInfo(string prompt, double &user_input)
{
    cout << prompt;
    user_input = inputValidate(user_input);
}

//hàm xác thực đầu vào
double inputValidate(double num1)
{
    while(!(cin >> num1) || num1 < 0)
    {
        //báo lỗi và nhập lại
        cout << "Error. Number must not be 0 or greater:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num1;//trả về giá trị num1
}

//hàm xác định lợi nhuận
double profit(double NS, double PP, double PC, double SP, double SC)
{
    //hiển thị thông tin
    cout << "NS = " << NS << endl; 
    cout << "PP = " << PP << endl; 
    cout << "PC = " << PC << endl; 
    cout << "SP = " << SP << endl; 
    cout << "SC = " << SC << endl;    
    return ((NS * SP) - SC) - ((NS * PP) + PC);
}

//hàm hiển thị lời hay lỗ
void displayCalculation(double profit_or_loss)//định nghĩa hàm
{
    cout << "The sale of the stock resulted in "<< (profit_or_loss < 0 ? "LOSS." : "PROFIT.")<< "At $" << profit_or_loss<< endl;
}