#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

//khai bao ham
void datePrinter(char *);

int main()
{
    //khai bao mang date
    char date[11];
    cout << "Please enter the date in format mm/dd/yyyy:\n";
    //nhap vao mang date
    cin.getline(date, 11);
    //goi ham datePrinter va truyen va date
    datePrinter(date);
    return 0;
}
//khia bao ham datePrinter
void datePrinter(char *ptr)
{
    //tao ba con tro de tro den vi tri ngay,thang, nam
    char *month = &ptr[0],
         *day = &ptr[3],
         *year = &ptr[6];
    //khoi tao vong lap for de tao ba chuoi khac nhau cach nahu bang ky tu /
    for(int index = 0; index < strlen(ptr); index++){
        if(ptr[index] == '/')
            ptr[index] = '\0';
    }
    //dung ham atoi() de chuyen ky tu sang so nguyen
    int Month = atoi(month);
    int Date = atoi(day);
    int Year = atoi(year);
    //su dung cau dieu kien if else if de chia truong hop cho month, neu month thuoc truong hop nao thi xuat ra cau lenh o truong hop do
    if(Month == 1)
        cout << "January ";
    else if(Month == 2)
        cout << "February ";
    else if(Month == 3)
        cout << "March ";
    else if(Month == 4)
        cout << "April ";
    else if(Month == 5)
        cout << "May ";
    else if(Month == 6)
        cout << "June ";
    else if(Month == 7)
        cout << "July ";
    else if(Month == 8)
        cout << "August ";
    else if(Month == 9)
        cout << "September ";
    else if(Month == 10)
        cout << "October ";
    else if(Month == 11)
        cout << "November ";
    else if(Month == 12)
        cout << "December ";
    else{//neu month khong thuco truong hop nao thi xuat ra man hinh
        cout << "Invalid date!\n";
        cout << "Month should be between 1-12!\n";
        return;
    }
   //neu year thoa man dieu kien o if thi thuc hien cau lenh
    if(Date < 1 || Date > 31){
        cout << "Invalid date!\n";
        cout << "Date should be between 1-31!\n";
        return;
    }
    else//neu date khong thoa man cau dieu kien o if thi thuc hien cau lenh o esle
        cout << Date << ", ";

    //neu year thoa man dieu kien o if thi thuc hien cau lenh
    if(Year < 0 || Year > 9999){
        cout << "Invalid date!\n";
        cout << "Year should be 4 digit positive number!\n";
        return;
    }
    else//neu year khong thoa man cau dieu kien o if thi thuc hien cau lenh o esle
        cout << Year;
}