#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến hằng để so sánh
    const int A_SCORE = 90,
              B_SCORE = 80,
              C_SCORE = 70,
              D_SCORE = 60;
    int testScore; // khai báo biến điểm số
    // nhập điểm
    cout << "Enter your numeric test score and I will\n";
    cout << "tell you the letter grade you earned: ";
    cin >> testScore;
    // xác định điểm số bằng chữ cái
    if (testScore >= A_SCORE) //nếu điểm >= 90 thì thực thi xuất điểm A
    {
        cout << "Your grade is A.\n";
    }
    else//các trường hợp bé hơn 90
    {
        if (testScore >= B_SCORE)//nếu điểm >= 80 thì thực thi xuất điểm B
        {
            cout << "Your grade is B.\n";
        }
        else//trường hợp điểm bé hơn 80
        {
            if (testScore >= C_SCORE)//nếu điểm >= 70 thì thực thi xuất điểm C
            {
                cout << "Your grade is C.\n";
            }
            else//ngược lại điểm bé hơn 70
            {
                if (testScore >= D_SCORE)//nếu điểm >= 60 thì thực thi xuất điểm D
                {
                    cout << "Your grade is D.\n";
                }
                else//trường hợp điểm bé hơn 60 thực thi xuất điểm F
                {
                    cout << "Your grade is F.\n";
                }
            }
        }
    }
    return 0;
}