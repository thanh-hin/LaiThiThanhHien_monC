#include <iostream>
#include <cstring>
#include <fstream> 
#include <string>
using namespace std;

//khai bao ham charCounter
void charCounter(string, int &, int &, int&);

int main()
{
    //khai bao bien nguyen
    int uppers = 0,
        lowers = 0,
        digits = 0;
    ifstream inputFile("text.txt");
    //khai bao bein xau ky tu
    string fileLine;
    //neu mo file khong thanh cong -> xuat ra man hinh
    if(!inputFile){
        cout << "File could not be opened!\n";
        exit(0);
    }
    //goi ham charCounter line tuc cho den khi khong con dong nao de doc trong file
    while(getline(inputFile, fileLine)){
        charCounter(fileLine, uppers, lowers, digits);
    }
    //xuat ra cac gai tri
    cout << "There are " << uppers << " uppercase characters.\n";
    cout << "There are " << lowers << " lowercase characters.\n";
    cout << "There are " << digits << " digits.\n";
    //dong file
    inputFile.close();
    return 0;
}
//khai bao ham charCounter
void charCounter(string inputString, int &upperCounter,
                 int &lowerCounter, int &digitCounter)
{
    //khoi tao vong lap for
    for(int index = 0; index < inputString.length(); index++){
        //kiem tra xme ky tu hien tai co pahi chu hoa khong 
        if(isupper(inputString[index]))
            upperCounter++;//tang bein upperCounter
        //kiem tra xem ky tu hein tai co phai chu thuong khong
        else if(islower(inputString[index]))
            lowerCounter++;//tang bein lowerCounter
        //kiem tra xem ky tu hien tai co phai la chu so khong
        else if(isdigit(inputString[index]))
            digitCounter++;//tang bein digitCounter
    }
}