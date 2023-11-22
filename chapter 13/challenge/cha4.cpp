#include <iostream>
#include <string>

using namespace std;

// Xác định một lớp cho dữ liệu cá nhân
class PersonalData {
private:
    //Biến thành viên riêng tư để giữ dữ liệu cá nhân
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    // Trình xây dựng để khởi tạo dữ liệu cá nhân
    PersonalData(string n, string addr, int a, string phone) {
        name = n;
        address = addr;
        age = a;
        phoneNumber = phone;
    }

    // Chức năng truy cập để lấy dữ liệu cá nhân
    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    // Chức năng Mutator để thiết lập dữ liệu cá nhân
    void setName(string n) {
        name = n;
    }

    void setAddress(string addr) {
        address = addr;
    }

    void setAge(int a) {
        age = a;
    }

    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }
};

int main() {
    // Tạo một phiên bản cho thông tin của bạn
    PersonalData myInfo("Your Name", "Your Address", 25, "Your Phone Number");

    // Tạo hai trường hợp cho thông tin của bạn bè hoặc thành viên gia đình
    PersonalData friend1Info("Friend1 Name", "Friend1 Address", 30, "Friend1 Phone Number");
    PersonalData friend2Info("Friend2 Name", "Friend2 Address", 28, "Friend2 Phone Number");

    // Hiển thị dữ liệu cá nhân
    cout << "Your Information:\n";
    cout << "Name: " << myInfo.getName() << "\nAddress: " << myInfo.getAddress()
         << "\nAge: " << myInfo.getAge() << "\nPhone Number: " << myInfo.getPhoneNumber() << "\n\n";

    cout << "Friend 1's Information:\n";
    cout << "Name: " << friend1Info.getName() << "\nAddress: " << friend1Info.getAddress()
         << "\nAge: " << friend1Info.getAge() << "\nPhone Number: " << friend1Info.getPhoneNumber() << "\n\n";

    cout << "Friend 2's Information:\n";
    cout << "Name: " << friend2Info.getName() << "\nAddress: " << friend2Info.getAddress()
         << "\nAge: " << friend2Info.getAge() << "\nPhone Number: " << friend2Info.getPhoneNumber() << "\n";

    return 0;
}