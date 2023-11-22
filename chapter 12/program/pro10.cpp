#include <bits/stdc++.h>
using namespace std;

int main()
{
    //khai bao bien xua ky tu
    string fileName;
    //khai bao bien ky tu 
    char ch;
    fstream file;
    //nhap voa gia tri bien fileName
    cout << "Enter a file name: ";
    cin >> fileName;
    //mo file chi doc
    file.open(fileName, ios::in);
    //khi file duoc mo thanh cong thi thuc hien cac cau lenh
    if (file)
    {
        //doc mot du lieu kieu char tu file, luu vao bien ch
        file.get(ch);
        //khi da doc du lieu thanh cong tiep tuc chuong trinh
        while (file)
        {
        //xuat ra gia tri bien ch
        cout << ch;
        //doc mot du lieu kieu char khac va luu vao bien ch
        file.get(ch);
        }
        //dong file
        file.close();
    }
    else//neu file mo khong thanh cong thi xuat ra chuong trinh
        cout << fileName << " could not be opened.\n";
    return 0;
}