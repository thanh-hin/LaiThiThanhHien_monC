//program 11.6
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//khai báo struct InventoryItem
struct InventoryItem
{
  int partNum;
  string description;
  int onHand;
  double price;
};
//khai báo hàm 
void getItem(InventoryItem&);
void showItem(InventoryItem);

int main()
{
  //tạo cấu trúc InventoryItem có tên part 
  InventoryItem part;
  //gọi hàm getItem
  getItem(part);
  //gọi hàm showwItem
  showItem(part);
  return 0;
}

//hàm nhập dữ liệu 
void getItem(InventoryItem &p)
{

    cout << "Enter the part number: ";
    //nhập vào giá trị thành viên partNum của p
    cin >> p.partNum;
    cout << "Enter the part description: ";
    cin.ignore(); 
    //nhập vào giá trị thành viên description của p
    getline(cin, p.description);
    //nhập vào giá trị thành viên onHand của p
    cout << "Enter the quantity on hand: ";
    cin >> p.onHand;
    //nhập vào giá trị thành viên price của p
    cout << "Enter the unit price: ";
    cin >> p.price;
}

//hàm hiển thị các dữ liệu 
void showItem(InventoryItem p)
{
    //formating
    cout << fixed << showpoint << setprecision(2);
    //hiển thị các giá trị của các thành viên trong p
    cout << "Part Number: " << p.partNum << endl;
    cout << "Description: " << p.description << endl;
    cout << "Units On Hand: " << p.onHand << endl;
    cout << "Price: $" << p.price << endl; 
}