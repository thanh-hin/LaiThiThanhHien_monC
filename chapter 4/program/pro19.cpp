#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    // Hằng số cho ngưỡng điểm
    const int A_SCORE = 90,
              B_SCORE = 80,
              C_SCORE = 70,
              D_SCORE = 60,
              MIN_SCORE = 0,//điểm tối thiểu
              MAX_SCORE = 100; // điểm tối đa
    int testScore; // biến điểm số
    // nhập điểm
    cout << "Enter your numeric test score and I will\n"
         << "tell you the letter grade you earned: ";
    cin >> testScore;
    // xác thực đầu vào 
    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
    {
        // xác định điểm về chữ cái
        if (testScore >= A_SCORE)
            cout << "Your grade is A.\n";
        else if (testScore >= B_SCORE)
            cout << "Your grade is B.\n";
        else if (testScore >= C_SCORE)
            cout << "Your grade is C.\n";
        else if (testScore >= D_SCORE)
            cout << "Your grade is D.\n";
        else
            cout << "Your grade is F.\n";
    }
    else//yêu cầu nhập điểm trong phạm vi từ 0 - 100
    {
        cout << "That is an invalid score. Run the program\n"
            << "again and enter a value in the range of\n"
            << MIN_SCORE << " through " << MAX_SCORE << ".\n";
    }
    return 0;
}