#include <iostream>
#include <vector>
using namespace std;

//khai bao struct Speaker
struct Speaker{
 string name;
 string telephoneNum;
 string topic;
 double fee;
};
//khai bao ham
void showMainMenu(const unsigned);
void showModifyMenu();
void addSpeaker(Speaker[],const unsigned,unsigned&);
void modifySpeaker(Speaker[],const unsigned);
void displaySpeakers(Speaker[],const unsigned);
void searchSpeakers(const Speaker[],const unsigned);
void setName(Speaker&);
void setTelephone(Speaker&);
void setTopic(Speaker&);
void setFee(Speaker&);
void displaySpeaker(const Speaker&);
void findIndices(const Speaker[],const unsigned,
                 const string, vector<unsigned>&);

string getOrdinal(const unsigned);
bool isEmpty(const string);
int main(){
    cout<<"============================================\n";
    cout<<"\t     :: Information ::\n";
    cout<<"This program stores some data from the\n";
    cout<<"user about a set of speakers representing\n";
    cout<<"their data, of maximum 10 speakers\n";
    cout<<"and provide variety of options dealing with\n";
    cout<<"this data.\n";
    cout<<"============================================\n";
    cout<<"Note: We assume the user knows each speaker\n";
    cout<<"      and hence when he wants to modify some\n";
    cout<<"      information about them, he would be\n";
    cout<<"      asked to enter the number of the\n";
    cout<<"      specific speaker, for example 1 to\n";
    cout<<"      modify the first speaker, 10 to\n";
    cout<<"      modify the 10th,\n";
    cout<<"      Also note that 0 is not allowed.\n";
    cout<<"Follow the instructions of the menu.\n";
    cout<<"============================================\n";
    const unsigned MAX = 10;
    Speaker speakers[MAX];
    Speaker;
    // that may be filled next with a new data
    unsigned firstAvailableIndex = 0;
    int choice = 0;
    do{
        showMainMenu(firstAvailableIndex);
        cout<<"Your Choice : ";
        cin>>choice;
        cin.ignore();

  if(choice == 1)
            addSpeaker(speakers,MAX,firstAvailableIndex);
        else if(choice == 2)
            modifySpeaker(speakers,firstAvailableIndex);
        else if(choice == 3)
            displaySpeakers(speakers,firstAvailableIndex);
        else if(choice == 4)
            searchSpeakers(speakers,firstAvailableIndex);
        else if(choice != 0){
            cout<<"Wrong choice value,\n";
            cout<<"Please enter a valid choice\n";
            cout<<"============================================\n";
        }
    }while(choice != 0);
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

struct Speaker{

 string name;
    

 string telephoneNum;
    

string topic;
    

 double fee;
};

void showMainMenu(const unsigned);
void showModifyMenu();
void addSpeaker(Speaker[],const unsigned,unsigned&);
void modifySpeaker(Speaker[],const unsigned);
void displaySpeakers(Speaker[],const unsigned);
void searchSpeakers(const Speaker[],const unsigned);

void setName(Speaker&);
void setTelephone(Speaker&);
void setTopic(Speaker&);
void setFee(Speaker&);
void displaySpeaker(const Speaker&);
void findIndices(const Speaker[],const unsigned,
                 const string, vector<unsigned>&);

string getOrdinal(const unsigned);
bool isEmpty(const string);
int main(){
    cout<<"============================================\n";
    cout<<"\t     :: Information ::\n";
    cout<<"This program stores some data from the\n";
    cout<<"user about a set of speakers representing\n";
    cout<<"their data, of maximum 10 speakers\n";
    cout<<"and provide variety of options dealing with\n";
    cout<<"this data.\n";
    cout<<"============================================\n";
    cout<<"Note: We assume the user knows each speaker\n";
    cout<<"      and hence when he wants to modify some\n";
    cout<<"      information about them, he would be\n";
    cout<<"      asked to enter the number of the\n";
    cout<<"      specific speaker, for example 1 to\n";
    cout<<"      modify the first speaker, 10 to\n";
    cout<<"      modify the 10th,\n";
    cout<<"      Also note that 0 is not allowed.\n";
    cout<<"Follow the instructions of the menu.\n";
    cout<<"============================================\n";
    const unsigned MAX = 10;
    Speaker speakers[MAX];
    unsigned firstAvailableIndex = 0;
    int choice = 0;
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
    cout<<"[4] Search speakers by topic.\n";
    cout<<"[0] Exit.\n";
    cout<<"--------------------------------------------\n";
    cout<<"[ Current number of speakers : "<<numSpeakers<<" ]";
    cout<<endl;
}
//khai bao ham showModifyMenu
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
void modifySpeaker(Speaker speakers[],
                   const unsigned NUM_SPEAKERS){
 //xac thuc dau vao
     int choice = 0;
     int indexOfSpeaker = -1;
 if(NUM_SPEAKERS == 0){

        cout<<"Sorry, but we could not modify any speaker\n";
        cout<<"because the array is empty.\n";
        cout<<"[ Current number of speakers : 0 ]\n";
        cout<<"============================================\n";
    return;


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
 }
    while(indexOfSpeaker < 1 || indexOfSpeaker>NUM_SPEAKERS){
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
 indexOfSpeaker--;
 do{
        cout<<"Please choose your option,\n\n";
       // goi ham showModifyMenu
        showModifyMenu();
        cout<<"Your Choice : ";
        cin>>choice;
 
 cin.ignore();
 //khoi tao cau dieu kien if else if de chia truong hop cho choice, choice thoa man dieu kien nao thi  thuc hien cuau lenh o do
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
            cout<<"Now please enter the new value,\n";
            //goi ham setTopic truyen vao do speakers[indexOfSpeaker]
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

//khai bao ham displaySpeakes
void displaySpeakers(Speaker speakers[],
                   const unsigned NUM_SPEAKERS){
    if(NUM_SPEAKERS == 0){
        cout<<"Sorry, but the array is empty.\n";
        cout<<"[ Current number of speakers : 0 ]\n";
        cout<<"============================================\n";
        return;
    }
//khoi tao vong lap for de tinh toan cac gia tri
for(unsigned i=0; i<NUM_SPEAKERS;i++){
        cout<<"The information about the "<<(i+1)
        <<getOrdinal(i+1)<<" speaker,\n";
        displaySpeaker(speakers[i]);
        if(i<(NUM_SPEAKERS-1))
            cout<<"--------------------------------------------\n";
 }
    cout<<"============================================\n";
}
//khai bao ham void searchSpeakers
void searchSpeakers(const Speaker SPEAKERS[],
                    const unsigned NUM_SPEAKERS){
    if(NUM_SPEAKERS == 0){
        cout<<"Sorry, but the array is empty.\n";
        cout<<"[ Current number of speakers : 0 ]\n";
        cout<<"============================================\n";
        return;

  }
 string topic;
 vector<unsigned> vec;
 cout<<"Enter the topic you want to search for\n";
 cout<<"Topic : ";
 getline(cin,topic);
 while(isEmpty(topic)){
        cout<<"--------------------------------------------\n";
        cout<<"Sorry but the topic could not be empty,\n";
        cout<<"Topic : ";
        getline(cin,topic);
    }
    cout<<"--------------------------------------------\n";
//goi ham findIndies truyen vao do gia tri SPEAKERS,NUM_SPEAKERS,topic,vec
findIndices(SPEAKERS,NUM_SPEAKERS,topic,vec);
//neu dieu kien if thoa amn thi thcu hien cac cau lenh
if(vec.empty()){
        cout<<"Sorry, but we did not find any speaker\n";
        cout<<"who talks about your topic, you may try\n";
        cout<<"another topic.\n";
        cout<<"[     Entered Topic : \""<<topic<<"\" ]\n";
        cout<<"[ Number of Results : 0 ]\n";
        cout<<"============================================\n";
        return;
    }
    unsigned numResults = vec.size();
    cout<<"[     Entered Topic : \""<<topic<<"\" ]\n";
    cout<<"[ Number of Results : "<<numResults<<" ]\n";
    cout<<"============================================\n";
    cout<<"Now I would print the results,\n\n";
    for(unsigned i=0; i<numResults;i++){
        cout<<"Information about the "<<(i+1)
            <<getOrdinal(i+1)<<" speaker found,\n";
        displaySpeaker(SPEAKERS[vec[i]]);
        if(i<(numResults-1))
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
    //xac thuc dau ra
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
//khai bao ham findIndices 
void findIndices(const Speaker SPEAKERS[],
                 const unsigned NUM_SPEAKERS,
                 const string TOPIC, vector<unsigned>& vec){
 //neu thao amn dieu kien thi thuc hien cau lenh ben duoi
 if(!vec.empty()){ 
  vec.clear();
 }
 for(unsigned i=0;i<NUM_SPEAKERS;i++){
 if(SPEAKERS[i].topic.find(TOPIC) != string::npos){
            vec.push_back(i);
        }
    }
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
    unsigned parser = num * 100;
    //khoi tao cau lenh if else if neu parser thoa man dieu kien nao thi gia tri tra ve thuoc cau lenh ay
    if(parser < 20 && parser > 10){
        return "th";
    }
    parser = num * 10;
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