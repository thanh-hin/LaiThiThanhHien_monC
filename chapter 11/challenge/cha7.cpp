#include <iostream>
using namespace std;

//khai bao struct Account
struct Account{
    string userName;
    string address;
    string city;
    string state;
    string zip;
    string telephoneNum;
    double balance;
    string dateOfLastPayment;
};
//khai bao ham
void showMainMenu(const unsigned);
void showModifyMenu();
void addAccount(Account[],const unsigned,unsigned&);
void modifyAccount(Account[],const unsigned);
void displayAccounts(Account[],const unsigned);
void setName(Account&);
void setAddress(Account&);
void setCity(Account&);
void setState(Account&);
void setZIP(Account&);
void setTelephone(Account&);
void setBalance(Account&);
void setDateOfLastPayment(Account&);
string getOrdinal(const unsigned);
bool isEmpty(const string);

int main(){
 
    const unsigned MAX = 10;
    Account customers[MAX];
    unsigned firstAvailableIndex=0;
    int choice = 0;
    //khoi tao vong lpa do while
    do{
        showMainMenu(firstAvailableIndex);
        cout<<"Your Choice : ";
        //nhap vao gia tri choice
        cin>>choice;
        //bo lenh \n bi du
        cin.ignore();
        //chia truong hop cho bien choice
        if(choice == 1)
            addAccount(customers,MAX,firstAvailableIndex);
        else if(choice == 2)
            modifyAccount(customers,firstAvailableIndex);
        else if(choice == 3)
            displayAccounts(customers,firstAvailableIndex);
        else if(choice != 0){
            cout<<"Wrong choice value,\n";
            cout<<"Please enter a valid choice\n";
        }
    }while(choice != 0);//vong lap duoc lap lai khi choice thoa man dieu kein trong ngoac
    cout<<"Wish you had a good time exploring\n";
    cout<<"the program, wish you the best\n";
    return 0;
}
//khai bao ham showMainmenu
void showMainMenu(const unsigned numCustomers){
    //xuat ra gai tri numCustomers
    cout<<"[1] Add new account.\n";
    cout<<"[2] Modify existing account.\n";
    cout<<"[3] Display all data stored.\n";
    cout<<"[0] Exit.\n";
    cout<<"[ Current number of accounts : "<<numCustomers<<" ]";
    cout<<endl;
}
//khai bao ham showModifyMenu
void showModifyMenu(){
    cout<<"[1] Modify the account user name.\n";
    cout<<"[2] Modify the account address.\n";
    cout<<"[3] Modify the account city.\n";
    cout<<"[4] Modify the account state.\n";
    cout<<"[5] Modify the account ZIP code.\n";
    cout<<"[6] Modify the account telephone number.\n";
    cout<<"[7] Modify the account balance.\n";
    cout<<"[8] Modify the date of last payment.\n";
    cout<<"[0] Exit.\n";
}
//khai bao ham addAccount
void addAccount(Account customers[],const unsigned SIZE,unsigned& index)
{
    //neu dieu kien if thoa man thi xuat ra amn hinh
    if(index >= SIZE){
        cout<<"Sorry, but we could not add any further\n";
        cout<<"accounts because the array is full.\n";
        cout<<"[ Current number of accounts : "<<index<<" ]\n";
        return;
    }
    cout<<"The information about "<<(index+1)
        <<getOrdinal(index+1)<<" account,\n";
    //goi ham va truyen vao do cac gia tri
    setName(customers[index]);
    setAddress(customers[index]);
    setCity(customers[index]);
    setState(customers[index]);
    setZIP(customers[index]);
    setTelephone(customers[index]);
    setBalance(customers[index]);
    setDateOfLastPayment(customers[index]);
    //tang bien index mot don vi
    index++;
    //xuat ra man hinh bien index
    cout<<"Account number ["<<index<<"] was successfully"
        <<" stored\n";
}
//khai bao ham modifyAccount
void modifyAccount(Account customers[], const unsigned NUM_ACCOUNTS){
    //neu dieu kien NUM_ACCOUNT thoa man thi xuat ra man hinh
    if(NUM_ACCOUNTS == 0){
        cout<<"Sorry, but we could not modify any account\n";
        cout<<"because the array is empty.\n";
        cout<<"[ Current number of accounts : "
            <<NUM_ACCOUNTS<<" ]\n";
        return;
    }
    //khai bao bien nguyen
    int account = -1;
    int choice = 0;
    cout<<"Please enter the account number, you want to\n";
    cout<<"modify, for example 1 for the 1st account,\n";
    cout<<"... , up to 10 for the 10th account if\n";
    cout<<"available.\n";
    cout<<"Note 0 or any negative numbers are\n";
    cout<<"not allowed.\n";
    cout<<"[ Current number of accounts : "<<NUM_ACCOUNTS<<" ]";
    cout<<endl;
    cout<<"Your Account : ";
    //nhap vao gia tri account
    cin>>account;
    //khi dieu kein while thoa man thuc hien ac cau lenh
    while(account<1 || account>NUM_ACCOUNTS)
    {
        cout<<"Note we do not accept be 0 or negative\n";
        cout<<"     numbers, and also the account number\n";
        cout<<"     can not exceed the number of accounts\n";
        cout<<"     so press 1 for the first account for\n";
        cout<<"     example.\n";
        cout<<"[ Current number of accounts : "<<NUM_ACCOUNTS
            <<" ]\n";
        cout<<"Your Choice : ";
        //nhap vao account
        cin>>account;
    }
    cout<<"Please choose your option,\n\n";
    //giam bien account 1 don vi
    account--;
    //khoi tao vong lap do while
    do{
        //tao ban ghi
        showModifyMenu();
        cout<<"Your Choice : ";
        cin>>choice;
        cin.ignore();
        //khoi tao cau dieu kien if else if, neu choice thoa man dieu kien o cau lenh nao thi thuc hein cac lenh ben duoi cau lenh ay
        if(choice == 1){
            cout<<"You choosed the user name of the\n";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].userName
                <<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setName truyen vao do customer[account]
            setName(customers[account]);
        }else if(choice == 2){
            cout<<"You choosed the address of the";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].address
                <<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setAddress truyen vao do customer[account]
            setAddress(customers[account]);
        }else if(choice == 3){
            cout<<"You choosed the city of the";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].city
                <<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setCity truyen vao do customer[account]
            setCity(customers[account]);
        }else if(choice == 4){
            cout<<"You choosed the state of the";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].state
                <<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setState truyen vao do customer[account]
            setState(customers[account]);
        }else if(choice == 5){
            cout<<"You choosed the ZIP code of the";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account\n";
            cout<<"Old Value : "<<customers[account].zip
                <<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setZip truyen vao do customer[account]
            setZIP(customers[account]);
        }else if(choice == 6){
            cout<<"You choosed the telephone number of the\n";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].telephoneNum
                <<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setTelephone truyen vao do customer[account]
            setTelephone(customers[account]);
        }else if(choice == 7){
            cout<<"You choosed the balance of the";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "<<customers[account].balance
                <<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setBalance truyen vao do customer[account]
            setBalance(customers[account]);
        }else if(choice == 8){
            cout<<"You choosed the date of last payment of the\n";
            //xuat ra gia tri ham getOrdinal khi truyen vao do gia tri account + 1
            cout<<(account+1)<<getOrdinal(account+1)
                <<" account,\n";
            cout<<"Old Value : "
                <<customers[account].dateOfLastPayment<<endl;
            cout<<"Now please enter the new value,\n";
            //goi ham setDateOfLastPaymnet truyen vao do customer[account]
            setDateOfLastPayment(customers[account]);
        }else if(choice != 0){
            cout<<"Wrong choice value,\n";
            cout<<"Please enter a valid choice\n";
        }
    }while(choice != 0);//lap lai khi choice khac 0
    cout<<"You would exit the modification mode.\n";
}
//khai bao ham displayAccount
void displayAccounts(Account customers[],
                   const unsigned NUM_ACCOUNTS){
    //neu thoa man dieu kien thi thuc hien cac lenh ben duoi
    if(NUM_ACCOUNTS == 0){
        cout<<"Sorry, but the array is empty.\n";
        cout<<"[ Current number of accounts : "
            <<NUM_ACCOUNTS<<" ]\n";
        return;
    }
    //khoi tao vong lap for, xuat ra cac thanh vien cua customer[i]
    for(unsigned i=0; i<NUM_ACCOUNTS;i++){
        cout<<"The information about "<<(i+1)
        <<getOrdinal(i+1)<<" account,\n";
        cout<<"User Name : "<<customers[i].userName<<endl;
        cout<<"  Address : "<<customers[i].address<<endl;
        cout<<"     City : "<<customers[i].city<<endl;
        cout<<"    State : "<<customers[i].state<<endl;
        cout<<" ZIP Code : "<<customers[i].zip<<endl;
        cout<<"Telephone : "<<customers[i].telephoneNum<<endl;
        cout<<"  Balance : "<<customers[i].balance<<endl;
        cout<<"Date of last Payment : "
            <<customers[i].dateOfLastPayment<<endl;
    }
}
//khai bao ham steName
void setName(Account& account){
    cout<<"User Name : ";
    //nhap vao tahnh vien userName cua account
    getline(cin,account.userName);
    //xac thuc dau vao
    while(isEmpty(account.userName)){
        cout<<"Sorry but the name could not be empty,\n";
        cout<<"User Name : ";
        getline(cin,account.userName);
    }
}
//khai bao ham setAddress
void setAddress(Account& account){
    cout<<"  Address : ";
    //nhap vao thanh vien address cua account
    getline(cin,account.address);
    //xac thuc dau vao
    while(isEmpty(account.address)){
        cout<<"Sorry but the address could not be empty,\n";
        cout<<"  Address : ";
        getline(cin,account.address);
    }
}
//khai bao ham setCity
void setCity(Account& account){
    cout<<"     City : ";
    getline(cin,account.city);
    //xac thcu dau vao
    while(isEmpty(account.city)){
        cout<<"Sorry but the city could not be empty,\n";
        cout<<"     City : ";
        getline(cin,account.city);
    }
}
//khai bao ham setAddress
void setState(Account& account){
    cout<<"    State : ";
    getline(cin,account.state);
    while(isEmpty(account.state)){
        cout<<"Sorry but the state could not be empty,\n";
        cout<<"    State : ";
        getline(cin,account.state);
    }
}
//khai bao ham setZip
void setZIP(Account& account){
    cout<<" ZIP Code : ";
    getline(cin,account.zip);
    //xac thuc dau vao
    while(isEmpty(account.zip)){
        cout<<"Sorry but the ZIP code could not be empty,\n";
        cout<<" ZIP Code : ";
        getline(cin,account.zip);
    }
}
//khai bao ham setTelephone
void setTelephone(Account& account){
    cout<<"Telephone : ";
    getline(cin,account.telephoneNum);
    //xac thuc dua vao
    while(isEmpty(account.telephoneNum)){
        cout<<"Sorry but the telephone could not be empty,\n";
        cout<<"Telephone : ";
        getline(cin,account.telephoneNum);
    }
}
//khai bao ham setBalance
void setBalance(Account& account){
    cout<<"  Balance : ";
    cin>>account.balance;
    //xac thuc dau vao
    while(account.balance < 0){
        cout<<"Sorry but the balance could not be negative,\n";
        cout<<"  Balance : ";
        cin>>account.balance;
    }
    cin.ignore();
}
//khai bao ham setDateOfLastPayment
void setDateOfLastPayment(Account& account){
    cout<<"Date of last Payment : ";
    getline(cin,account.dateOfLastPayment);
    //xac thuc dau vao
    while(isEmpty(account.dateOfLastPayment)){
        cout<<"Sorry but the date could not be empty,\n";
        cout<<"Date of last Payment : ";
        getline(cin,account.dateOfLastPayment);
    }
}
//khai bao hanm isEmply
bool isEmpty(const string str){
    if(str.empty())
        return true;
    unsigned len = str.length();
    for(unsigned i=0;i<len;i++)
    {
      if( !isspace(str[i]) )
            return false;
    }
    return true;
}
//khai bao ham getOrdinal
string getOrdinal(const unsigned num){
    unsigned parser = num * 100;
    if(parser < 20 && parser > 10)
    {
        return "th";
    }
    parser = num * 10;
    if(parser == 1)
    {
        return "st";
    }
    else if(parser == 2)
    {
        return "nd";
    }
    else if(parser == 3)
    {
        return "rd";
    }
    else 
    {
        return "th";
    }
}
