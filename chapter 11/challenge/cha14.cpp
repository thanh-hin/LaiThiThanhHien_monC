#include <iostream>
#include <iomanip>
using namespace std;

//khai bao struct Bin
struct Bin{
  string description;
  int number;
};
//khai bao ham
void initializeBins(Bin*&,unsigned&);
void displayBins(const Bin*,const unsigned);
bool addParts(Bin&,const int);
bool removeParts(Bin&,const int);
void processRequest(Bin&);
void release(Bin*&);

int main(){
  Bin* bins = nullptr;
  //khai bao bien numberOfBins
  unsigned numberOfBins ;
  int choice = 0;
  //goi ham initializeBins truyen vao do bins va numberOfBins
  initializeBins(bins,numberOfBins); 
  //khoi tao cua diue kien do while
  do{
        displayBins(bins,numberOfBins);
        cout<<"Please enter the number of the bin you\n";
        cout<<"want to modify [ or 0 -> to quit ]\n";
        cout<<"Your Bin Number : ";
        //nhap vao bien choice
        cin>>choice;
        //xac thuc dau vao
        if( choice < 0 || choice > numberOfBins ){
            cout<<"Sorry but you pressed wrong number,\n";
            cout<<"You should only press numbers shown above in\n";
            cout<<"the bins menu under the \"#\" column,\n";
            cout<<"or you may press \"0\" to quit.\n";
            cout<<"So all other numbers outside the range would\n";
            cout<<"be rejected including negative numbers.\n";
        }else if( choice > 0 && choice <= numberOfBins){//neu nhap vao thanh cong thi goi ham proccessRequest truyen vao do bins[(choice-1)]
            processRequest(bins[(choice-1)]);
        }
  }while(choice != 0);//lap lai khi chocie khac 0
  release(bins);//goi ham reales truyen vao do gia tri bins
  return 0;
}
//khai bao ham initializeBins
void initializeBins(Bin* &bins,unsigned& size){ 
  size = 10;
  //gan gia tri cho bins
  bins = new Bin[size];
  //khai bao mang xau ky tu
  string descriptions[size] = {"Valve","Bearing","Bushing",
        "Coupling","Flange","Gear","Gear Housing",
        "Vacuum Gripper","Cable","Rod"};
  //khai bao mang nguyen
  int numbers[size] = {10,5,15,21,7,5,5,25,18,12};  
  //khoi tao vong lap for de tinh toan gia tri
  for(unsigned i=0;i<size;i++){
        bins[i].description = descriptions[i];
        bins[i].number = numbers[i];
  }
}
//khoi tao ham displayBins
void displayBins(const Bin* BINS,const unsigned SIZE){
  //can le trai
  cout<<setw(6)<<left<<"#"<<setw(16)<<left
        <<"Part Description";
  //can le pahi
  cout<<setw(22)<<right<<"Number of Parts"<<endl;
  //khoi tao vong lap for de xuat gia tri BINS[i] ra man hinh
  for(unsigned i=0;i<SIZE;i++){
        cout<<setw(6)<<left<<(i+1)<<setw(16)<<left
            <<BINS[i].description;
        cout<<setw(22)<<right<<BINS[i].number<<endl;
  }
  cout<<"NOTE # column represents the bin number\n";
  cout<<"     which you use to manipulate specific\n";
  cout<<"     bin, so you enter \"1\" to modify \n"
      <<"     \""<<BINS[0].description<<"\".\n";
}
//khai bao ham processrequest
void processRequest(Bin& bin){
 //khai bao bien nguyen
 int addRemove;
 //khai bao mang xau ky tu
 const string OPERATION[2]={"add","remove"};
 int count;
 cout<<"Please tell me what you want to do with\n";
 cout<<"in the selected bin, [1 -> to add parts]\n";
 cout<<"[2 -> to remove parts]\n";
 cout<<"Your operation : ";
 //nhap vao gia tri addRemove
 cin>>addRemove;
 //xac thuc dau vao
 while(addRemove!=1 && addRemove!=2){
        cout<<"Error, you have only two choices\n";
        cout<<"[1 -> to add parts]\n";
        cout<<"[2 -> to remove parts]\n";
        cout<<"Your operation : ";
        cin>>addRemove;
 }
 cout<<"Now, enter the number of parts\n";
 cout<<"you want to "<<OPERATION[addRemove-1]<<",\n";
 cout<<"[0 -> to cancel]\n";
 cout<<"The Number : ";
 //nhap vao count
 cin>>count;
//xac thuc dau vao
 while(count<0 || count>30){
        cout<<"Sorry the number of parts could not be\n";
        cout<<"negative and also could not be more\n";
        cout<<"than 30, as the maximum number of parts\n";
        cout<<"is 30, so please enter a valid number\n";
        cout<<"[0 -> to cancel]\n";
        cout<<"The Number : ";
        cin>>count;
 }
 //neu thoa man dieu kein o if thi thuc hien cau lenh
 if(count == 0){
         return;
 } else if(addRemove == 1){//neu thoa man dieu kien cua else if thi thuc hien cua lenh
         if( !addParts(bin,count) ){
            cout<<"Sorry the operation failed, be cause the\n";
            cout<<"maximum capacity of a bin is \"30\"\n";
            cout<<"and your number would exceed that\n";
            cout<<"capacity so the operation was terminated\n";
            cout<<"you may try a smaller value, or remove\n";
            cout<<"some items first.\n";
        }
 } else if(addRemove == 2){//neu thoa man dieu kien cua else if thi thuc hien cua lenh
         if( !removeParts(bin,count) ){
           cout<<"Sorry the operation failed, be cause the\n";
            cout<<"bin does not have enough number of parts\n";
            cout<<"to be removed, as your number exceeds\n";
            cout<<"what is available and would yield\n";
            cout<<"a negative result, so the operation was\n";
            cout<<"terminated, you may try a smaller value\n";
            cout<<"or add some parts first.\n";
        }
    }
}
//khai bao ham addParts
bool addParts(Bin& bin,const int COUNT){
  //su dung cau dieu kien if else de chia truong hop cho bin.number
  if( (bin.number + COUNT) > 30 ){
     return false;
  } else {
     //cong cong count vao bin.number
     bin.number += COUNT;
     return true;
  }
}
//khai bao ham removeParts
bool removeParts(Bin& bin,const int COUNT){
    //su dung cau dieu kien if else de chia truong hop cho bin.number

  if( (bin.number - COUNT) < 0 ){
     return false;
  } else {
     bin.number -= COUNT;
     return true;
  }
}
//khai bao ham realease
void release(Bin* &bins){
  delete[] bins;
  bins = nullptr;

}