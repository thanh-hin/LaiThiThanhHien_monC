#include <bits/stdc++.h>
using namespace std;

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

//khai bao struct Info
struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};
int main()
{
    Info person;
    //khai bao bien ky tu
    char again;
    fstream people;
    //mo file de doc duoi dang nhi phan
    people.open("people.dat", ios::out | ios::binary);
    if (!people)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }
    cout << "Here are the people in the file:\n\n";
    //doc ban ghi dau tien tu file
    people.read(reinterpret_cast<char *>(&person),
    sizeof(person));
    //khi chua o cuoi file thi thuc hien cac lenh
    while (!people.eof())
    {
        //xuat ra amn hinh cac ban ghi
        cout << "Name: ";
        cout << person.name << endl;
        cout << "Age: ";
        cout << person.age << endl;
        cout << "Address line 1: ";
        cout << person.address1 << endl;
        cout << "Address line 2: ";
        cout << person.address2 << endl;
        cout << "Phone: ";
        cout << person.phone << endl;
        cout << "\nPress the Enter key to see the next record.\n";
        cin.get(again);
        //doc ban ghi tiep theo tu file
        people.read(reinterpret_cast<char *>(&person),
                    sizeof(person));
    }
    cout << "That's all the data in the file!\n";
    people.close();
    return 0;
}
