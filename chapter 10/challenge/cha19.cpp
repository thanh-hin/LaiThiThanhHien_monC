#include <iostream>
#include <cstring>
#include <string> 
#include <iomanip> 
using namespace std;

//khai bao ham
void displayCheck(char *, char *, double);
void spellAmount(double);
void displayDigit(int);
void displayTens(int);
void displaySpecialTens(int, int);

int main()
{
    //khai bao mang ky tu
    char date[11];
    char name[41];
    cout << "Please enter check date in mm/dd/yyyy format:\n";
    //nhap vao date
    cin.getline(date, 11);
    cout << "Please enter payee's name:\n";
    //nhap vao name
    cin.getline(name, 41);
    //khai bao bien thuc amount
    double amount;
    cout << "What is the amount in $?\n";
    //nha voa gai tri bien amount
    cin >> amount;
    //xac thuc dau vao
    while(amount < 0 || amount >= 10000){
        cout << "Please enter a valid amount (0-10,000)!:\n";
        cin >> amount;
    }
    //goi ham displayCheck truyen date, name av amount
    displayCheck(date, name, amount);
    return 0;
}
//kahi bao ham displayCheck
void displayCheck(char *date, char *name, double amount){
    //can le phai
    cout << setw(50) << right << "Date: " << date << endl << endl;
    cout << left << setprecision(2) << fixed;//formating
    //xuta ra ca gai tri
    cout << "Pay to the Order of: " << name;
    cout << "\t\t$" << amount << endl;
    //goi ham spellAmount truyen vao do amount
    spellAmount(amount);
}
//khai bao ham spellAmount
void spellAmount(double number){
    //khai bao bien ngueyn
    int whole = static_cast<int>(number);
    int floating = ((number-static_cast<int>(number))*100)+1;
    int thousands, hundreds, tens, ones;
    //gan gai tir cho cac bien
    thousands = whole/1000;
    whole = whole%1000;
    hundreds = whole/100;
    whole = whole%100;
    tens = whole/10;
    ones = whole%10;
    //neu bien thousands lon hon 0 thi thuc hien lenh
    if(thousands > 0){
        displayDigit(thousands);//goi ham displayDigit truyen vao do thousands
        cout << "thousand ";
    }
    //neu bien hundreds lon hon 0 thi thuc hien lenh
    if(hundreds > 0){
        displayDigit(hundreds);//goi ham displayDigit truyen vao do hundreds
        cout << "hundred ";
    }
    if(tens == 1)//neu bien tens bang 1 thi thuc hien lenh
        displaySpecialTens(tens, ones);//goi ham displaySpecialTens truyen vao do tens, ones
    else if(tens > 1){//neu bein tens lon hon 1 thi thuc hien lenh
        displayTens(tens);//goi ham displayTens truyen vao do tens
        if(ones)
            displayDigit(ones);//goi ham displayDigit truyen vao do ones
    }
    //always display cents
    cout << "and " << floating << " cents\n";
}
//khai bao ham displayDitgit
void displayDigit(int digit)
{
    //su dung cua dieu kien if else if de chia turong hop cho bien digit, bien digit co gia tri thoa man dieu kien o turong hop nao thi chuong trinh thuc hien cac cau lenh do
    if(digit == 1)
        cout << "one ";
    else if(digit == 2)
        cout << "two ";
    else if(digit == 3)
        cout << "three ";
    else if(digit == 4)
        cout << "four ";
    else if(digit == 5)
        cout << "five ";
    else if(digit == 6)
        cout << "six ";
    else if(digit == 7)
        cout << "seven ";
    else if(digit == 8)
        cout << "eight ";
    else if(digit == 9)
        cout << "nine ";
    else
        return;
}
//khai bao ham displayTens
void displayTens(int digit)
{
    //su dung cua dieu kien if else if de chia turong hop cho bien digit, bien digit co gia tri thoa man dieu kien o turong hop nao thi chuong trinh thuc hien cac cau lenh do
    if(digit == 2)
        cout << "twenty ";
    else if(digit == 3)
        cout << "thirty ";
    else if(digit == 4)
        cout << "forty ";
    else if(digit == 5)
        cout << "fifty ";
    else if(digit == 6)
        cout << "sixty ";
    else if(digit == 7)
        cout << "seventy ";
    else if(digit == 8)
        cout << "eighty ";
    else if(digit == 9)
        cout << "ninety ";
    else
        return;
}
//khai bao ham displaySpecialTens
void displaySpecialTens(int tens, int ones)
{
    //su dung cua dieu kien if else if de chia turong hop cho bien digit, bien digit co gia tri thoa man dieu kien o turong hop nao thi chuong trinh thuc hien cac cau lenh do
    int number = (10*tens) + ones;

    if(number == 10)
        cout << "ten ";
    else if(number == 11)
        cout << "eleven ";
    else if(number == 12)
        cout << "twelve ";
    else if(number == 13)
        cout << "thirteen ";
    else if(number == 14)
        cout << "fourteen ";
    else if(number == 15)
        cout << "fifteen ";
    else if(number == 16)
        cout << "sixteen ";
    else if(number == 17)
        cout << "seventeen ";
    else if(number == 18)
        cout << "eighteen ";
    else if(number == 19)
        cout << "nineteen ";
    else
        return;
}