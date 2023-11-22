#include <bits/stdc++.h>
using namespace std;

//khai báo biến chuỗi hằng
const string NORTH = "North",
             SOUTH = "South",
             EAST = "East",
             WEST = "West",
             CENTRAL = "Central";

//khai báo hàm
double inputValidate(double);
int getNumAccidents(string);
void findLowest(double, double, double, double, double);
void checkIfSmallest(double, double, double, double, double,string);

int main()
{
    //khai báo biến
    double N_total, S_total, E_total, W_total, C_total;

    N_total = getNumAccidents(NORTH);//gán biến = hàm getNumAccidents (giá trị num trả về)
    S_total = getNumAccidents(SOUTH);//gán biến = hàm getNumAccidents (giá trị num trả về)
    E_total = getNumAccidents(EAST);//gán biến = hàm getNumAccidents (giá trị num trả về)
    W_total = getNumAccidents(WEST);//gán biến = hàm getNumAccidents (giá trị num trả về)
    C_total = getNumAccidents(CENTRAL);//gán biến = hàm getNumAccidents (giá trị num trả về)
    //tìm khu vực có ít tai nạn nhất
    findLowest(N_total, S_total, E_total, W_total, C_total);
    return 0;
}

//hàm xác thực đầu vào
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

//hàm nhập số lượng tai nạn
int getNumAccidents(string region)//định nghĩa hàm
{
    double num;//khai báo biến
    cout << "What is the number of automobile accidents\n"<< "reported in the " << region << " region \n"
         << "during the last year? ";
    num = inputValidate(num);//gán biến num = hàm inputValidate (giá trị num trả về)
    return num;//trả về giá trị num
}

//hàm tìm khu vực có ít tai nạn nhất
void findLowest(double N_total, double S_total, double E_total, //đinh nghĩa hàm
                double W_total, double C_total)
{
    //hiển thị khu vực có ít tai nạn nhất
    cout << "The region with the smallest accident\n" << "total is "; 
    checkIfSmallest(N_total, S_total, E_total, W_total, C_total, NORTH);
    checkIfSmallest(S_total, N_total, E_total, W_total, C_total, SOUTH);
    checkIfSmallest(E_total, N_total, S_total, W_total, C_total, EAST);
    checkIfSmallest(W_total, N_total, S_total, E_total, C_total, WEST);
    checkIfSmallest(C_total, N_total, S_total, E_total, W_total, CENTRAL);
    cout << endl << endl;    
}

//hàm tìm khu vực có lượng tai nạn ít nhất
void checkIfSmallest(double total1, double total2, double total3, 
                     double total4, double total5, string region)
{
    if (total1 < total2)
   {
       if (total1 < total3)
       {
           if (total1 < total4)
            {
                if (total1 < total5)
                    cout << region << ", with it's total\n"  << "being " << total1 << '.';
            }
       }          
   }
}