#include <iostream>
using namespace std;

// khai báo class Test
class TestScores 
{
private:
    // Các biến thành viên riêng để giữ ba điểm kiểm tra
    double score1;
    double score2;
    double score3;

public:
    // Trình xây dựng để khởi tạo điểm kiểm tra khi tạo một thể hiện
    TestScores(double s1, double s2, double s3) : score1(s1), score2(s2), score3(s3) {}

    // Chức năng truy cập để lấy điểm kiểm tra
    double getScore1() const { return score1; }
    double getScore2() const { return score2; }
    double getScore3() const { return score3; }

    // Chức năng Mutator để thiết lập điểm kiểm tra
    void setScore1(double s1) { score1 = s1; }
    void setScore2(double s2) { score2 = s2; }
    void setScore3(double s3) { score3 = s3; }

    // Hàm thành viên để tính và trả về điểm trung bình của các bài kiểm tra
    double calculateAverage() const {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() 
{
    // Các biến để lưu trữ thông tin đầu vào của người dùng về điểm kiểm tra
    double userScore1, userScore2, userScore3;

    // Nhắc người dùng nhập ba điểm kiểm tra
    cout << "Enter three test scores:\n";
    cout << "Score 1: ";
    cin >> userScore1;

    cout << "Score 2: ";
    cin >> userScore2;

    cout << "Score 3: ";
    cin >> userScore3;

    // Tạo một phiên bản của lớp TestScores với điểm do người dùng cung cấp
    TestScores testScoresObj(userScore1, userScore2, userScore3);

    // Hiển thị điểm trung bình của các bài kiểm tra
    cout << "\nAverage Test Score: " << testScoresObj.calculateAverage() << std::endl;

    return 0;
}
