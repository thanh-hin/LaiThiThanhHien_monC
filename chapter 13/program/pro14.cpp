#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
    const int NUM_ITEMS = 5;

    // Khởi tạo mảng các đối tượng InventoryItem.
    InventoryItem inventory[NUM_ITEMS] = {
        InventoryItem("Hammer", 6.95, 12),
        InventoryItem("Wrench", 8.75, 20),
        InventoryItem("Pliers", 3.75, 10),
        InventoryItem("Ratchet", 7.95, 14),
        InventoryItem("Screwdriver", 2.50, 22)
    };

    // formatting
    cout << setw(14) << "Inventory Item"
         << setw(8) << "cost" << setw(8)
         << setw(16) << "Units on Hand\n";
    cout << "-------------------------------------\n";

    // Hiển thị thông tin của mỗi mặt hàng trong mảng.
    for (int i = 0; i < NUM_ITEMS; i++)
    {
        cout << setw(14) << inventory[i].getDescription();
        cout << setw(8) << inventory[i].getCost();
        cout << setw(7) << inventory[i].getUnits() << endl;
    }

    return 0;
}