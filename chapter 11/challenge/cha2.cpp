#include <iostream>
using namespace std;

//khai bao struct MovieData
struct MovieData{
    string title;       
    string director;    
    int yrRelease;      
    int mnRunTime;      
    double productionCost;
    double firstYrRevenue;
};

//khai bao ham showMovieInfo gom MovieData
void showMovieInfo(const MovieData m);
int main(){
    
    cout<<"\t\t Information \n";
    cout<<"This program stores information about movies\n";
    cout<<"using structure and print them for user in\n";
    cout<<"a formatted manner.\n";
    //tao hai mau MovieData, su dung danh scah khoi tao de khoi tao du lieu
    MovieData m1 = {"MovieX","Louis",2013,115,75,342.76};
    MovieData m2 = {"MovieY","Alex",2017,110,195,80.1};
    //goi ham showMovieInfo truyen vao m1, m2
    showMovieInfo(m1);
    showMovieInfo(m2);
    return 0;
}
//khai boa ham showMovieInfo
void showMovieInfo (const MovieData m){
    //xuat ra cac thong tin ve ban ghi
    cout <<"    Movie Title : " << m.title<<endl;
    cout <<" Movie Director : " <<m.director<<endl;
    cout <<"Year of Release : " <<m.yrRelease<<endl;
    cout <<"   Running Time : " <<m.mnRunTime
         <<" (Minutes)" <<endl;
    //gan gai tri cho bien profit bang bieu thuc
    double profit = m.firstYrRevenue - m.productionCost;
    //neu gia tri profit lon hon 0 thi thuc hien cac cua lenh sau
    if(profit > 0 )
    {
        cout <<"         Profit : $" << profit
             <<" (Millions)"<<endl;
    }
    else//neu gia tri cua profit nho hon 0 thi thuc hien cac cau lenh sau
    {
        cout <<"           Loss :$" << (-1 * profit)
             <<" (Millions)" << endl;
    }
};