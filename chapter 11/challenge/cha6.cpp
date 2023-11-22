#include <iostream>
using namespace std;

//khai bao struct PlayerInfo
struct PlayerInfo
{
    string playerName;
    int playerNumber;
    double points;
};
//khai bao struct TeamStatistics
struct TeamStatistics
{
    double totalPoints;
    unsigned indexMax;
};
//khai bao ham
void storePlayerInfo(PlayerInfo[],const unsigned);
void calculateTeamStatistics(const PlayerInfo[],const unsigned,TeamStatistics&);
void showStatistics(const PlayerInfo[],const unsigned,const TeamStatistics&);
string getOrdinal(const unsigned);
int main()
{
  //khai bao hang thuc
  const unsigned NUM_PLAYERS = 12;
  //tao ban ghi
  PlayerInfo players[NUM_PLAYERS];
  TeamStatistics record;
  //goi ham storePlyer truyen vao players va NUM_PLAYER
  storePlayerInfo(players,NUM_PLAYERS);
  //goi ham calculateTeamStatistics truyen vao player, NUM_PLYER va record
  calculateTeamStatistics(players,NUM_PLAYERS,record);
  cout<<"\nNow I would print the summary of the results\n\n";
  //goi ham showStaTistics truyen vao player, NUM_PLAYER va record
  showStatistics(players,NUM_PLAYERS,record);
  return 0;
}
//khiai bao ham storePlayerInfo
void storePlayerInfo(PlayerInfo players[], const unsigned NUM_PLAYERS)
{
    //khoi tao vong lap for de nhap vao va tinh toan gia tri cua cac thanh vien cua player 
    for(unsigned i = 0; i< NUM_PLAYERS; i++)
    {
        //nhap vao cac thanh vien
        cout <<"Storing the information about "<<(i+1)
                 <<getOrdinal(i+1)<<" player,\n";
        cout <<"  Player Name : ";
        getline(cin,players[i].playerName);
        cout <<"Player Number : ";
        cin  >>players[i].playerNumber;
        //xac thuc dau vao
        while(players[i].playerNumber < 0)
        {
            cout <<"Numbers can not be negatives,\n";
            cout <<"Enter the value again : ";
            cin >>players[i].playerNumber;
        }
        cout <<"Player Points : ";
        cin >>players[i].points;
        //xac thuc dua vao
        while(players[i].points < 0)
        {
            cout <<"Points can not be negatives,\n";
            cout <<"Enter the value again : ";
            cin >>players[i].points;
        }
        cin.ignore();//xoa lenh \n bi du
    }
}
//khai bao ha, calculateTeamStatistics
void calculateTeamStatistics(const PlayerInfo players[],const unsigned NUM_PLAYERS,TeamStatistics& record)
{
    //cho gi tri cua thnah vien idexMax, totalPoints bang 0
    record.indexMax = 0;
    record.totalPoints = 0;
    //khoi tao vong lap for
    for(unsigned i = 0; i< NUM_PLAYERS; i++)
    {
       //cong don gia tri cua thanh vien points cua playre vao totalpoints cua record
       record.totalPoints += players[i].points;
       //khoi tao cau dieu kien if, neu dieu kien o if thoa man thi thuc hein cau lenh ben duoi
       if(players[record.indexMax].points < players[i].points )
       {   
          record.indexMax = i;
       }
    }
}
//khai bao ham showStatistics
void showStatistics(const PlayerInfo players[],const unsigned NUM_PLAYERS,const TeamStatistics& record)
{
    cout <<"\t\t: Players Information :\n\n";
    //khoi tao vong lap for de xuat gia tri cauc ac thanh vien cua player
    for(unsigned i = 0; i< NUM_PLAYERS; i++)
    {
        cout <<"Information about "<<(i+1)<<getOrdinal(i+1)
             <<" player,\n";
        //xuat ra gai tri cua cac thanh vien
        cout <<"  Player Name : "<<players[i].playerName<<"\n";

        cout <<"Player Number : "<<players[i].playerNumber<<"\n";

        cout <<"Player Points : "<<players[i].points<<"\n";

    }
    cout <<"  Team Points : "<<record.totalPoints<<endl;
    cout <<"The player who scored maximum points,\n";
    cout <<"   His Number : "
         <<players[record.indexMax].playerNumber<<"\n";
    cout <<"     His Name : "
         <<players[record.indexMax].playerName<<"\n";
}
//khoi tao ham getOrdinal
string getOrdinal(const unsigned num)
{
    unsigned parser = num  * 100;
    //khoi tao cau dieu kien if
    if(parser < 20 && parser > 10)//neu parser thoa man dieu kien if thi return th
    {
        return "th";
    }
    parser = num * 10;
    if(parser == 1)//neu parser thoa man dieu if thi return st
    {
        return "st";
    }
    else if(parser == 2)//neu parser thoa man dieu if thi return nd
    {
        return "nd";
    }
    else if(parser == 3)//neu parser thoa man dieu if thi return rd
    {
        return "rd";
    }
    else {//neu parser khong thoa man dieu kein nao thi return th
        return "th";
    }
}
