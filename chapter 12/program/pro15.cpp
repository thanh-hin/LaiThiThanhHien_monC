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
    //tao struct Info ten person
    Info person;
    //khai bao bien ky tu
    char again;
    fstream people("people.dat", ios::out | ios::binary);
    do
    {
        //nhap vao du lieu cua mot nguoi
        cout << "Enter the following data about a "
            << "person:\n";
        cout << "Name: ";
        cin.getline(person.name, NAME_SIZE);
        cout << "Age: ";
        cin >> person.age;
        cin.ignore();//bo qua cau lenh xuong dong bi du
        cout << "Address line 1: ";
        cin.getline(person.address1, ADDR_SIZE);
        cout << "Address line 2: ";
        cin.getline(person.address2, ADDR_SIZE);
        cout << "Phone: ";
        cin.getline(person.phone, PHONE_SIZE);
        //ghi noi dung cua struct ve mot nguoi vao file
        people.write(reinterpret_cast<char *>(&person),
                    sizeof(person));
        //xac nhan nguoi dung co muon ghi mot ban ghi khac kh
        cout << "Do you want to enter another record? ";
        cin >> again;
        cin.ignore();///bo qua cau lenh xuong dong bi du
    } while (again == 'Y' || again == 'y');//lap lai khi dieu kien torng ngoac thoa man
    people.close();//dong struct people
    return 0;
}