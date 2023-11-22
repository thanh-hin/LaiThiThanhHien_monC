#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string name,//tên học sinh
           first ,//đứa đầu tiên
           last;//đứa cuối cùng
    int student;//số học sinh
    //hỏi số học sinh
    do 
    {
        cout <<"Enter the number of students: ";
        cin >> student;
    }while(student<1||student>25);
    //nhập tên học sinh
    cout <<"Enter the name of student No. 1: ";
    cin>>name;
    first = last = name;
    //tìm chuỗi có giá trị đầu lớn hơn
    for (int i = 1; i < student; i++)
    {
        cout << "Enter the name of student No. " 
             << (i + 1) << ": ";
        cin >> name;

        if (name < first)
            first = name;

        if (name > last)
            last = name;
    }
    //hiển thị kết quả
    cout <<"First student: "<<first<<endl;
    cout<<"last student: "<<last<<endl;
    return 0;
}