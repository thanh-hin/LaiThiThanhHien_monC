#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;
//khai báo lớp
class Coin {
private:
    string sideUp;  // "ngửa" hoặc "sấp" biểu thị mặt của đồng xu hướng lên trên
public:
    // tạo mặc định
    Coin() {
        // Khởi tạo trình tạo số ngẫu nhiên với thời gian hiện tại
        srand(static_cast<unsigned int>(time(0)));

        // Gọi hàm toss để đặt giá trị sideUp ban đầu
        toss();
    }

    // Hàm thành viên mô phỏng việc tung đồng xu
    void toss() {
        // Tạo một số ngẫu nhiên (0 hoặc 1)
        int randomNumber = rand() % 2;

        // Đặt biến sideUp dựa trên số ngẫu nhiên
        if (randomNumber == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    // Hàm thành viên để đưa mặt hiện tại hướng lên trên
    string getSideUp() const {
        return sideUp;
    }
};

int main() {
    // Tạo các thể hiện của lớp Coin cho một quarter, một dimevà một niken
    Coin quarter, dime, nickel;

    // khai báo biến
    double balance = 0.0;

    // Vòng lặp trò chơi
    while (balance < 1.0) {
        // ném quarter
        quarter.toss();
        if (quarter.getSideUp() == "heads") {
            cout << "Quarter landed heads-up! Adding $0.25 to your balance." << endl;
            balance += 0.25;
        } else {
            cout << "Quarter landed tails-up. No change to your balance." << endl;
        }

        // ném dime
        dime.toss();
        if (dime.getSideUp() == "heads") {
            cout << "Dime landed heads-up! Adding $0.10 to your balance." << endl;
            balance += 0.10;
        } else {
            cout << "Dime landed tails-up. No change to your balance." << endl;
        }

        // Ném niken
        nickel.toss();
        if (nickel.getSideUp() == "heads") {
            cout << "Nickel landed heads-up! Adding $0.05 to your balance." << endl;
            balance += 0.05;
        } else {
            cout << "Nickel landed tails-up. No change to your balance." << endl;
        }

        //Hiển thị số dư hiện tại
        cout << "Your current balance: $" << balance << endl << endl;
    }

    // Kiểm tra người chơi thắng hay thua
    if (balance == 1.0) {
        cout << "Congratulations! You won the game!" << endl;
    } else {
        cout << "Sorry, you lost. Your balance exceeded $1." << endl;
    }

    return 0;
}
