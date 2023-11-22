#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;//khai bao bien xau ky tu input
    fstream nameFile;
    //mo file o che do doc
    nameFile.open("murphy.txt", ios::in);
    //khoi tao cau dieu kien if,neu mo file thanh cong thi tiep tuc chuong trinh
    if (nameFile)
    {
    //doc du lieu o nameFile va nhap vao bien input
    getline(nameFile, input);
    while (nameFile)
    {
        //xuat ra gai tri bien input
        cout << input << endl;
        //doc gia tri khac nhap voa input
        getline(nameFile, input);
    }
    //dong file
    nameFile.close();
    }
    //neu file khong mo duoc thi xuat ra man hinh
    else
    {
    cout << "ERROR: Cannot open file.\n";
    }
    return 0;
}