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
    long recNum;
    //mo file doc va ghi duoi dang nhi phan
    fstream inventory("Inventory.dat", ios::in | ios::out | ios::binary);
    inventory.read(reinterpret_cast<char *>(&record),
                    sizeof(record));
    //doc va hien thi cac ban ghi
    cout << "Which record do you want to edit? ";
    cin >> recNum;
    //di chuyen de ban ghi va doc no
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record),sizeof(record));
    cout << "Description: ";
    cout << record.desc << endl;
    cout << "Quantity: ";
    cout << record.qty << endl;
    cout << "Price: ";
    cout << record.price << endl;
    //lay du lieu tu ban ghi moi 
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore();//xoa lenh xuong dong bi du
    cin.getline(record.desc, DEC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;
    //di chuyen den vi tri bat dau cua ban ghi
    inventory.seekp(recNum * sizeof(record), ios::beg);
    //viet ban ghi moi len ban ghi cu
    inventory.write(reinterpret_cast<char *>(&record),
                    sizeof(record));
    //dong file
    inventory.close();
    return 0;
}