#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
using namespace std;

//khai bao struct Divison
struct Division
{
    string name;
    int quarter;
    double sales;
};

int main()
{
    Division data[16];
    //mo file duoi che do ghi
    fstream file("output.txt", ios::out);
    //khai bao bien xau ky tu str
    string str;
    //khoi tao vong lap for de tinh toan cac gia tri
    for (int i = 0; i < 16; i++)
    {
        if (i < 4)//neu i nho hon 4 thuc thuc hien ca clenh ben duoi
        {
            cout << "Enter the sales figures for the "
                << "East division in Quarter " << i+1 << ": $";
            //gan gia tir cho cac thanh vien 
            data[i].name = "East";
            data[i].quarter = i + 1;
            getline(cin, str);
            //chuyen data[i].sales thanh chuoi gan doi 
            data[i].sales = stod(str);
            //xac thuc dua vao
            if (data[i].sales < 0)
            {
                cout << "Invalid value!" << endl;
                exit(1);
            }
        }
        else if (i < 8)//neu i nho hon 8thi thuc hien cac cau lenh ben duoi
        {
            cout << "Enter the sales figures for the "
                << "West division in Quarter " << (i % 4) + 1 << ": $";
            //gan gai tri cho cac thanh vien
            data[i].name = "West";
            data[i].quarter = (i % 4) + 1;
            getline(cin, str);
            data[i].sales = stod(str);
            if (data[i].sales < 0)//xac thuc dua vao
            {
                cout << "Invalid value!" << endl;
                exit(1);
            }
        }
        else if (i < 12)//neu i nho hon 12thi thuc hien cac cau lenh duoi day
        {
            cout << "Enter the sales figures for the "
                << "North division in Quarter " << (i % 4) + 1 << ": $";
            //gan gia tri cho cac thanh vien
            data[i].name = "North";
            data[i].quarter = (i % 4) + 1;
            getline(cin, str);
            data[i].sales = stod(str);
            if (data[i].sales < 0)//xac thuc dau vao
            {
                cout << "Invalid value!" << endl;
                exit(1);
            }
        }
        else//nei i khong thoa man dieu kien nao thi thuc hien cac cau lenh  duoi day
        {
            cout << "Enter the sales figures for the "
                << "South division in Quarter " << (i % 4) + 1 << ": $";
            //gan gia tri cho cac thanh vien
            data[i].name = "South";
            data[i].quarter = (i % 4) + 1;
            getline(cin, str);
            data[i].sales = stod(str, 0);
            //xac thuc dau vao
            if (data[i].sales < 0)
            {
                cout << "Invalid value!" << endl;
                exit(1);
            }
        }
    }
    //khoi tao vong lap for de duyet qua mang va ghi du lieu vao file dau ra
     for (int i = 0; i < 16; i++)
    {
        file << data[i].name << " " << data[i].quarter << " " << data[i].sales
            << endl;
    }
    return 0;
}