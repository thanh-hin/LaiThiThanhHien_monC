#include <bits/stdc++.h>
using namespace std;

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;//khai báo hằng

//khai bao struct Info
struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};
//khai bao ham byteNum, showRec
long byteNum(int);
void showRec(Info);

int main()
{
    Info person;
    fstream people; 
    //mo file de nhap duoi dang nhi phan
    people.open("people.dat", ios::in | ios::binary);
    //neu mo file thanh cong thu thuc hien tiep chuong trinh
    if (!people)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }
    //doc va xuat ra ban ghi 1 (ban ghi thu hai)
    cout << "Here is record 1:\n";
    people.seekg(byteNum(1), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);
    //doc va xuat ra ban ghi 0 (ban ghi dua tien)
    cout << "\nHere is record 0:\n";
    people.seekg(byteNum(0), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);
    //dong file
    people.close();
    return 0;
}
//khai bao ham long byteNum gom so nguyen recNum
long byteNum(int recNum)
{
    //tra ve gia tri cua sizeof(Info)*recNum
    return sizeof(Info) * recNum;
}
//khai bao ham showRec gom struct Info
void showRec(Info record)
{
    cout << "Name: ";
    cout << record.name << endl;
    cout << "Age: ";
    cout << record.age << endl;
    cout << "Address line 1: ";
    cout << record.address1 << endl;
    cout << "Address line 2: ";
    cout << record.address2 << endl;
    cout << "Phone: ";
    cout << record.phone << endl;
}