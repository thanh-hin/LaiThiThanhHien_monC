#include <iostream>
#include <string>

using namespace std;
//khai bao struct student
struct Student{
    string name;
    int IDnum;
    int *tests;
    double average;
    char grade;
};
//khai bao ham 
double getAverage(const Student &, int);
char getLetterGrade(double);
int main()
{
    //khai bao bien nguyen
    int numStudents, numTests;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of tests per student: ";
    cin >> numTests ;
    Student *students = new Student[numStudents];
    cout << "Enter data for students\n";
    //khoi tao vong lap for de nhap vao cac gia tri
    for(int i = 0; i < numStudents; i++){
        cout << "\nStudent " << i + 1 << "\n";
        cout << "Name: ";
        cin.ignore();
        //nhap vao thanh vien name cua students[i]
        getline(cin, students[i].name);
        //xac thuc dau vao
        while(students[i].name.size() == 0){
            cout << "Name cannot be left blank.";
            cout << " Please enter name: ";
            getline(cin, students[i].name);
        }
        cout << "ID number: ";
        cin >> students[i].IDnum;
        students[i].tests = new int[numTests];
        //khoi tao vong lap for de nhap vao cac gia tri
        for(int j = 0; j < numTests; j++){
            cout << "Test " << j + 1 << ": ";
            cin >> students[i].tests[j];
            //xac thuc dau ra
            while(students[i].tests[j] < 0){
                cout << "Please enter a nonnegative value: ";
                cin >> students[i].tests[j];
            }
        }
        //goi ham va gan gia tri cho thanh vien
        students[i].average = getAverage(students[i], numTests);
        students[i].grade = getLetterGrade(students[i].average);
    }

    cout << "\nName\t\tID#\t\tAverage\t\tGrade\n";
    cout << "--------------------------------------";
    cout << "------------------\n";
    //xuat ra gia tri cua cac thanh vien 
    for(int i = 0; i < numStudents; i++){
        cout << students[i].name << "\t\t";
        cout << students[i].IDnum << "\t\t";
        cout << students[i].average << "\t\t";
        cout << students[i].grade;
        cout << endl;
    }
    return 0;
}
//khai bao ham getAvergage
double getAverage(const Student &s, int numElements){
    double total = 0, avg;
    //khoi tao vong lap for de tinh toan bien total
    for(int i = 0; i < numElements; i++)
        total += s.tests[i];
    //gan gia tir cho bien avg
    avg = (double)total/numElements;
    return avg;//tra ve gia tri bien avg
}
//khai bao ham getLetterGrade
char getLetterGrade(double avg){
    //khoi tao cau dieu kien if else if de chia truong hop cho bien avg, avg thuoc truong hop nao thi tra ve gai tir theo turong hop do
    if(avg >= 91)
        return 'A';
    else if(avg >= 81)
        return 'B';
    else if(avg >= 71)
        return 'C';
    else if(avg >= 61)
        return 'D';
    else
        return 'F';
}