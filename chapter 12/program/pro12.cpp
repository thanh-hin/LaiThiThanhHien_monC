#include <bits/stdc++.h>
using namespace std;

int main()
{
    //khai bao bien xau ky tu
    string fileName;
    //khai bao bien ky tu
    char ch;
    ifstream inFile;
    //mo file
    ofstream outFile("out.txt");
    cout << "Enter a file name: ";
    //nhap vao fileName
    cin >> fileName;
    //mo file de nhap du lieu
    inFile.open(fileName);
    //neu mo file tanh cong thi thuc hien tiep cac cau lenh trong ngoac
    if (inFile)
    {
        //doc du lieu thuoc kieu ky tu char tu file1
        inFile.get(ch);
        //khi doc du lieu thanh cong thuc hien tiep chuong trinh
        while (inFile)
        {
        //viet cac ky tu da duoc viet hoa vao file 2
        outFile.put(toupper(ch));
        //doc cac ky tu khac tu file 1
        inFile.get(ch);
        }
        //dong 2 file
        inFile.close();
        outFile.close();
        cout << "File conversion done.\n";
    }
    else//neu mo file khong thanh cong thi xuat ra man hinh
        cout << "Cannot open " << fileName << endl;
    return 0;
}