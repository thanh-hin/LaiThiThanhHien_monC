#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //khai báo biến
    int numStudents,//số học sinh
        numTests;//Số bài kiểm tra của mỗi học sinh
    double total,
        average; //điểm trung bình
    cout << fixed << showpoint << setprecision(1);//formatting
    // nhập số học sinh
    cout << "This program averages test scores.\n";
    cout << "For how many students do you have scores? ";
    cin >> numStudents;
    // nhập số bài kiểm tra mỗi học sinh
    cout << "How many test scores does each student have? ";
    cin >> numTests;
    // Tính điểm trung bình của từng học sinh.
    for (int student = 1; student <= numStudents; student++)//vòng lặp cho mỗi học sinh
        {
            total = 0;// Khởi tạo bộ tích lũy.
            for (int test = 1; test <= numTests; test++)//nhập điểm từng bài kiểm tra
            {
                double score;
                cout << "Enter score " << test << " for ";
                cout << "student " << student << ": ";
                cin >> score;
                total += score;
            }
            average = total / numTests;//tính điểm trung bình
            cout << "The average score for student " << student;
            cout << " is " << average << ".\n\n";//xuất điểm tủng bình
        }
    return 0;
}