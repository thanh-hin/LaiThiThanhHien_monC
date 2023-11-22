#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
using namespace std;

//khai bao struct Date
struct Date
{
    int day;
    int month;
    int year;
};
//khai bao struct Inventory
struct Inventory 
{
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    Date date;
};
void displayMenu();
void addRecord();
void displayRecord();
void changeRecord();
int main(){
    //mo file o che do ghi
    fstream file("inventory.txt", ios::out);
    //lam trong file
    file.clear();
    //dong file
    file.close();
    //khai bao bien nguyen
    int choice = 0;
    //khoi tao vong lap do while
    do
    {  
        //goi ham displayMenu
        displayMenu();
        //nhap vao bien choice
        cin >> choice;
        //su dung cau lenh switch case de chia truong hop cho choice, neu chocie co gia tri thuoc case nao thi thuc hien cau lenh o case do
        switch (choice)
        {
              case 1: 
                 addRecord(); //goi ham addRecord
                 break;
              case 2: 
                 displayRecord();//goi ham disPlayRecord 
                 break;
              case 3: 
                 changeRecord();//goi ham changeRecord
                 break;
              default://neu choice khong thuoc case nao thi dung cau lenh switch
                 break;
        }
        cout << endl;
    } while (choice != 0);//lap lai khi choice khac 0
    return 0;
}
//khai bao ham displayMenu
void displayMenu()
{
    cout << "0 - close program" << endl;
    cout << "1 - add new records" << endl;
    cout << "2 - display a record" << endl;
    cout << "3 - change a record" << endl;
    cout << "*************************" << endl << endl;
}
//khai bao ham addRecord
void addRecord()
{   //mo file o che do ghi, them du lieu vao cuoi file
    fstream file("inventory.txt", ios::out | ios::app);
    Inventory item;
    cout << "Enter data for the new record." << endl;
    cout << "Item description: "; cin >> item.description;
    //goi ham getchar
    getchar();
    //xac thuc dau vao
    do
    {
        cout << "Quantity on hand: "; 
        cin >> item.quantity;
    } while (item.quantity < 0);
    do
    {
        cout << "Wholesale cost: $"; 
        cin >> item.wholesaleCost;
    } while (item.wholesaleCost < 0);
    do 
    {
        cout << "Retail cost: $"; 
        cin >> item.retailCost;
    } while (item.retailCost < 0);
    //xac thuc dau vao
    do
    {
        cout << "Date added to inventory (mm dd yyyy): ";
        cin >> item.date.month; getchar();  
        cin >> item.date.day; getchar(); 
        cin >> item.date.year;
    } while (item.date.day > 31 || item.date.day < 1 || item.date.month < 1
        || item.date.month > 12 || item.date.year < 1980 || item.date.year >2021);
    file << item.description << endl;
    file << item.quantity << endl;
    file << item.wholesaleCost << endl;
    file << item.retailCost << endl;
    file << item.date.month << " " << item.date.day << " " << item.date.year
        << endl << endl;
    //dong file
    file.close();
}
//khai bao ham displayrecord
void displayRecord()
{
    //mo file o che do doc
    fstream file("inventory.txt", ios::in);
    //neu mo file khong thanh cong thi xuat ra cau dan
    if (file.fail()) cout << "The file doesn't exist!" << endl;
    else//neu khong thi thuc hien cac cau lenh
    {
        string description;
        Inventory item;
        cout << "Enter description of the searched record: "; 
        cin >> description;
        cout << endl;
         //thuc hien cau lenhkhi mo file thanh cong 
         while (!file.eof())
        {
            //doc du lieu va luu vao thanh vien description cua item
            getline(file, item.description);
            file >> item.quantity;
            file >> item.wholesaleCost;
            file >> item.retailCost;
            file >> item.date.month;
            file >> item.date.day;
            file >> item.date.year;
            file.get(); 
            //su dungc au dieu kien if, neu dieu kin if thoa amn thi thuc hienca c cau lenh ben duoi
            if (description == item.description)
            {
                //nhao vao cac thanh vien
                cout << "Item description: " << item.description << endl;
                cout << "Quantity: " << item.quantity << endl;
                cout << "Wholesale cost: $" << item.wholesaleCost << endl;
                cout << "Retail cost: $" << item.retailCost << endl;
                cout << "Date added: " << item.date.month << " "
                    << item.date.day << " " << item.date.year << endl << endl;
                break;//dung cau lenh
            }
        }
    }
    //dong file
    file.close();
}
//khai bao ham cahngeRecord
void changeRecord()
{
    //mo file o che do doc
    fstream file("inventory.txt", ios::in);
    //sao chep noi dung vao file ghi
    fstream copy("copy.txt", ios::out);
    string description;
    Inventory tmp, item;
    cout << "Enter description of the record to be changed: ";
    cin >> description;
    cout << "\nEnter new data." << endl;
    item.description = description;
    //xac thuc dua vao
    do
    {
        cout << "Quantity on hand: "; cin >> item.quantity;
    } while (item.quantity < 0);
    do
    {
        cout << "Wholesale cost: $"; cin >> item.wholesaleCost;
    } while (item.wholesaleCost < 0);
    do
    {
        cout << "Retail cost: $"; cin >> item.retailCost;
    } while (item.retailCost < 0);
    do
    {
        cout << "Date added to inventory (mm dd yyyy): ";
        cin >> item.date.month; getchar();  cin >> item.date.day; getchar();  cin >> item.date.year;
    } while (item.date.day > 31 || item.date.day < 1 || item.date.month < 1
        || item.date.month > 12 || item.date.year < 1980 || item.date.year >2021);
    string line;
    //khi mo file thanh cong thuc hien cac cau lenh
    while (!file.eof())
    {   //doc du lien cua file luu vao line
        getline(file, line);
        copy << line << endl;
    }
    //dong file
    file.close();
    file.open("inventory.txt", ios::out);
    //dong file copy
    copy.close();
    copy.open("copy.txt", ios::in);
    copy.seekg(0, ios::beg);
    //neu fiel duco mo thanh cong thi thuc hien cac cau dan
    while (!copy.eof())
    {
        getline(copy, tmp.description);
        copy >> tmp.quantity;
        copy >> tmp.wholesaleCost;
        copy >> tmp.retailCost;
        copy >> tmp.date.month;
        copy >> tmp.date.day;
        copy >> tmp.date.year;
        copy.get(); copy.get();

        if (description == tmp.description)
        {
            file << item.description << endl;
            file << item.quantity << endl;
            file << item.wholesaleCost << endl;
            file << item.retailCost << endl;
            file << item.date.month << " " << item.date.day << " " << item.date.year
                << endl << endl;
        }
        else
        {
            file << tmp.description << endl;
            file << tmp.quantity << endl;
            file << tmp.wholesaleCost << endl;
            file << tmp.retailCost << endl;
            file << tmp.date.month << " " << item.date.day << " " << item.date.year
                << endl << endl;
        }
    }
    //dong file va file copy
    file.close();
    //lam trong file copy
    copy.clear();
    copy.close();
}