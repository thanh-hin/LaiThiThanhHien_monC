#include <iostream>
#include <cstring>
using namespace std;

//khai bao ham uper
void upper(char* str);
//khai bao ham lower
void lower(char* str);
//khai bao ham reverse
void reverse(char* str);
int main() {
    //khai bao hang nguyen
    const int maxSize = 100;
    //khai bao mang ky tu
    char inputString[maxSize];
    cout << "Enter a string: ";
    //nhap vao mang ky tu
    cin.getline(inputString, maxSize);
    cout << "Original string: " << inputString << endl;
    //goi ham reverse truyen vao do inputString
    reverse(inputString);
    cout << "After reverse: " << inputString << endl;
    //goi ham lower truyen vao do bien inputString
    lower(inputString);
    cout << "After lower: " << inputString << endl;
    //goi ham uper truyen vao do inputSting
    upper(inputString);
    cout << "After upper: " << inputString << endl;
    return 0;
}
//khai bao ham upper
void upper(char* str) 
{
    //khoi tao vong lap for fr kiem tra ky tu co phai ky tu thuong hay khong
    for (int i = 0; str[i] != '\0'; ++i) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);//chuyen str[i] thanh ky tu thuong
        }
    }
}
void lower(char* str) 
{
    //khoi tao vong lap for de kiem tra ky tu co phai ky tu thuong hay khong
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);//
        }
    }
}

// Function to reverse the case of characters in a C-string
void reverse(char* str) 
{
   //khoi tao vong lap for de kiem tra ky tu co phai ky tu in hoa hay khong
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}
