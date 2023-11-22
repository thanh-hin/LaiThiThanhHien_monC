#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    double regularPrice = 59.95, discount, salePrice;//biến giá thông thường, số tiền chiết khấu và giá bán
    // tính số tiền được giảm giá 20%.
    discount = regularPrice * 0.2;
    // tính giá bán
    salePrice = regularPrice - discount;
    // hiển thị kết quả
    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << salePrice << endl;
    return 0;
}