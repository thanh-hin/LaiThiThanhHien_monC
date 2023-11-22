#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    string name,//tên
           age,//tuổi
           city,//thành phố ở
           college,//học vấn
           profession,//nghề nghiệp
           animal,//động vật yêu thích
           petName;//tên của thú cưng
    //hỏi người dùng các thông tin
    cout <<"Your name: ";
    getline(cin, name);
    cout <<"Your age: ";
    getline(cin, age);
    cout <<"Which city to you live ";
    getline(cin, city);
    cout <<"Your college: ";
    getline(cin, college);
    cout <<"What do you do for a living? ";
    getline(cin, college);
    cout <<"Your favourite animal: ";
    getline(cin, animal);
    cout <<"Pet\'s name: ";
    getline(cin, petName);
    //hiển thị câu chuyện theo đề bài
    cout << "There once was a person named ";
    cout << name;
    cout << " who lived in ";
    cout << city;
    cout << ". At the age of " << age << ", ";
    cout << name;
    cout << " went to college at " << college << ". ";
    cout << name;
    cout << " graduated and went to work as a ";
    cout << profession;
    cout << ". Then, " << name << " adopted a(n) ";
    cout << animal << " named " << petName;
    cout << ". They both lived happily ever after!\n" << endl;
    return 0;
}