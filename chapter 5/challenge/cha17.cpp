#include <iostream>
using namespace std;
int main()
{
    //khai báo hằng số
    const int MIN_NUMBER = 0,
              NUM_OF_STORES = 5,
              HUNDRED = 100;
    //khai báo biến
    int store_1,
        store_2,
        store_3,
        store_4,
        store_5,
        store_1_100s, 
        store_2_100s, 
        store_3_100s, 
        store_4_100s, 
        store_5_100s;
    //Nhập doanh số hôm nay của cửa hàng 1
    cout << "\nEnter today's sales for store 1: ";
    cin >> store_1;
    store_1_100s = store_1 / HUNDRED; // 200/100 = 2
    //Nhập doanh số hôm nay của cửa hàng 2
    cout << "Enter today's sales for store 2: ";
    cin >> store_2;
    store_2_100s = store_2 / HUNDRED; // 300/100 = 3
    //Nhập doanh số hôm nay của cửa hàng 3
    cout << "Enter today's sales for store 3: ";
    cin >> store_3;
    store_3_100s = store_3 / HUNDRED;
    //Nhập doanh số hôm nay của cửa hàng 4
    cout << "Enter today's sales for store 4: ";
    cin >> store_4;
    store_4_100s = store_4 / HUNDRED;
    //Nhập doanh số hôm nay của cửa hàng 5
    cout << "Enter today's sales for store 5: ";
    cin >> store_5;
    store_5_100s = store_5 / HUNDRED;
    //hiển thị doanh số bán hàng bằng "*"
    //xác định mỗi cửa hàng doanh số bán bằng "*"
    cout << "\nSALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;
    cout << "Store 1: ";
    for (int i = MIN_NUMBER; i < store_1_100s; i++)
        cout << '*';

    cout << endl;

    cout << "Store 2: ";
    for (int i = MIN_NUMBER; i < store_2_100s; i++)
        cout << '*';

    cout << endl;

    cout << "Store 3: ";
    for (int i = MIN_NUMBER; i < store_3_100s; i++)
        cout << '*'; 

    cout << endl;

    cout << "Store 4: ";
    for (int i = MIN_NUMBER; i < store_4_100s; i++)
        cout << '*';

    cout << endl;
    
    cout << "Store 5: ";
    for (int i = MIN_NUMBER; i < store_5_100s; i++)
        cout << '*';
    return 0;
}