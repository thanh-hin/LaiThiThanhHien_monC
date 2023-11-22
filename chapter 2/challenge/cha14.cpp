#include <iostream>
#include <string>
using namespace std;
int main ()
{
    //khai báo các biến chuỗi 
    string name,//tên
            address,//địa chỉ
            city,//tên thành phố
            district,// tên quận
            zip,// mã zip
            phoneNumber,//số điện thoại
            major;//ngành học
    //nhập các thông tin cá nhân
    cout <<"Your name: ";
    getline(cin,name);
    cout <<"\nYour city: ";
    getline(cin,city);
    cout <<"\nYour address: ";
    getline(cin,address);
    cout <<"\nThe district: ";
    getline(cin,district);
    cout <<"\nYour ZIP code: ";
    getline(cin,zip);
    cout <<"\nYour phone number: ";
    getline(cin,phoneNumber);
    cout <<"\nYour major: ";
    getline(cin,major);
    return 0;
}