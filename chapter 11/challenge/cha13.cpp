#include <iostream>
#include <iomanip>
using namespace std;

//khai bao struct Drink
struct Drink{
 string name;
 double cost;
 int numberAvailable  ;
};
//khai bao ham
void initializeDrinks(Drink*&,unsigned&);
void displayDrinks(const Drink*,const unsigned);
double processRequest(Drink*,const unsigned);  
void release(Drink*&);
int main(){
    cout<<"============================================\n";
    cout<<"\t     :: Information ::\n";
    cout<<"This program simulates soft drink machine.\n";
    cout<<"It displays the list of available drinks\n";
    cout<<"and allow th user to choose any drink,\n";
    cout<<"computes the change to be returned, and\n";
    cout<<"keeps track of the profit which it displays.\n";
    cout<<"before quitting.\n";
    cout<<"============================================\n";
    cout<<"Note: Only accept money which is at most\n";
    cout<<"      $1.00, as stated by the question.\n";
    cout<<"============================================\n";
  Drink* drinks = nullptr;
  unsigned numberOfDrinks ;
  //mount of money
  double earned = 0;
  int choice = 0;
  //goi ham va truyen vao do drinhs va numberOfDrinks
  initializeDrinks(drinks,numberOfDrinks);
  //khoi tao vong lap do while
  do{
        //goi ham va truyen vao do gia tri drinks, numberOfDrinks
        displayDrinks(drinks,numberOfDrinks);
        cout<<"Please enter the number of the drink you\n";
        cout<<"to pick [ or 0 -> to quit ]\n";
        cout<<"Your Drink : ";
        cin>>choice;
    //xac thuc dau vao
    if( choice < 0 || choice > numberOfDrinks ){
            cout<<"--------------------------------------------\n";
            cout<<"Sorry but you pressed wrong number,\n";
            cout<<"You should only press numbers shown above in\n";
            cout<<"the drinks menu under the \"#\" column,\n";
            cout<<"or you may press 0 to quit.\n";
            cout<<"So all other numbers outside the range would\n";
            cout<<"be rejected including negative numbers.\n";
  //neu choice thao amn dieu kien cua else if thi thuc hien cau lenh
    }else if( choice > 0 && choice <= numberOfDrinks){
            ////gan gai tri cho bien earned
            earned += processRequest(drinks, (choice-1));
    }
 }while(choice != 0);//lap lai vong lap khi choice khac 0
    cout<<"The earned money in this session was :$"
        <<setprecision(3)<<earned<<"\n";
    cout<<"Wish you had a good time exploring\n";
    cout<<"the program, wish you the best\n";
    //goi ham va truyen vao do drinks
    release(drinks);
    return 0;
}
//khai bao ham initializeDrinks
void initializeDrinks(Drink* &drinks,unsigned& size){
 size = 5;
 drinks = new Drink[size];
 //khai bao mang
 string names[size] = {"Cola","Root Beer","Lemon-Lime",
        "Grape Soda","Cream Soda"};
 double cost[size] = {0.75,0.75,0.75,0.80,0.80}; 
 int pieces[size] = {20,20,20,20,20};
 //khoi tao vong lap de tinh toan cac gai tri
 for(unsigned i=0;i<size;i++){
        drinks[i].name = names[i];
        drinks[i].cost = cost[i];
        drinks[i].numberAvailable = pieces[i];
    }
}
//khai bao ham displayDrinks
void displayDrinks(const Drink* DRINKS,const unsigned SIZE){
 cout<<setw(5)<<left<<"#"<<setw(15)<<left<<"Drink Name"
        <<"Cost";
 cout<<setw(20)<<right<<"Number in Machine"<<endl;
 cout<<"--------------------------------------------\n";
 for(unsigned i=0;i<SIZE;i++){
        //can le trai
        cout<<setw(5)<<left<<(i+1)<<setw(15)<<left
            <<DRINKS[i].name<<setw(4)<<left<<setprecision(2)
            <<setfill('0')<<DRINKS[i].cost;
        cout<<setfill(' ');
        //can le phai
        cout<<setw(20)<<right<<DRINKS[i].numberAvailable<<endl;
    }
 cout<<"NOTE # column represents the drink number\n";
 cout<<"     which you use to order specific drink\n";
 cout<<"     So you enter \"1\" to get \""
        <<DRINKS[0].name<<"\".\n";
}
//khai bao ham double processRequest
double processRequest(Drink* drinks,const unsigned INDEX){
 if( drinks[INDEX].numberAvailable <= 0){
        cout<<"Sorry, but we could not sell any further\n";
        cout<<"drinks of the type you want because it\n";
        cout<<"were all sold out.\n";
        cout<<"[ Remaining pieces : \"0\" ]\n";
 return 0;
 }
 double money;
 cout<<"Please enter the amount of money,\n";
 cout<<"[ at most $1.00, 0 to cancel ]\n";
 cout<<"Your money : ";
 cin>>money;
 //xac thuc dau vao
 while(money !=0 && (money>1 || money<drinks[INDEX].cost) ){
        cout<<"--------------------------------------------\n";
        cout<<"This is not a valid amount of money,\n";
        cout<<"We do not accept money more than $1.00\n";
        cout<<"and of course not less than the cost of\n";
        cout<<"your product which is $"
            <<drinks[INDEX].cost<<", but there\n";
        cout<<"is only one exception if you pressed\n";
        cout<<"0 that would cancel your request\n";
        cout<<"--------------------------------------------\n";
        cout<<"[ at most $1.00, 0 to cancel ]\n";
        cout<<"Your money : ";
        ///nhap vao money
        cin>>money;
  }
  //khoi tao cua dieu kien if
  if(money == 0){
        return 0;
  }
  //formating
  cout<<"Your change is :$"<<setprecision(3)
      <<(money-drinks[INDEX].cost)<<"\n";
  cout<<"Wish you a nice day.\n";
  drinks[INDEX].numberAvailable--;
  return drinks[INDEX].cost;
}
//khai bao ham release
void release(Drink* &drinks){
  delete[] drinks;
  //gan gai tri cho drinks
  drinks = nullptr;
}