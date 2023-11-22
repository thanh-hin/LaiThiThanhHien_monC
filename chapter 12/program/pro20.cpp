#include <bits/stdc++.h>
using namespace std;

//khai bao hang nguyen
const int DEC_SIZE = 31;
const int NUM_RECORDS = 5;

//khai bao struct InventoryItem
struct InventoryItem
{
    char desc[DEC_SIZE];
    int qty;
    double price;
};

int main()
{
    InventoryItem record = {"", 0, 0.0};
    //mo file chi ghi duoi dang nhi phan
    fstream inventory("Inventory.dat", ios::out | ios::binary);
    //viet cac ban ghi trong
    for (int count = 0; count < NUM_RECORDS; count++)
    {
        cout << "Now writing record " << count << endl;
        inventory.write(reinterpret_cast<char *>(&record),
        sizeof(record));
    }
    //dong file
    inventory.close();
    return 0;
}