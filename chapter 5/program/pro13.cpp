#include <iostream>
using namespace std;
int main ()
{
    int game = 1,
        points,//biến điểm
        total = 0;//tổng tích lũy
    cout << "Enter the number of points your team has earned\n";
    cout << "so far in the season, then enter -1 when finished.\n\n";
    cout << "Enter the points for game " << game << ": ";
    cin >> points;//nhập số điểm
    while (points != -1)//điều kiện điểm khác -1
    {
        total += points;//tổng tích lũy điểm chạy
        game++;// game = game +1
        cout << "Enter the points for game " << game << ": ";
        cin >> points;//nhập điểm game ++
        //nhập -1 để kết thúc
    }
    cout << "\nThe total points are " << total << endl;
    return 0;
}