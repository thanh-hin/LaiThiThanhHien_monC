#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double inputValidate(double, double);
void getInfo(double &, double &, double &);
void calcAndDisplay(double, double, double);

int main()//hàm chính
{
    const double CHARGE_PER_HOUR = 25.00;//khai báo biến hằng
    //khai báo biến
    double num_of_rooms,//số lượng phòng
           price_per_gal,//giá mỗi gallon sơn
           sqft_to_paint = 0;//số mét vuông cần sơn(bộ tích lũy)
    //gọi hàm getInfo để nhập dữ liệu
    getInfo(num_of_rooms, price_per_gal, sqft_to_paint);
    //gọi hàm calcAndDisplay
    calcAndDisplay(num_of_rooms, price_per_gal, sqft_to_paint);
    return 0;
} 

//hàm nhập thông tin 
void getInfo(double &num_of_rooms,double &price_per_gal,double &sqft_to_paint)//định nghĩa hàm
{
     // nhập số phòng cần sơn
     cout << "Number of rooms to be painted: ";
     num_of_rooms = inputValidate(num_of_rooms, 1);
     for (int i = 0; i < num_of_rooms; i++)
     {
          // nhập mét vuông tường mỗi phòng
          cout << "Sq. Ft. of wall space to be painted in room " << (i + 1) << ": ";
          sqft_to_paint += inputValidate(sqft_to_paint, 0);//bộ tích lũy chạy
     }
     //nhập số sơn mỗi gallon
     cout << "Price of paint per gallon: $";
     price_per_gal = inputValidate(price_per_gal, 10.00);
}

//hàm xác thực đầu vào
double inputValidate(double number, double limit_number)//định nghĩa hàm
{
    while(!(cin >> number) || number < limit_number)
    {
        //báo lỗi và nhập lại
        cout << "Error. Number must not be  " << limit_number << " or greater:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;//trả về giá trị number
}

//hàm tính toán và hiển thi kết quả
void calcAndDisplay(double num_of_rooms, double price_per_gal, double sqft_to_paint)//định nghĩa hàm
{
     double gals_of_paint_req, labor_required,
            cost_of_paint, labor_charges, total_cost;
     // tính toán các số liệu
     gals_of_paint_req  = sqft_to_paint / 110.0;
     labor_required = gals_of_paint_req * 8.0;
     cost_of_paint  = price_per_gal * gals_of_paint_req;
     labor_charges  = labor_required * 25.00;
     total_cost     = labor_charges + cost_of_paint;
     //hiển thị kết quả
     cout << "Total SqFt to paint  : " << sqft_to_paint   << endl;
     cout << "Price per gallon     : " << price_per_gal      << endl;
     // Số gallon sơn cần thiết
     cout << "Gallons required     : " << gals_of_paint_req      << endl;
     // Số giờ lao động cần thiết
     cout << "Hours required       : " << labor_required    << endl;
     //Chi phí sơn
     cout << "Cost of paint        :$" << cost_of_paint     << endl;
     //Chi phí lao động
     cout << "Labor charges        :$" << labor_charges    << endl;
     // Tổng chi phí sơn
     cout << "Total cost of job    :$"  << total_cost  << endl;
}