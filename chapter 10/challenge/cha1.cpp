#include <iostream>
using namespace std;

//dinh nghia ham
int charCount(char *);

int main()
{
    //khai bao mang ky tu 
    char inputString[21];
    cout << "Enter a string with a maximum of 20 characters\n";
    cout << "and I will show you how many characters it has!\n";
    //nhap vao mang ky tu inputString
    cin.getline(inputString, 21);
    //goi ham charCount truyen vao do gia tri inputString roi xuat ra man hinh
    cout << "The string you entered has " << charCount(inputString);
    cout << " characters.\n";
    return 0;
}
//khai bao ham nguyen charCount
int charCount(char *ptr)
{
    //khai bao bien dem
    int counter = 0;
    //su dung vong lap while de duyet qua cac ky tu cua chuoi, dung khi gap ly tu \0
    while(*ptr != '\0'){
        //tang bien dem
        counter++;
        //tang con tro de duyet tiep ky tu tiep theo
        ptr++;
    }
    return counter;
}