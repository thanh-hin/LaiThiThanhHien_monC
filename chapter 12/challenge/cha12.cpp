#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
using namespace std;

//khai bao struct Divison
struct Division
{
    string name;
    int quarter;
    double sales;
};
int main()
{
    int west, east, north, south;
    Division data[16];
    //mo fiel o che do doc
    fstream file("input.txt", ios::in);
    int i = 0;
    //khi mo file thanh cong, thuc hien cac cau lenh
    while (!file.eof())
    {
        //doc file va luu vao thanh vien name ua data[i]
        getline(file, data[i].name, ' ');
        file >> data[i].quarter;
        file >> data[i].sales;
        file.get();
        i++;//tang bien i len 1 don vi
    }
    //khai bao bien thuc
    double first = 0, second = 0, third = 0, fourth = 0;
    //khoi tao vong lap for de tinh toan gia tir cua data[i].quarter == 1
    for (int i = 0; i < 16; i++)
    {
        //su dung cau dieu kien if else de chai truong hop cho data[i].quarter, neu data[i].quarter thuoc truong hop nao thi thuc hien cau lenh o truong hop do
        if (data[i].quarter == 1)
            first += data[i].sales;
        else if (data[i].quarter == 2)
            second += data[i].sales;
        else if (data[i].quarter == 3)
            third += data[i].sales;
        else if (data[i].quarter == 4)
            fourth += data[i].sales;
    }
    //xuat ra man hinh gia tri cua first, second, third, fourth
    cout << "Total corporate sales for each quarter:" << endl;
    cout << "First quarter: $" << first << endl;
    cout << "Second quarter: $" << second << endl;
    cout << "Third quarter: $" << third << endl;
    cout << "Fourth quarter: $" << fourth << endl << endl;
    double first = 0, second = 0, third = 0, fourth = 0;
    //khoi tao vong lap fror de tinh toan gia tri
    for (i = 0; i < 16; i++)
    {
        //su dung cau dieu kien if else if de chia truong hop cho data[i].name
        if (data[i].name == "East")
            east += data[i].sales;
        else if (data[i].name == "West")
            west += data[i].sales;
        else if (data[i].name == "North")
            north += data[i].sales;
        else if (data[i].name == "South")
            south += data[i].sales;
    }
    //xuat ra man hinh ket qua
    cout << "Total yearly sales for each division:" << endl;
    cout << "East: $" << east << endl;
    cout << "West: $" << west << endl;
    cout << "North: $" << north << endl;
    cout << "South: $" << south << endl << endl;
    double total = east + west + north + south;
    cout << "Total yearly corporate sales: $" << total << endl << endl;
    cout << "Average quarterly sales for the divsions:" << endl;
    cout << "East division: $" << east / 4 << endl;
    cout << "West division: $" << west / 4 << endl;
    cout << "North division: $" << north / 4 << endl;
    cout << "South division: $" << south / 4 << endl << endl;
    //su dung cua dieu kien if else if de tim quy cao nhat va thap nhat
    if (first > second && first > third && first > fourth)
        cout << "Highest quarter is the first quarter: $" << first << endl;
    else if (second > first && second > third && second > fourth)
        cout << "Highest quarter is the second quarter: $" << second << endl;
    else if (third > first && third > second && third > fourth)
        cout << "Highest quarter is the third quarter: $" << third << endl;
    else
        cout << "Highest quarter is the fourth quarter: $" << fourth << endl;

    if (first < second && first < third && first < fourth)
        cout << "Lowest quarter is the first quarter: $" << first << endl;
    else if (second < first && second < third && second < fourth)
        cout << "Lowest quarter is the second quarter: $" << second << endl;
    else if (third < first && third < second && third < fourth)
        cout << "Lowest quarter is the third quarter: $" << third << endl;
    else
        cout << "Lowest quarter is the fourth quarter: $" << fourth << endl;

    return 0;
}
