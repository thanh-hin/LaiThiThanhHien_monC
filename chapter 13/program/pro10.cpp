#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main()
{
    double cost; // giá của sản phẩm
    // Nhập giá của sản phẩm
    cout << "Nhập giá của sản phẩm: ";
    cin >> cost;
    // Tạo một đối tượng Sale cho giao dịch này
    // Chỉ định giá của sản phẩm, nhưng sử dụng tỷ lệ thuế mặc định là 5%
    Sale itemSale(cost);
    cout << fixed << showpoint << setprecision(2);//formatting
    // Hiển thị số thuế và tổng cộng.
    cout << "Số tiền thuế bán hàng là $"
         << itemSale.getTax() << endl;
    cout << "Tổng cộng của giao dịch là $"
         << itemSale.getTotal() << endl;
    return 0;
}
