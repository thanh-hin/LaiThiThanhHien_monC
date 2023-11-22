#include <bits/stdc++.h>
using namespace std;

//khai bao hang nguyen
const int DEC_SIZE = 31;

//khai bao struct InventoryItem
struct InventoryItem
{
    char desc[DEC_SIZE];
    int qty;
    double price;
};

int main()
{
    InventoryItem record;
    //mo file chi doc duoi dang nhi phan
    fstream inventory("Inventory.dat", ios::in | ios::binary);
    inventory.read(reinterpret_cast<char *>(&record),sizeof(record));
    //doc va hien thi cac ban ghi
    while (!inventory.eof())
    {
        cout << "Description: ";
        cout << record.desc << endl;
        cout << "Quantity: ";
        cout << record.qty << endl;
        cout << "Price: ";
        cout << record.price << endl << endl;
        inventory.read(reinterpret_cast<char *>(&record),
        sizeof(record));
    }
    //dong file
    inventory.close();
    return 0;
}
