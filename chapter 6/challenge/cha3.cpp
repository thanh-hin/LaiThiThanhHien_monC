#include <bits/stdc++.h>
using namespace std;

//khai báo biến hằng
const string NE = "North East",
             NW = "North West",
             SE = "South East",
             SW = "South West";

//khai báo hàm 
double inputValidate(double);
double getSales(string);
void findHighest(double, double, double, double);
void checkIfHighest(double, double, double, double, string);

int main() //hàm chính
{
    //khai báo biến 
    double NE_sales, NW_sales, SE_sales, SW_sales;
          
    NE_sales = getSales(NE);//gán biến = hàm getSale
    NW_sales = getSales(NW);//gán biến = hàm getSale
    SE_sales = getSales(SE);//gán biến = hàm getSale
    SW_sales = getSales(SW);//gán biến = hàm getSale

    findHighest(NE_sales, NW_sales, SE_sales, SW_sales);//hiển thị bộ phận có doanh số cao nhất

    return 0;
}

//hàm xcas thực đầu vào
double inputValidate(double num)//định nghĩa hàm inputValidate
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

//hàm nhập doanh số
double getSales(string division)
{
    double sales;//khai báo biến
    cout << "What is the quarterly sales figure\n" << "for " << division << "? $";
    sales = inputValidate(sales);//gán biến sale = hàm inputValidate (giá trị num trả về)
    cout << endl;
    return sales;//trả về giá trị sale
}

//hàm tìm bộ phận có doanh thu cao nhất
void findHighest(double NE_sales, double NW_sales, //định nghĩa hàm
                 double SE_sales, double SW_sales)
{
    //hiển thị bộ phận có doanh thu cao nhất
    cout << "The highest grossing division is\n";
    checkIfHighest(NE_sales, NW_sales, SE_sales, SW_sales, NE);
    checkIfHighest(NW_sales, NE_sales, SE_sales, SW_sales, NW);
    checkIfHighest(SE_sales, NE_sales, NW_sales, SW_sales, SE);
    checkIfHighest(SW_sales, NE_sales, NW_sales, SE_sales, SW);
  
    cout << endl << endl;
}

//hàm kiểm tra bộ phận nào có doanh thu cao nhất
void checkIfHighest(double sales1, double sales2, //định nghĩa hàm
                     double sales3, double sales4,string division)
{
   if (sales1 > sales2)
   {
       if (sales1 > sales3)
       {
           if (sales1 > sales4)
                cout << division << " with a sales figure at: " << "$" << sales1;
       }          
   }
}