#include <iostream>
#include <string> 
#include <fstream>
using namespace std;

int main()
{
    //khai bao bien xau ky tu
    string input;
    string output;
    cout << "Enter the name of the input file: ";
    cin >> input;//nhap vao ten file de nhap vao du lieu
    cout << "Enter the name of the output file: "; 
    cin >> output;//nhap vao ten file de xuat ra du lieu
    cout << endl;
    //mo file o che do doc
    fstream filein(input, ios::in);
    //mo file o che do ghi duoi dang ma hoa
    fstream encrypted(output, ios::out);
    string line;
    //khi dieu kien o whilw thoa man thi thuc hien cac cau lenh trong ngoac
    while (!filein.eof())
    {
        //doc file va luu du lieu vao line
        getline(filein, line);
        //khoi tao vong lap for, ma hoa ky tu
        for (int i = 0; i < line.length(); i++)
            encrypted.put(line[i] + 10);
        encrypted << endl;
    }
    return 0;
}