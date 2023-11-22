#include <iostream>
#include <cstring>
#include <string> 
using namespace std;

//khai bao ham
void displayMatching(const string[], char *);
//khai bao mang hang
const string phonebook[11] = {"Alejandra Cruz, 555-1223",
                              "Joe Looney, 555-0097",
                              "Geri Palmer, 555-8787",
                              "Li Chen, 555-1212",
                              "Holly Gaddis, 555-8878",
                              "Sam Wiggins, 555-0998",
                              "Bob Kain, 555-8712",
                              "Tim Haynes, 555-7676",
                              "Warren Gaddis, 555-9037",
                              "Jean James, 555-4939",
                              "Ron Palmer, 555-2783"};

int main()
{
    //khai bao mang ky tu inputString
    char inputString[21];
    cout << "Enter a name to search in phonebook:\n";
    //nhap vao gia tri inputString
    cin.getline(inputString, 21);
    cout << "\nThe matching entries are:\n";
    //goi ham displayMatching truyen vao do phonebook va inputString
    displayMatching(phonebook, inputString);
    return 0;
}
//khai bao ham displayMatching 
void displayMatching(const string entry[], char *input)
{
    //khoi tao vong lap for, lap lai cac muc trong danh ba va chuyen chung thanh chuoi c de tim su xuat hien cua dau vap ben trong muc hien tai
    for(int index = 0; index < 11; index++){
        //if occurrence is found, display current entry
        if(strstr(entry[index].c_str(), input))
            cout << entry[index] << endl;
    }
}