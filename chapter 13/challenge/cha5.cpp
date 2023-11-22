#include <iostream>
#include <string>

using namespace std;

//  Xác định một lớp cho RetailItem
class RetailItem {
private:
    // Biến thành viên
    string description;
    int unitsOnHand;
    double price;

public:
    // Hàm tạo để khởi tạo các biến thành viên
    RetailItem(string desc, int units, double itemPrice) {
        description = desc;
        unitsOnHand = units;
        price = itemPrice;
    }

   // Hàm biến đổi để thiết lập các biến thành viên
    void setDescription(string desc) {
        description = desc;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }

    void setPrice(double itemPrice) {
        price = itemPrice;
    }

    // Hàm truy cập để truy xuất các biến thành viên
    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    // Tạo ba đối tượng RetailItem và lưu trữ dữ liệu trong đó
    RetailItem item1("Item 1 Description", 10, 19.99);
    RetailItem item2("Item 2 Description", 20, 29.99);
    RetailItem item3("Item 3 Description", 15, 39.99);

    // Hiển thị dữ liệu cho từng RetailItem
    cout << "Item 1: " << endl;
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Units on Hand: " << item1.getUnitsOnHand() << endl;
    cout << "Price: $" << item1.getPrice() << endl << endl;

    cout << "Item 2: " << endl;
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Units on Hand: " << item2.getUnitsOnHand() << endl;
    cout << "Price: $" << item2.getPrice() << endl << endl;

    cout << "Item 3: " << endl;
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Units on Hand: " << item3.getUnitsOnHand() << endl;
    cout << "Price: $" << item3.getPrice() << endl;

    return 0;
}