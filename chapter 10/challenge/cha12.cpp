#include <iostream>
#include <string.h>
using namespace std;

bool hasUpperCase(const char* password);
bool hasLowerCase(const char* password); 
bool hasDigit(const char* password);
int main() 
{
    //khai bao hang nguyen
    const int MAX_LENGTH = 100;
    //khai bao amng ky tu password
    char password[MAX_LENGTH];
    cout << "Enter your password: ";
    //nhap vao mang password
    cin.getline(password, MAX_LENGTH);
    //cho gia tri bool valid = true
    bool valid = true;
    //su dung if de chia truong hop cho password
    //neu password nho hon 6 ky tu thi xuat ra cau dan
    if (strlen(password) < 6) {
        cout << "Password should be at least six characters long." << endl;
        valid = false;
    }
    //neu password khong co chu cai i hoa thi xaut ra cau dan
    if (!hasUpperCase(password)) {
        cout << "Password should contain at least one uppercase letter." << endl;
        valid = false;
    }
    //neu password khong co chu cai in thuong thi xuat ra cau dan
    if (!hasLowerCase(password)) {
        cout << "Password should contain at least one lowercase letter." << endl;
        valid = false;
    }
    //neu password khong co chu so thi xuat ra cau dan
    if (!hasDigit(password)) {
        cout << "Password should have at least one digit." << endl;
        valid = false;
    }
    //neu valid = true thi xuat ra man hinh cac cau dan
    if (valid) {
        cout << "Password meets the criteria." << endl;
    }
    return 0;
}
//khai bao ham hasUpperCase
bool hasUpperCase(const char* password) 
{
    //khoi tao vong lap for de duyet tung ky tu 
    for (int i = 0; password[i] != '\0'; ++i) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            return true;//tra ve true
        }
    }
    return false;
}
//khai bao ham hasLowerCase
bool hasLowerCase(const char* password)  
{
  //khoi tao vong lap for de duyet tung phan tu
    for (int i = 0; password[i] != '\0'; ++i) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            return true;//tra ve true
        }
    }
    return false;
}
//khai bao ham hasDigit
bool hasDigit(const char* password) 
{
    //khoi tao vong lap de duyet tung phan tu
    for (int i = 0; password[i] != '\0'; ++i) {
        if (password[i] >= '0' && password[i] <= '9') {
            return true;//tra ve true
        }
    }
    return false;
}

