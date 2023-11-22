#include <iostream>
#include <iomanip>  

using namespace std;

// Định nghĩa lớp cho InventoryItem
class InventoryItem {
private:
    string itemName;
    double itemCost;
    int onHand;

public:
    //Trình xây dựng để khởi tạo thuộc tính mục
    InventoryItem(string name, double cost, int quantity) {
        itemName = name;
        itemCost = cost;
        onHand = quantity;
    }

    // Nhận giá vật phẩm
    double getItemCost() const {
        return itemCost;
    }

    // Nhận số lượng onHand
    int getOnHand() const {
        return onHand;
    }

    // Chức năng cập nhật số lượng onHand sau khi mua hàng
    void updateOnHand(int quantity) {
        onHand -= quantity;
    }
};

// Định nghĩa lớp cho CashRegister
class CashRegister {
private:
    InventoryItem &item;  // Tham chiếu đến đối tượng InventoryItem
    double unitPrice;     //Đơn giá có cộng thêm lợi nhuận

public:
    // Trình xây dựng để khởi tạo CashRegister với tham chiếu InventoryItem
    CashRegister(InventoryItem &item) : item(item), unitPrice(0) {}

    // Chức năng thực hiện tính toán mua hàng
    void calculatePurchase(int quantity) {
        // Xác thực số lượng
        if (quantity < 0) {
            cout << "Error: Quantity cannot be negative." << endl;
            return;
        }

        // Lấy giá trị của mặt hàng từ đối tượng InventoryItem
        double itemCost = item.getItemCost();

        // Thêm 30% lợi nhuận để có được đơn giá
        unitPrice = itemCost * 1.3;

        // Tính tổng số tiền mua hàng
        double subtotal = unitPrice * quantity;

        // Tính thuế bán hàng 6% trên tổng phụ
        double tax = subtotal * 0.06;

        // Tính tổng số tiền mua
        double total = subtotal + tax;

        //Hiển thị chi tiết mua hàng
        cout << fixed << setprecision(2);
        cout << "Purchase Subtotal: $" << subtotal << endl;
        cout << "Sales Tax (6%): $" << tax << endl;
        cout << "Purchase Total: $" << total << endl;

        // Cập nhật số lượng onHand trong đối tượng InventoryItem
        item.updateOnHand(quantity);
    }
};


int main() {
    //Tạo một thể hiện của lớp InventoryItem
    InventoryItem item("Widget", 10.0, 50);

    // Tạo một thể hiện của lớp CashRegister có tham chiếu đến đối tượng InventoryItem
    CashRegister register1(item);

    // Hỏi người dùng về mặt hàng và số lượng đang được mua
    int quantity;
    cout << "Enter the quantity of items to purchase: ";
    cin >> quantity;

    // Thực hiện tính toán mua hàng
    register1.calculatePurchase(quantity);

    // Hiển thị số lượng onHand được cập nhật trong đối tượng InventoryItem
    cout << "Updated onHand quantity: " << item.getOnHand() << endl;

    return 0;
}
