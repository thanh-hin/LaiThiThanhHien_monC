#include <iostream>
#include <iomanip>
using namespace std;

//khai bao struct HourLyPaid
struct HourlyPaid{
 int hoursWorked;
 double hourlyRate;
};
//khai bao struct SaLaried
struct Salaried{
 double salary;
 double bonus;
};
//khai bao union Worker
union Worker{
 HourlyPaid hourlyPaidWorker;
 Salaried salariedWorker;
};
//khai bao ham
void storeHourlyPaidWorker(Worker&);
void storeSalariedWorker(Worker&);
double getHourlyPaidWage(const Worker&);
double getSalariedWage(const Worker&);

int main(){
 //tao ban ghi
 Worker data;
 int choice = 0;
 //khoi tao vong lap do while
 do{
        cout<<"Please enter the type of the worker.\n";
        cout<<"[1] To deal with Hourly Paid worker.\n";
        cout<<"[2] To deal with Salaried worker.\n";
        cout<<"[0] To quit the program.\n";
        cout<<"Your Type : ";
        cin>>choice;
        //xac thuc dau vao
        if( choice < 0 ){
            cout<<"--------------------------------------------\n";
            cout<<"Sorry but you pressed wrong choice,\n";
            cout<<"you could only enter 1,2 for Hourly Paid\n";
            cout<<"and Salaried workers, respectively.\n";
            cout<<"or you may enter 0 to quit the program\n";
            cout<<"So all other values are not allowed\n";
            cout<<"including negative values.\n";
        }else if( choice == 1){//neu choice giong 1 thi thuc hien lenh
            //goi ham storeHourlyPaidWorker truyen vao do data
            storeHourlyPaidWorker(data);
            //formating
            cout<<"The estimated wage is : $"<<fixed
                <<setprecision(2)<<getHourlyPaidWage(data)
                <<std::endl;
        }else if( choice == 2){//neu choice giong 2 thi thuc hien lenh
            //goi ham storeHourlyPaidWorker truyen vao do data
            storeSalariedWorker(data);
            //formating
            cout<<"The estimated wage is :$"<<fixed
                <<setprecision(2)<<getSalariedWage(data)
                <<std::endl;
        }
  }while(choice != 0);//lap lai vong lap khi choice khac 0
  cout<<"Wish you had a good time exploring\n";
  cout<<"the program, wish you the best\n";
  return 0;
}
//khai bao ham storeHourlyPaidWorker
void storeHourlyPaidWorker(Worker& w){
  cout<<"Please enter the worked hours.\n";
  cout<<"With maximum of 80 hours,\n";
  cout<<"Worked Hours : ";
  cin>>w.hourlyPaidWorker.hoursWorked;
  //xac thuc dau vao
  while(w.hourlyPaidWorker.hoursWorked < 0 ||   w.hourlyPaidWorker.hoursWorked > 80 ){
        cout<<"--------------------------------------------\n";
        cout<<"The hours worked could not be more than 80,\n";
        cout<<"as specified by the question, and of course\n";
        cout<<"could not be negative.\n";
        cout<<"so please enter the worked hours again.\n";
        cout<<"--------------------------------------------\n";
        cout<<"Worked Hours : ";
        //nhap vao gia tri cua w.hourlyPaidWorker.hoursWorked
        cin>>w.hourlyPaidWorker.hoursWorked;
  }
  //nhap vao gai tri cua w.hourlyPaidWorker.hoursWorked
  cout<<"Please enter the hourly rate of the worker.\n";
  cout<<" Hourly Rate : ";
  cin>>w.hourlyPaidWorker.hourlyRate;
  //xac thcu dau vao
  while(w.hourlyPaidWorker.hourlyRate < 0){
        cout<<"The hourly rate could not be negative ,\n";
        cout<<"so please enter the hourly rate again.\n";
        cout<<"--------------------------------------------\n";
        cout<<" Hourly Rate : ";
        cin>>w.hourlyPaidWorker.hourlyRate;
    }
}
//khai bao ham storeSalriedWorker
void storeSalariedWorker(Worker& w){
  cout<<"Please enter the salary of the worker,\n";
  cout<<"      Salary : ";
  cin>>w.salariedWorker.salary;
  //xac thcu dau vao
  while( w.salariedWorker.salary < 0 ){
        cout<<"The salary could not be negative,\n";
        cout<<"so please enter the salary again.\n";
        cout<<"--------------------------------------------\n";
        cout<<"      Salary : ";
        cin>>w.salariedWorker.salary;
    }
  cout<<"Please enter the bonus of the worker.\n";
  cout<<"       Bonus : ";
  cin>>w.salariedWorker.bonus;
  //xac thcu dau vao
  while(w.salariedWorker.bonus < 0){
        cout<<"The bonus could not be negative ,\n";
        cout<<"so please enter the it again.\n";
        cout<<"--------------------------------------------\n";
        cout<<"       Bonus : ";
        cin>>w.salariedWorker.bonus;
    }
}
//khai bao ham getHourlyPaidWage
double getHourlyPaidWage(const Worker& W){
  //tra ve gia tri bieu thuc
  return (1.0 * W.hourlyPaidWorker.hourlyRate * 
            W.hourlyPaidWorker.hoursWorked );

}
//khai bao ham getSalariedWage
double getSalariedWage(const Worker& W){
  //tra ve gia tri cua bieu thuc
 return ( W.salariedWorker.salary + W.salariedWorker.bonus );
}