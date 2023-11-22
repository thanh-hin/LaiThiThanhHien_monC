#include <iostream>
#include <string>
#include <iomanip>
#include "Invent.h"  // Giả sử "Invent.h" chứa định nghĩa lớp cho Inventory

using namespace std;

int main() 
{
    // Tạo một đối tượng kiểm kê bằng cách sử dụng hàm tạo mặc định
    cout << "Now creating an inventory object";
    cout << " using default constructor...\n";
    Inventory inv1;  // tạo một thể hiện của lớp Inventory bằng cách sử dụng hàm tạo mặc định
    cout << "Done!\n";

    cout << fixed << setprecision(2);//formatting

    // Hiển thị giá trị của đối tượng kiểm kê đầu tiên
    cout << "\nNow showing values...\n";
    cout << "Item Number: " << inv1.getItemNumber() << endl;
    cout << "Quantity: " << inv1.getQuantity() << endl;
    cout << "Cost: " << inv1.getCost() << endl;
    cout << "Total Cost: " << inv1.getTotalCost() << endl;

    // Đặt giá trị mới bằng các hàm truy cập
    cout << "\nNow setting new values using accessor ";
    cout << "functions...\n";
    inv1.setItemNumber(1234);
    inv1.setQuantity(10);
    inv1.setCost(15.95);
    cout << "Done!\n";

    //Hiển thị giá trị của đối tượng kiểm kê đầu tiên sau khi cập nhật
    cout << "\nNow showing values again...\n";
    cout << "Item Number: " << inv1.getItemNumber() << endl;
    cout << "Quantity: " << inv1.getQuantity() << endl;
    cout << "Cost: " << inv1.getCost() << endl;
    cout << "Total Cost: " << inv1.getTotalCost() << endl;

    // Tạo một đối tượng kiểm kê khác bằng cách sử dụng hàm tạo quá tải
    cout << "\nNow creating another inventory object";
    cout << " using overloaded constructor...\n";
    Inventory inv2(5555, 100, 5.99);  // Tạo một phiên bản khác với các giá trị được cung cấp trong hàm tạo
    cout << "Done!\n";

    // Hiển thị giá trị của đối tượng kiểm kê thứ hai
    cout << "\nNow showing values...\n";
    cout << "Item Number: " << inv2.getItemNumber() << endl;
    cout << "Quantity: " << inv2.getQuantity() << endl;
    cout << "Cost: " << inv2.getCost() << endl;
    cout << "Total Cost: " << inv2.getTotalCost() << endl;

    return 0;
}