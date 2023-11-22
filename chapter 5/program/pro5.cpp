#include <iostream>
using namespace std;
int main()
{
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;
    // khai báo biến 
    int players,//số lượng người chơi sẵn có
        teamPlayers, //số thành viên mong muốn của mỗi team
        numTeams,//số team
        leftOver;//số thành viên còn lại
    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;//nhập số thành viên mỗi team
    // xác thực đầu vào
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // giải thích lỗi nhiệt độ
        cout << "You should have at least " << MIN_PLAYERS
             << " but no more than " << MAX_PLAYERS << " per team.\n";
        // nhập lại đầu vào số người chơi mỗi team
        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;
    }
    // nhập số người chơi có sẵn
    cout << "How many players are available? ";
    cin >> players;
    // sác thực đầu vào
    while (players <= 0)
    {
        // nhập lại người chơi có sẵn
        cout << "Please enter 0 or greater: ";
        cin >> players;
    }
    //tính số team
    numTeams = players / teamPlayers;
    //tính số người chơi còn lại
    leftOver = players % teamPlayers;
    // hiển thị kết quả
    cout << "There will be " << numTeams << " teams with "
         << leftOver << " players left over.\n";
    return 0;
}