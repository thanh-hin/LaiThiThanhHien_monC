#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    // khai báo biến
    const float ADULT_PRICE = 10,
                CHILD_PRICE = 6,
                PROFIT = .20;
    string movie_name;//tên bộ phim
    int adult_tkt, child_tkt;
    float total, theater_per;
    // nhập tên bộ phim
    cout << "\nWhat was the name of the movie? ";
    getline(cin, movie_name);
    // hỏi số lượng vé người lớn và vé trẻ em
    cout << "\nHow many adult tickets? ";
    cin >> adult_tkt;//nhập số vé người lớn
    cout << "How many child tickets? ";
    cin >> child_tkt;//nhập số vé trẻ em
    // Tính lợi nhuận gộp và lợi nhuận ròng
    total = (adult_tkt * ADULT_PRICE) + (child_tkt * CHILD_PRICE);
    theater_per = total * PROFIT;
    // Hiển thị báo cáo
    cout << setprecision(2) << fixed;//formatting
    cout << "\nMovie Name: \"" << movie_name << '\"' <<endl;
    cout << "Adult tickets sold:      " << setw(10) << adult_tkt;
    cout << "\nChild tickets sold:      " << setw(10) << child_tkt;
    cout << "\nTotal cost:              " << setw(10) << total;
    cout << "\nGross Box Office Profit: " << setw(10) << theater_per <<endl;
    return 0;
}