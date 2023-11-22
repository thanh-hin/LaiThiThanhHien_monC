#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

// Chức năng mô phỏng việc lăn xúc xắc sáu mặt
int rollDie() {
    return rand() % 6 + 1; // Tạo một số ngẫu nhiên từ 1 đến 6
}

int main() {
    // Tạo trình tạo số ngẫu nhiên với thời gian hiện tại
    srand(static_cast<unsigned int>(time(0)));

    // Các biến để theo dõi điểm của người chơi và máy tính
    int playerTotal = 0;
    int computerTotal = 0;

    // Vòng lặp trò chơi chính
    while (true) {
        //Đến lượt máy tính
        int computerRoll1 = rollDie();
        int computerRoll2 = rollDie();
        computerTotal += computerRoll1 + computerRoll2;

        // Đến lượt người chơi
        char rollAgain;
        cout << "Computer has " << computerTotal << " points (hidden).\n";
        cout << "Do you want to roll the dice? (y/n): ";
        cin >> rollAgain;

        if (rollAgain == 'y' || rollAgain == 'Y') {
            // Player rolls the dice
            int playerRoll1 = rollDie();
            int playerRoll2 = rollDie();
            playerTotal += playerRoll1 + playerRoll2;

            cout << "You rolled " << playerRoll1 << " and " << playerRoll2 << ". Your total is " << playerTotal << ".\n";

            // Kiểm tra xem người chơi có bị phá sản không
            if (playerTotal > 21) {
                cout << "Busted! You went over 21. Computer wins.\n";
                break;
            }
        } else if (rollAgain == 'n' || rollAgain == 'N') {
            // Người chơi quyết định dừng lăn
            cout << "You chose to stop rolling.\n";
            break;
        } else {
            cout << "Invalid input. Please enter 'y' to roll again or 'n' to stop.\n";
        }
    }

    // Tiết lộ tổng số của máy tính và xác định người chiến thắng
    cout << "Computer's total is " << computerTotal << ".\n";

    if (computerTotal > 21) {
        cout << "Computer busted! You win.\n";
    } else if (playerTotal > computerTotal) {
        cout << "Congratulations! You win.\n";
    } else if (playerTotal < computerTotal) {
        cout << "Computer wins. Better luck next time.\n";
    } else {
        cout << "It's a tie!\n";
    }

    return 0;
}
