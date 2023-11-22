#include <iostream>
using namespace std;

//khai bao ham capitalizeSentences
void capitalizeSentences(char* str);
int main()
{   
    //khai bao hang thuc
    const int MAX_LENGTH = 1000;
    //khai bao mang ky tu
    char inputString[MAX_LENGTH];
    cout << "Enter a string: ";
    //nhap vao gia tri phan tu trong mang inputString
    cin.getline(inputString, MAX_LENGTH);
    //goi ham capitalizeSentences truyen vao do gia tri mang inputString
    capitalizeSentences(inputString);
    //xuat ra gia tri inputString
    cout << "Modified string:\n" << inputString << endl;
    return 0;
}
//khai bao ham capitalizeSentences
void capitalizeSentences(char* str) 
{
    //khai bao bien dung sai newSentences
    bool newSentence = true; 
    //khoi tao vong lap for de duyet cac phan tu trong mang
    for (int i = 0; str[i] != '\0'; ++i) {
        //neu gia tri newSentence = true va str[i] la chu cai thi thuc hien ca cau lenh
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = false;//gan gai tri cho newSentences
        //neu diue kien o if khong thoa man thi thuc hien cua lenh
        } else if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = true;
        }
    }
}

