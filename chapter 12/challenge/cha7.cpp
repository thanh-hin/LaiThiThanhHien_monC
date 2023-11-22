#include <iostream>
#include <string> 
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    //khai bao bien xau ky tu 
    string input;
    string output;
    cout << "Enter the name of the inout file: ";
    //nhap vao ten file de nhap vao du lieu
    cin >> input;
    cout << "Enter the name of the output file: ";
    //nhap vao ten file de xuat ra du lieu
    cin >> output;
    cout << endl;
    //mo file input o che do doc
    fstream filein(input, ios::in);
    //mo file output o che do ghi
    fstream fileout(output, ios::out);
    //khai bao bien xau ky tu
    string line;
    //khi dieu kieu o while thoa man thi lap lai cac cau lenh trong ngoac
    while (!filein.eof())
    {   //doc du lieu o filein, luu vao bien line
        getline(filein, line);
        //su dung ham put() va tolower de chuyen chu cai dau tien thanh in hoa, ghi vao file output
        fileout.put(toupper(line[0]));
        for (int i = 1; i < line.length(); i++)
            fileout.put(tolower(line[i]));
        fileout << endl;
    }
    return 0;
}