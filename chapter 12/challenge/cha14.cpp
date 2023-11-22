#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//khai bao struct Date
struct Date
{
    int day;
    int month;
    int year;
};
//khai bao struct Inventory
struct Inventory
{
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    Date date;
};
int main()
{
    //mo file o che do chi doc
    fstream file("inventory.txt", ios::in);
    Inventory item;
    int quantity = 0;
    double wholesaleValue = 0, retailValue = 0;
    //khi file da mo thanh cong thuc hien cac cau lenh
    while (!file.eof())
    {
        //doc file, luu vao tahnh vien description cua item
        getline(file, item.description);
        file >> item.quantity;
        file >> item.wholesaleCost;
        file >> item.retailCost;
        file >> item.date.month;
        file >> item.date.day;
        file >> item.date.year;
        file.get(); file.get();
        //gan gai tri cho quantity, wholesalevalue, retailvalue
        quantity += item.quantity;
        wholesaleValue += item.wholesaleCost;
        retailValue += item.retailCost;
    }
    //xuat ra man hinh gai tri 
    cout << "The total wholesale value: $" << wholesaleValue << endl;
    cout << "The total retail value: $" << retailValue << endl;
    cout << "The total quantity: " << quantity << endl;
    file.close();
    return 0;
}