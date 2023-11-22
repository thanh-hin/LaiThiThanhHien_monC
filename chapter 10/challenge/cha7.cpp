#include <iostream>
#include <cstring> 
using namespace std;

int main() 
{   
    //khai bao hang nguyen
    const int MAX_LENGTH = 50; 
    //khai bao mang ky tu
    char firstName[MAX_LENGTH];
    char middleName[MAX_LENGTH];
    char lastName[MAX_LENGTH];
    char formattedName[MAX_LENGTH * 3]; 
    cout << "Enter your first name: ";
    //nhap vao gri cua mang firstName
    cin.getline(firstName, MAX_LENGTH);
    cout << "Enter your middle name: ";
    //nhap vao gai tri cua mang middleName
    cin.getline(middleName, MAX_LENGTH);
    cout << "Enter your last name: ";
    //nhap vao gai tri cua mang lastName
    cin.getline(lastName, MAX_LENGTH);
    //goi ham strcpy turyen vao do cac gai tri
    strcpy(formattedName, lastName);
    strcat(formattedName, ", ");
    strcat(formattedName, firstName);
    strcat(formattedName, " ");
    strcat(formattedName, middleName);
    //xuat ra gai tir cua formattedName
    cout << "Formatted name: " << formattedName << endl;
    return 0;
}
