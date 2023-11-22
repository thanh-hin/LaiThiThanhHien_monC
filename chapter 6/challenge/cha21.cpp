#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void getInfo(string, double &);
double profit(double, double, double, double, double);
double inputValidate(double);
void displayCalculation(double, int);

int main()//hàm chính
{
    //khai báo biến
    double NS,  // Số lượng cổ phần
           PP,  // Giá mua mỗi cổ phần
           PC,  // Đã trả hoa hồng mua hàng
           SP,  // Giá bán mỗi cổ phần
           SC,  //  trả hoa hồng bán hàng
           profit_or_loss, //lợi nhuận hoặc lỗ
           number_of_stock_sales,//số lượng bán cổ phiếu
           total = 0;//bộ tích lũy
    //gọi hàm getInfo để nhập số lượng cổ phiếu
    getInfo("How many stock sales? ", number_of_stock_sales);
    for (int i = 0; i < number_of_stock_sales; i++)
    {   //gọi hàm getInfo để nhấp các thông tin
        cout << "\nInfo for stock sale #" << (i + 1) << endl;
        getInfo("Number of shares: ", NS);
        getInfo("Purchase price per share: ", PP);
        getInfo("Purchase commission paid: ", PC);
        getInfo("Sale price per share: ", SP);
        getInfo("Sale commission paid: ", SC);
        profit_or_loss = profit(NS, PP, PC, SP, SC);//xác đinh tiền lợi nhuận hay tiền lỗ
        total += profit_or_loss;//bộ tích lũy chạy
        displayCalculation(profit_or_loss, (i + 1));//gọi hàm displayCalculation 
    }
    cout << "\nTotal profit or loss = $"<< total<< endl;//hiển thị kết quả
    return 0;
} 

//hàm nhập thông tin
void getInfo(string prompt, double &user_input)
{
    cout << prompt;
    //nhập thông tin người dùng bằng gọi hàm inputValidate
    user_input = inputValidate(user_input);
}

//hàm xác thực đầu vào
double inputValidate(double num1)//định nghĩa hàm
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

//hàm tính lợi nhuận 
double profit(double NS, double PP, double PC, double SP, double SC)//định nghĩa hàm
{
    //hiển thị thông tin
    cout << "NS = " << NS << endl; 
    cout << "PP = " << PP << endl; 
    cout << "PC = " << PC << endl; 
    cout << "SP = " << SP << endl; 
    cout << "SC = " << SC << endl;    
    return ((NS * SP) - SC) - ((NS * PP) + PC);//trả lại giá trị lợi nhuận
}

//hàm hiển thị kết quả
void displayCalculation(double profit_or_loss, int stock_number)//định nghĩa hàm
{
    //hiển thị phần lời hoặc lỗ
    cout << "The sale of stock #" << stock_number << " resulted in "
         << (profit_or_loss < 0 ? "LOSS." : "PROFIT.")
         << "At $" << profit_or_loss<< endl;
}