#include <iostream>
using namespace std;

//khai bao ham 
int countVowels(char* str);
int countConsonants(char* str);
int main() 
{
    //khai bao hang nguyen
    const int MAX_LENGTH = 1000;
    //khai bao mang ky tu
    char inputString[MAX_LENGTH];
    char choice;
    //khoi tao vong lap do while
    do {
        cout << "Enter a string: ";
        cin.getline(inputString, MAX_LENGTH);
        cout << "Menu:" << endl;
        cout << "A) Count the number of vowels" << endl;
        cout << "B) Count the number of consonants" << endl;
        cout << "C) Count both vowels and consonants" << endl;
        cout << "D) Enter another string" << endl;
        cout << "E) Exit the program" << endl;
        cout << "Select an option: ";
        cin >> choice;//nhap vao bien choice
        //su dung cau lenh switch case de chia turong hop cho choice, neu gai tri cua choice thoa amn case nao thi thuc hien cau lenh o case do
        switch (choice) {
            case 'A':
            case 'a':
                //goi ham countVowels truyen vao do inputString
                cout << "Number of vowels: " << countVowels(inputString) << endl;
                break;
            case 'B':
            case 'b':
                //goi ham countConsonants truyen vao do inputString
                cout << "Number of consonants: " << countConsonants(inputString) << endl;
                break;
            case 'C':
            case 'c':
                //goi ham countVowels truyen vao do inputString
                cout << "Number of vowels: " << countVowels(inputString) << endl;
                //goi ham countConsonants truyen vao do inputString
                cout << "Number of consonants: " << countConsonants(inputString) << endl;
                break;
            case 'D':
            case 'd':
                cin.ignore();//bo qua ky tu xuong dong con lai tron gbo dem
                break;
            case 'E':
            case 'e':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                break;
        }
    } while (choice != 'E' && choice != 'e');//lap lai vong lap khi choice thoa amn diue kein o while
    return 0;
}
//khai bao ham countVowels
int countVowels(char* str) 
{
    int count = 0;
    //khoi tao vong lap for de duyet cac phan tu trong str
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]);
        //neu ch thoa man cac dieu kein cua if thi tang biem dem
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}
//khai bao ham countConsonants
int countConsonants(char* str) 
{
    //khai bao bien dem
    int count = 0;
    //khoi tao vong lap for de duyet cac phan tu cua str
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]); 
        //neu ch thoa man cac dieu kein cua if thi tang biem dem
        if (ch >= 'a' && ch <= 'z' && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count++;
        }
    }
    return count;
}