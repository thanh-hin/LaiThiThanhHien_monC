#include <iostream>
#include <cstring>
#include <string> 
using namespace std;

//khai bao ham
void writeMorse(char *, const string []);
int convertASCIItoMorse(char);
//khai bao mang hang
const string morseCodes[40] = {" ", "--..--", ".-.-.-", "..--..",
                               "-----", ".----", "..---", "...--",
                               "....-", ".....", "-....", "--...",
                               "---..", "----.", ".-", "-...",
                               "-.-.", "-..", ".", "..-.",
                               "--.", "....", "..", ".---",
                               "-.-", ".-..", "--", "-.",
                               "---", ".--.", "--.-", ".-.",
                               "...", "-", "..-", "...-",
                               ".--", "-..-", "-.--", "--.."};


int main()
{
    //khai abo mang ky tu
    char inputString[101];
    cout << "Enter your string and I will convert it to Morse Code!\n";
    cout << "(Max 100 characters including spaces):\n";
    //nhap vao inputString
    cin.getline(inputString, 101);
    //goi ham writeMorse truyen vao do inputString va morseCodes
    writeMorse(inputString, morseCodes);
    return 0;
}
//khai bao ham writeMorse
void writeMorse(char *ptr, const string morse[])
{
    cout << endl;
    //thuc hien cac cau kenh khi ky tu dang kiem tra khong phai ky tu \0
    while(*ptr != '\0'){
        //xuat ra gia tri 
        cout << morse[convertASCIItoMorse(toupper(*ptr))];
        //tang bien ptr len mot don vi
        ptr++;
    }
}

int convertASCIItoMorse(char input)
{
   //su dung cua dieu kien if de chia truong hop cho input, neu input thuco truong hop nao thi tra ve theo gai tri tra ve cua truong hop do
    if(input == ' ')
        return 0;
    else if(input == ',')
        return 1;
    else if(input == '.')
        return 2;
    else if(input == '?')
        return 3;
    else if(input >= 48 && input <=57)
        return input - 44;
    else if(input >= 65 && input <=90)
        return input - 51;
}