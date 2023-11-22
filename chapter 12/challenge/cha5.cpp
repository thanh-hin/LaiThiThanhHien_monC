#include <iostream>
#include <string> 
#include <fstream>
using namespace std;

int main()
{
    //khai bao bien xau ky tu
    string fileName;
    string lineRead;
    ifstream inputFile;
    cout << "Enter the name of the file you want to read: ";
    cin >> fileName;

    //mo file
    inputFile.open(fileName);
    if (!inputFile)//neu mo file khong thanh cong, xuat ra man hinh bao loi
        cout << "Error opening file, or file doesn't exist!";
    cin.ignore();//xoa lenh \n bi du 
    //khoi tao vong lap for, doc file cho den khi het file
    for (int counter = 1; !inputFile.eof(); counter++){
        if(counter % 25 == 0){//neu dieu kien o if thoa man thi dung chuong trinh
            system("Pause");
        }
        //doc du lieu gan bien lineRead, xuat gia tri bien lineRead ra man hinh
        getline(inputFile, lineRead);
        cout << counter << ":" << lineRead << endl;
    }
    //dong file
    inputFile.close();
    return 0;
}