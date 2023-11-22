#include <iostream>
using namespace std;

//khai bao strcut Speaker
struct Speaker{
    string name;
    string telephoneNum;
    string topic;
    double fee;
};
//khai bao cac ham
void showMainMenu(const unsigned);
void showModifyMenu();
void addSpeaker(Speaker[],const unsigned,unsigned&);
void modifySpeaker(Speaker[],const unsigned);
void displaySpeakers(Speaker[],const unsigned);
void setName(Speaker&);
void setTelephone(Speaker&);
void setTopic(Speaker&);
void setFee(Speaker&);
void displaySpeaker(const Speaker&);
string getOrdinal(const unsigned);
bool isEmpty(const string);

int main(){
    const unsigned MAX = 10;
    Speaker speakers[MAX];
    unsigned firstAvailableIndex = 0;
    int choice = 0;
    //khoi tao vong lap do while
    do{
        //goi ham showMainMenu va truyen vao do thanh vien firstAvaiableIndex
        showMainMenu(firstAvailableIndex);
        cout<<"Your Choice : ";
        cin>>choice;
        cin.ignore();
        //su dung cau dieu kein if else if de chia truong hop cho bien choice
        if(choice == 1)
            addSpeaker(speakers,MAX,firstAvailableIndex);
        else if(choice == 2)
            modifySpeaker(speakers,firstAvailableIndex);
        else if(choice == 3)
            displaySpeakers(speakers,firstAvailableIndex);
        else if(choice != 0){
            cout<<"Wrong choice value,\n";
            cout<<"Please enter a valid choice\n";
            cout<<"============================================\n";
        }
    }while(choice != 0);//lap lai khi thao amn dieu kein trong ngoac
    cout<<"Wish you had a good time exploring\n";
    cout<<"the program, wish you the best\n";
    cout<<"============================================\n";
    return 0;
}
//khai bao ham showMainMenu
void showMainMenu(const unsigned numSpeakers){
    cout<<"[1] Add a new speaker.\n";
    cout<<"[2] Modify an existing speaker.\n";
    cout<<"[3] Display all data stored.\n";
    cout<<"[0] Exit.\n";
    cout<<"--------------------------------------------\n";
    cout<<"[ Current number of speakers : "<<numSpeakers<<" ]";
    cout<<endl;
}
//khai bao ham showModiFyMenu
void showModifyMenu(){   
    cout<<"[1] Modify the speaker name.\n";
    cout<<"[2] Modify the speaker telephone number.\n";
    cout<<"[3] Modify the speaker topic.\n";
    cout<<"[4] Modify the speaker fee.\n";
    cout<<"[0] Exit.\n";
    cout<<"--------------------------------------------\n";
}
//khai bao ham addSpeaker 
void addSpeaker(Speaker speakers[],const unsigned SIZE,
                unsigned& index){
    //xac thuc dau vao
    if(index >= SIZE){
        cout<<"Sorry, but we could not add any further\n";
        cout<<"speakers because the array is full.\n";
        cout<<"[ Current number of speakers : "<<index<<" ]\n";
        cout<<"============================================\n";
        return;
    }
    //goi ham va truyen vao do gia tri index+1 hay speakers[idex]
    cout<<"The information about "<<(index+1)
        <<getOrdinal(index+1)<<" speaker,\n";
    setName(speakers[index]);
    setTelephone(speakers[index]);
    setTopic(speakers[index]);
    setFee(speakers[index]);
    index++;
    cout<<"Speaker number ["<<index<<"] was successfully"
        <<" stored\n";
    cout<<"============================================\n";
}
//khai bao ham modifySpeaker
void modifySpeaker(Speaker speakers[],
                   const unsigned NUM_SPEAKERS){
    //xac thuc dau vao
    if(NUM_SPEAKERS == 0){
        cout<<"Sorry, but we could not modify any speaker\n";
        cout<<"because the array is empty.\n";
        cout<<"[ Current number of speakers : "
            <<NUM_SPEAKERS<<" ]\n";
        cout<<"============================================\n";
        return;
    }
    int indexOfSpeaker = -1;
    int choice = 0;
    cout<<"Please enter the speaker number, you want to\n";
    cout<<"modify, for example 1 for the 1st speaker,\n";
    cout<<"... , up to 10 for the 10th speaker if\n";
    cout<<"available.\n";
    cout<<"Note 0 or any negative numbers are\n";
    cout<<"not allowed.\n";
    cout<<"--------------------------------------------\n";
    cout<<"[ Current number of speakers : "<<NUM_SPEAKERS<<" ]";
    cout<<endl;
    cout<<"Your speaker number : ";
    cin>>indexOfSpeaker;
    //xac thuc dau vao
    while(indexOfSpeaker<1 || indexOfSpeaker>NUM_SPEAKERS){
        cout<<"--------------------------------------------\n";
        cout<<"Note we do not accept be 0 or negative\n";
        cout<<"     numbers, and also the speaker number\n";
        cout<<"     can not exceed the number of speakers\n";
        cout<<"     so press 1 for the first speaker for\n";
        cout<<"     example.\n";
        cout<<"--------------------------------------------\n";
        cout<<"[ Current number of speakers : "<<NUM_SPEAKERS
            <<" ]\n";
        cout<<"Your speaker number : ";
        cin>>indexOfSpeaker;
    }
    cout<<"--------------------------------------------\n";
    //khoi tao vong lap do while
    do{
        cout<<"Please choose your option,\n\n";
        showModifyMenu();
        cout<<"Your Choice : ";
        cin>>choice;
        cin.ignore();
        //khoi tao cau dieu kien if xet gia tri cua choice, choice thoa man dieu kien o cau dieu kien nao thi thuc hien cau lenh o dieu kien ay
        if(choice == 1){
            //goi ham getOrdinal truyen vao do indexOfSpeaker + 1
            cout<<"You choosed the name of the"
                <<(indexOfSpeaker+1)<<getOrdinal(indexOfSpeaker+1)
                <<" speaker,\n";
            cout<<"Old Value : "<<speakers[indexOfSpeaker].name
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            //goi ham setNAme truyen vao do speakers[indexOfSpeaker]
            setName(speakers[indexOfSpeaker]);
            cout<<"--------------------------------------------\n";
        }else if(choice == 2){
            cout<<"You choosed the telephone number of the\n";
            cout<<(indexOfSpeaker+1)<<getOrdinal(indexOfSpeaker+1)
                <<" speaker,\n";
            cout<<"Old Value : "
                <<speakers[indexOfSpeaker].telephoneNum<<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            //goi ham setTelephone truyen vao do speakers[indexOfSpeaker]
            setTelephone(speakers[indexOfSpeaker]);
            cout<<"--------------------------------------------\n";
        }else if(choice == 3){
            cout<<"You choosed the topic of the";
            cout<<(indexOfSpeaker+1)<<getOrdinal(indexOfSpeaker+1)
                <<" speaker,\n";
            cout<<"Old Value : "<<speakers[indexOfSpeaker].topic
                <<endl;
            cout<<"--------------------------------------------\n";
            //goi ham setTopic truyen vao do speakers[indexOfSpeaker]
            cout<<"Now please enter the new value,\n";
            setTopic(speakers[indexOfSpeaker]);
            cout<<"--------------------------------------------\n";
        }else if(choice == 4){
            cout<<"You choosed the fee of the";
            cout<<(indexOfSpeaker+1)<<getOrdinal(indexOfSpeaker+1)
                <<" speaker,\n";
            cout<<"Old Value : "<<speakers[indexOfSpeaker].fee
                <<endl;
            cout<<"--------------------------------------------\n";
            cout<<"Now please enter the new value,\n";
            //goi ham setFree truyen vao do speakers[indexOfSpeaker]
            setFee(speakers[indexOfSpeaker]);
            cout<<"--------------------------------------------\n";
        }else if(choice != 0){
            cout<<"Wrong choice value,\n";
            cout<<"Please enter a valid choice\n";
        }
    }while(choice != 0);
    cout<<"You would exit the modification mode.\n";
    cout<<"============================================\n";
}
//khai bao ham displaySpeaker
void displaySpeakers(Speaker speakers[],
                   const unsigned NUM_SPEAKERS){
    if(NUM_SPEAKERS == 0){
        cout<<"Sorry, but the array is empty.\n";
        cout<<"[ Current number of speakers : 0 ]\n";
        cout<<"============================================\n";
        return;
    }
    for(unsigned i=0; i<NUM_SPEAKERS;i++){
        cout<<"The information about the "<<(i+1)
        <<getOrdinal(i+1)<<" speaker,\n";
        displaySpeaker(speakers[i]);
        
        if(i<(NUM_SPEAKERS-1))
            cout<<"--------------------------------------------\n";
    }
    cout<<"============================================\n";
}
//khai bao ham setname
void setName(Speaker& speaker){
    cout<<"     Name : ";
    getline(cin,speaker.name);
    while(isEmpty(speaker.name)){
        cout<<"Sorry but the name could not be empty,\n";
        cout<<"     Name : ";
        getline(cin,speaker.name);
    }
}
//khai bao ham setTelephone
void setTelephone(Speaker& speaker){
    cout<<"Telephone : ";
    getline(cin,speaker.telephoneNum);
    while(isEmpty(speaker.telephoneNum)){
        cout<<"Sorry but the telephone could not be empty,\n";
        cout<<"Telephone : ";
        getline(cin,speaker.telephoneNum);
    }
}
//khai bao ham setTopic
void setTopic(Speaker& speaker){
    cout<<"    Topic : ";
    getline(cin,speaker.topic);
    while(isEmpty(speaker.topic)){
        cout<<"Sorry but the topic could not be empty,\n";
        cout<<"    Topic : ";
        getline(cin,speaker.topic);
    }
}
//khai bao ham setFree
void setFee(Speaker& speaker){
    cout<<"      Fee : ";
    cin>>speaker.fee;
    //xac thcu dau vao
    while(speaker.fee < 0){
        cout<<"Sorry but the fees could not be negative,\n";
        cout<<"      Fee : ";
        cin>>speaker.fee;
    }
    cin.ignore();
}
//khai bao ham disPlaySpeaker
void displaySpeaker(const Speaker& speaker){
    cout<<"     Name : "<<speaker.name<<endl;
    cout<<"Telephone : "<<speaker.telephoneNum<<endl;
    cout<<"    Topic : "<<speaker.topic<<endl;
    cout<<"      Fee : "<<speaker.fee<<endl;
    
}
//khoi tao ham isEmply
bool isEmpty(const string str){
    if(str.empty())
        return true;
    unsigned len = str.length();
    for(unsigned i=0;i<len;i++){
        //neu dieu kien o if thoa amn thi thuc heinc au lenh
        if( !isspace(str[i]) )
            return false;
    }
    return true;
}
//khai bao ham getOrdinal
string getOrdinal(const unsigned num){
    unsigned parser = num  *100;
    //khoi tao cau lenh if else if neu parser thoa man dieu kien nao thi gia tri tra ve thuoc cau lenh ay
    if(parser < 20 && parser > 10){
        return "th";
    }
    parser = num  *10;
    if(parser == 1){
        return "st";
    }else if(parser == 2){
        return "nd";
    }else if(parser == 3){
        return "rd";
    }else {
        return "th";
    }
}