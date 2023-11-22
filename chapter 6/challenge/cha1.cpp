#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double calculateRetail(double, double);
double inputValidate(double);

int main()//hàm chính
{
    //khai báo biến
    double wholesale_cost,
           markup_percent,
           retail_price;
    //nhập giá bán buôn
    cout << "Enter wholesale cost: ";
    wholesale_cost = inputValidate(wholesale_cost);//gán biến giá bán = hàm xác thực đầu vào inputValidate ( biến = giá trị num trả về trong hàm inputValidate)
    //Nhập phần trăm đánh dấu của nó
    cout << "Enter it's markup percentage: ";
    markup_percent = inputValidate(markup_percent) * .01;//gán biến giá trị phần trăm = giá trị trả về num trong hàm inputValidate * 0.01

    retail_price = calculateRetail(wholesale_cost, markup_percent);//tính giá bán lẻ = hàm calculateRetail

    cout << "Markup percentage = %"  << (markup_percent / .01) << endl;//hiển thị phần trăm

    cout << setprecision(2) << fixed//formatting
         << "Wholesale cost    = $" 
         << wholesale_cost  << endl
         << "Retail price      = $" 
         << retail_price  << endl;
    return 0;
}

//hàm tính giá bán lẻ
double calculateRetail(double num1, double num2)//định nghĩa hàm calculateRetail
{
    //trả kết quả giá bán lẻ
    return (num1 * num2) + num1;
}

//hàm xác thực đầu vào
double inputValidate(double num)
{
    while(!(cin >> num) || (num < 0))
    {
        //báo lỗi nếu nhập num bé hơn 0
        //yêu cầu người dùng phấp số nguyên lớn hơn 0
        //nhập lại
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;//trả về num
}