#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
using namespace std;

int main()
{
    //khai bao bien xau ky tu
    string input, output;
    cout << "Enter the name of the encrypted file: "; cin >> input;
    cout << "Enter the name of the output file: "; cin >> output;
    cout << endl;
    //ma hoa file o che do doc
    fstream encrypted(input, ios::in);
    //mo file o che do ghi
    fstream fout(output, ios::out);
    //khai bao bien xau ky tu
    string line;
    //khi ma hoa file thanh cong thuc hien cac cau lenh
    while (!encrypted.eof())
    {   //doc du lieu tu encrypted va gan vao line
        getline(encrypted, line);
        //khoi tao vong lap ma hoa cac dong
        for (int i = 0; i < line.length(); i++)
              fout.put(line[i] - 10);
        fout << endl;
    }
    return 0;
}