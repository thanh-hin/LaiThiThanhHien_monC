#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
    // Tạo đối tượng InventoryItem
    InventoryItem item1;
    
    //Đặt thuộc tính cho item1
    item1.setDescription("Hammer"); // Đặt mô tả
    item1.setCost(6.95);             // Đặt chi phí
    item1.setUnits(12);              // Đặt số lượng đơn vị
    
    //Tạo đối tượng InventoryItem (item2) kèm mô tả
    InventoryItem item2("Pliers");

    // tạo đối tượng InventoryItem (item3) với mô tả, chi phí và đơn vị
    InventoryItem item3("Wrench", 8.75, 20);

    // Hiển thị thông tin về các mặt hàng trong kho
    cout << "The following items are in inventory:\n";
    cout << setprecision(2) << fixed << showpoint;//foamatting

    // Hiển thị dữ liệu cho mục 1
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Units on Hand: " << item1.getUnits() << endl << endl;

    // Hiển thị dữ liệu cho mục 2
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Cost: $" << item2.getCost() << endl;
    cout << "Units on Hand: " << item2.getUnits() << endl << endl;

    // Hiển thị dữ liệu cho mục 3
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Cost: $" << item3.getCost() << endl;
    cout << "Units on Hand: " << item3.getUnits() << endl;

    return 0;
}