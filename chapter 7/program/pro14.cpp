#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 100;//khai bao so luogn phan tu cua mang numbers
    int numbers[ARRAY_SIZE]; //khai bao mang nguyen numbers gom ARRAY_SIZE phan tu
    int count = 0; //khoi tao bien dem count
    ifstream inputFile;//mo file trong che do read
    inputFile.open("numbers.txt");
    while (count < ARRAY_SIZE && inputFile >> numbers[count])//neu bieu thuc trong ngoac dung thi count tang len 1 don vi
    count++;
    inputFile.close();//dong file
    cout << "The numbers are: ";
    for (int index = 0; index < count; index++)//khoi tao vong lap xuat ra gia tri cua cac pahn tu torng mang numbers
        cout << numbers[index] << " ";//xuat ra gia tri mang index
    cout << endl;
    return 0;
}