#include <iostream>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    int begInv,
        sold,
        store1, 
        store2,
        store3;
    // Nhận hàng tồn kho ban đầu cho tất cả các cửa hàng
    cout << "One week ago, 3 new widget stores opened\n";
    cout << "at the same time with the same beginning\n";
    cout << "inventory. What was the beginning inventory? ";
    cin >> begInv;
    // Đặt hàng tồn kho của mỗi cửa hàng
    store1 = store2 = store3 = begInv;
    // Lấy số lượng vật dụng được bán tại cửa hàng 1
    cout << "How many widgets has store 1 sold? ";
    cin >> sold;
    store1 -= sold; // Điều chỉnh hàng tồn kho của cửa hàng 1
    // Lấy số lượng vật dụng được bán tại cửa hàng 2
    cout << "How many widgets has store 2 sold? ";
    cin >> sold;
    store2 -= sold; // Điều chỉnh tồn kho của cửa hàng 2
    // Lấy số lượng vật dụng được bán tại cửa hàng 3
    cout << "How many widgets has store 3 sold? ";
    cin >> sold;
    store3 -= sold; // Điều chỉnh hàng tồn kho của cửa hàng 3
    // Hiển thị hàng tồn kho hiện tại của mỗi cửa hàng
    cout << "\nThe current inventory of each store:\n";
    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;
    cout << "Store 3: " << store3 << endl;
    return 0;
}