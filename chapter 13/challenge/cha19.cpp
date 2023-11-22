#include <iostream>
#include <string>

using namespace std;

// khai báo class
class Question {
private:
    string questionText;
    string option1;
    string option2;
    string option3;
    string option4;
    int correctAnswer;

public:
    //Hàm khởi tạo dữ liệu câu hỏi
    Question(string q, string opt1, string opt2, string opt3, string opt4, int correct)
        : questionText(q), option1(opt1), option2(opt2), option3(opt3), option4(opt4), correctAnswer(correct) {}

    // Hàm truy cập
    string getQuestion() const {
        return questionText;
    }

    string getOption1() const {
        return option1;
    }

    string getOption2() const {
        return option2;
    }

    string getOption3() const {
        return option3;
    }

    string getOption4() const {
        return option4;
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

int main() {
    // Tạo một mảng gồm 10 đối tượng Câu hỏi
    Question questions[] = {
        {"Question 1", "Option A", "Option B", "Option C", "Option D", 1},
        {"Question 2", "Option A", "Option B", "Option C", "Option D", 2},
        {"Question 3", "Option A", "Option B", "Option C", "Option D", 3},
        {"Question 4", "Option A", "Option B", "Option C", "Option D", 4},
        {"Question 5", "Option A", "Option B", "Option C", "Option D", 1},
        {"Question 6", "Option A", "Option B", "Option C", "Option D", 2},
        {"Question 7", "Option A", "Option B", "Option C", "Option D", 3},
        {"Question 8", "Option A", "Option B", "Option C", "Option D", 4},
        {"Question 9", "Option A", "Option B", "Option C", "Option D", 1},
        {"Question 10", "Option A", "Option B", "Option C", "Option D", 2},
    };

    // Các biến để lưu trữ điểm của người chơi
    int player1Score = 0;
    int player2Score = 0;

    // Lặp lại từng câu hỏi
    for (int i = 0; i < 10; ++i) {
        //Hiển thị các tùy chọn câu hỏi và câu trả lời hiện tại
        cout << "\nQuestion " << (i + 1) << ": " << questions[i].getQuestion() << endl;
        cout << "1. " << questions[i].getOption1() << endl;
        cout << "2. " << questions[i].getOption2() << endl;
        cout << "3. " << questions[i].getOption3() << endl;
        cout << "4. " << questions[i].getOption4() << endl;

        // Hỏi người chơi 1 để biết câu trả lời
        int player1Answer;
        cout << "Player 1, enter your answer (1-4): ";
        cin >> player1Answer;

        // Xác thực câu trả lời
        if (player1Answer >= 1 && player1Answer <= 4) {
            // Kiểm tra xem câu trả lời có đúng không và cập nhật điểm
            if (player1Answer == questions[i].getCorrectAnswer()) {
                cout << "Correct! Player 1 earns a point." << endl;
                player1Score++;
            } else {
                cout << "Incorrect. The correct answer is " << questions[i].getCorrectAnswer() << "." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            return 1;
        }

        // Hỏi người chơi 2 để biết câu trả lời
        int player2Answer;
        cout << "Player 2, enter your answer (1-4): ";
        cin >> player2Answer;

        // Xác thực câu trả lời
        if (player2Answer >= 1 && player2Answer <= 4) {
            // Kiểm tra xem câu trả lời có đúng không và cập nhật điểm
            if (player2Answer == questions[i].getCorrectAnswer()) {
                cout << "Correct! Player 2 earns a point." << endl;
                player2Score++;
            } else {
                cout << "Incorrect. The correct answer is " << questions[i].getCorrectAnswer() << "." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            return 1;
        }
    }

    // Hiển thị điểm số của người chơi
    cout << "\nPlayer 1 Score: " << player1Score << " points" << endl;
    cout << "Player 2 Score: " << player2Score << " points" << endl;

    // Xác định người chiến thắng
    if (player1Score > player2Score) {
        cout << "Player 1 is the winner!" << endl;
    } else if (player2Score > player1Score) {
        cout << "Player 2 is the winner!" << endl;
    } else {
        cout << "It's a tie! Both players have the same score." << endl;
    }

    return 0;
}
