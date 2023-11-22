//challenges 3
#include <iostream>
using namespace std;

//khai bao cau truc CompDiv
struct CompDiv{
    string divName;  
    double quarterSales[4];
    double annualSales;
    double avgQSales;
};
//khai bao ham showDivisionInfo, strorDIvisonInfo
void showDivisionInfo(const CompDiv);
void storeDivisionInfo(CompDiv&);
int main()
{
    cout <<"\t\t:: Information ::\n;";
    cout <<"This program stores information about\n";
    cout <<"divisions using a structure and gets the\n";
    cout <<"required information about sales from user\n";
    cout <<"and calculate remaining information and print\n";
    cout <<"all information in a formatted manner.\n";
    //tao cac ban ghi
    CompDiv east = {"East"};
    CompDiv west = {"West"};
    CompDiv north = {"North"};
    CompDiv south = {"South"};
    cout <<"Please enter the required information.\n";
    //goi ham storeDivisionInfo truyen vao do cac ban ghi
    storeDivisionInfo(east);
    storeDivisionInfo(west);
    storeDivisionInfo(north);
    storeDivisionInfo(south);
    //goi ham showDivisionInfo truyen vao do cac ban ghi
    showDivisionInfo(east);
    showDivisionInfo(west);
    showDivisionInfo(north);
    showDivisionInfo(south);
    return 0;
}

//khai bao ham storeDivisionInfo gom struct CompDiv d
void storeDivisionInfo(CompDiv& d){
    //xuat ra gai tri cua thanh vien divName cua d
    cout <<"Information about "<< d.divName <<",\n";
    const string QUARTER_ORDER[4]={
        " First","Second"," Third","Fourth"
    };
    //gan gia tri cho cac thanh vien annualSales, avgQSales cua d
    d.annualSales = 0;
    d.avgQSales = 0;
    //khoi tao vong lap for
    for(unsigned int i = 0; i<4; i++){
        cout << QUARTER_ORDER[i] <<" Quarter Sales : ";
        //nhap vao gia tri d.quarterSales[i]
        cin >> d.quarterSales[i];
        //khi thanh vien quarterSales < 0, xuat ra amn hinh yeu cau nhap lai gai tri quarterSales
        while(d.quarterSales[i] < 0){
            cout <<"Sales could not be negative,\n";
            cout << QUARTER_ORDER[i] <<" Quarter Sales : ";
            cin >> d.quarterSales[i];
        }
        d.annualSales += d.quarterSales[i];
    }
    d.avgQSales = d.annualSales/4;
};
//khia bao ham showDivisionInfo gom struct CompDiv d
void showDivisionInfo(const CompDiv d){
    //khia bao mang xau ky tu gom cac phan tu
    const string QUARTER_ORDER[4]={
        " First","Second"," Third","Fourth"
    };
    //xuat ra man hinh thanh vien divName
    cout<<"       Division Name : "<<d.divName<<endl;
    //khoi tao vong lap for, xuat ra gai tri cua thanh vien quarterSales
    for(unsigned int i = 0; i<4; i++){
        cout << QUARTER_ORDER[i] <<" Quarter Sales : ";
        cout << d.quarterSales[i] << endl;
    }
    //xaut ra gai tri cua cac thanh vien annualSAles va avgQSale cua d
    cout <<"  Total Annual Sales : "<< d.annualSales<<endl;
    cout <<"Avg. Quarterly Sales : "<< d.avgQSales<<endl;
};
