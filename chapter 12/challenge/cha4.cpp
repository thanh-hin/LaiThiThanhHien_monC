//challenges 4
#include <iostream>
#include <fstream>
using namespace std;

//khai bao ham displayTail
void displayTail (ifstream &);

int main()
{
    //khai bao bien xua ky tu filename
    string fileName;

    //prompt user to enter file name then read
    cout << "Enter the name of the file you want to open: ";
    cin >> fileName;
    //mo tep duoi dang nhi phan
    ifstream inputFile(fileName, ios::binary);
    //xoa lenh '\n' bi du
    cin.ignore();
    //goi ham truyen vao do inputFile
    displayTail(inputFile);
    //dong file
    inputFile.close();
    return 0;
}

//khai bao ham displayTail gom ifstream inputFile
void displayTail (ifstream &inputFile){
    //luu so byte dau tien cua file vao bien pos de kiem tra 
    inputFile.seekg(0L, ios::beg);
    long pos = inputFile.tellg();
    //khai bao bien ky tu ch
    char ch;
    //di chuyen con tro de cuoi file
    inputFile.seekg(0L, ios::end);
    inputFile.clear();
    //tao bien dme
    int counter = 0;
    //thuc hien vong lap khi count nho hon 10 hoac da den dau file
    while (counter < 10 && pos!=inputFile.tellg()){
        //lui 1 vi tri
        inputFile.seekg(-1L, ios::cur);
        //neu dieu kien thoa man thi tang bien dem
        if(inputFile.peek() == '\n'){
            counter++;
        }
    }
    //thuc hien cac cau lenh khi count nho hon 9
    if (counter < 9){
        cout << "There are less than 10 lines inside this file\n";
        cout << "Displaying entire file.\n";
    }
    //hien thi noi dung tu vi tri hien tai cho den khi het file
    while (!inputFile.eof()){
        cout << ch;
        inputFile.get(ch);
    }

}