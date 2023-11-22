#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

// khai báo class
class FishingGame {
private:
    int fishingPoints;

public:
    // Trình xây dựng để khởi tạo fishingPoints về 0
    FishingGame() : fishingPoints(0) {}

    // Chức năng thành viên mô phỏng câu cá và cập nhật điểm
    void fish() {
        // Mô phỏng việc tung xúc xắc sáu mặt
        int result = rand() % 6 + 1;

        // Xác định vật phẩm bắt được và số điểm tương ứng
        int points = 0;
        string item = "";

        switch (result) {
            case 1:
                item = "Huge Fish";
                points = 10;
                break;
            case 2:
                item = "Old Shoe";
                points = -5;
                break;
            case 3:
                item = "Little Fish";
                points = 5;
                break;
            case 4:
                item = "Seaweed";
                points = 2;
                break;
            case 5:
                item = "Tin Can";
                points = -3;
                break;
            case 6:
                item = "Treasure Chest";
                points = 20;
                break;
        }

        // Hiển thị kết quả của vòng đấu
        cout << "You caught: " << item << " (" << points << " points)" << endl;

        // Cập nhật tổng điểm câu cá
        fishingPoints += points;
    }

    // Nhận chức năng lấy tổng số điểm câu cá
    int getFishingPoints() const {
        return fishingPoints;
    }
};

int main() {
    // Tạo trình tạo số ngẫu nhiên với thời gian hiện tại
    srand(static_cast<unsigned int>(time(0)));

    // tạo một lớp FishingGame
    FishingGame fishingGame;

    // Vòng lặp trò chơi
    char choice;///biến lựa chọn
    do {
        // Hỏi người dùng xem họ có muốn tiếp tục câu cá không
        cout << "Do you want to fish for more items? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            // Câu cá để lấy vật phẩm và cập nhật điểm
            fishingGame.fish();
        } 
        else if (choice != 'n' && choice != 'N') 
        {
            cout << "Invalid choice. Please enter 'y' or 'n'." << endl;
        }

    } while (choice == 'y' || choice == 'Y');

    // Hiển thị tổng điểm câu cá và tin nhắn chúc mừng
    cout << "\nTotal Fishing Points: " << fishingGame.getFishingPoints() << endl;

    if (fishingGame.getFishingPoints() >= 15) {
        cout << "Congratulations! You're a master angler!" << endl;
    } else if (fishingGame.getFishingPoints() >= 0) {
        cout << "Well done! You had a successful fishing trip!" << endl;
    } else {
        cout << "Better luck next time. Keep practicing!" << endl;
    }

    return 0;
}
