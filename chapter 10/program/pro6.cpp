#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    // khai báo biến
    const int NUM_PRODS = 5; // số sản phẩm
    const int LENGTH = 27;// chuỗi chiều dài
    //khai báo mảng kí tự 2 chiều gồm các kí tự
    char products[NUM_PRODS][LENGTH] ={ "TV327 31-inch Television",
                                          "CD257 CD Player",
                                          "TA677 Answering Machine",
                                          "CS109 Car Stereo",
                                          "PC955 Personal Computer" };
    char lookUp[LENGTH];//khai báo mảng lookUp
    char *strPtr = nullptr; // Để trỏ đến sản phẩm được tìm thấy
    int index;//bộ đếm
    // Nhắc người dùng về số sản phẩm
    cout << "\tProduct Database\n\n";
    cout << "Enter a product number to search for: ";
    cin.getline(lookUp, LENGTH);
    //Tìm kiếm chuỗi con phù hợp trong mảng
    for (index = 0; index < NUM_PRODS; index++)
    {
        strPtr = strstr(products[index], lookUp);
        if (strPtr != nullptr)
        break;
    }
    // Nếu tìm thấy chuỗi con phù hợp, hãy hiển thị thông tin sản phẩm
    if (strPtr != nullptr)
        cout << products[index] << endl;
    else
        cout << "No matching product was found.\n";
    return 0;
}