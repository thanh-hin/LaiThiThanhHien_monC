#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

class Coin {
private:
    string sideUp;  // “Ngửa” hoặc “sấp” biểu thị mặt của đồng xu hướng lên trên

public:
    //tạo mặc định
    Coin() {
        // Khởi tạo trình tạo số ngẫu nhiên với thời gian hiện tại
        srand(static_cast<unsigned int>(time(0)));
        // Gọi hàm tung để đặt giá trị sideUp ban đầu
        toss();
    }

    // Hàm thành viên mô phỏng việc tung đồng xu
    void toss() {
        //Tạo một số ngẫu nhiên (0 hoặc 1)
        int randomNumber = rand() % 2;

        //Đặt biến sideUp dựa trên số ngẫu nhiên
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
    // Tạo một lớp Coin
    Coin myCoin;
    // Hiển thị mặt ban đầu hướng lên trên
    cout << "The side initially facing up is: " << myCoin.getSideUp() << endl;

    // Các biến đếm số mặt ngửa và mặt sấp
    int headCount = 0;
    int tailCount = 0;

    // Tung đồng xu 20 lần
    for (int i = 0; i < 20; ++i) {
        // Gọi hàm toss để mô phỏng việc tung đồng xu
        myCoin.toss();

        // Hiển thị mặt ngửa lên sau mỗi lần ném
        cout << "After toss " << (i + 1) << ": " << myCoin.getSideUp() << endl;

        // Cập nhật số đếm dựa trên mặt hướng lên trên
        if (myCoin.getSideUp() == "heads") {
            headCount++;
        } else {
            tailCount++;
        }
    }

    // Hiển thị số lần mặt ngửa và mặt ngửa
    cout << "\nNumber of times heads was facing up: " << headCount << endl;
    cout << "Number of times tails was facing up: " << tailCount << endl;

    return 0;
}
