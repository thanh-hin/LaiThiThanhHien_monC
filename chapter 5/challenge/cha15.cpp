#include <iostream>
#include <string>

using namespace std;

int main()
{
    //khai báo biến
    string student, //tên học sinh
           first, //vị trí đầu
           last;//vị trí cuối
    int num_of_students;
    //nhập số lượng học sinh
    cout << "Enter the number of students: ";
    //xác thực đầu vào số lượng học sinh
    while (!(cin >> num_of_students) || (num_of_students < 1 || num_of_students > 25))
        {
            cout << "ERROR: Enter a number between " 
                 << "1 and 25: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
    //nhập tên học sinh thứ nhất
    cout << "Enter the name of student No. 1: ";
    cin >> student;

    first = last = student;//gán cho học sinh vừa nhập là cá first và last

    if (student < first)
        first = student;

    if (student > last)
        last = student;
    //tìm học sinh vị trí cuối cùng và vị trí đầu tiên
    for (int i = 1; i < num_of_students; i++)
    {
        //nhập tên các học sinh
        cout << "Enter the name of student No. " 
             << (i + 1) << ": ";
        cin >> student;

        if (student < first)
            first = student;

        if (student > last)
            last = student;
    }
    //hiển thị học sinh vị trí đầu tiên
    cout << "First student in line = " 
         << first << endl;
    //hiển thị học sinh vị trí cuối cùng
    cout << "Last student in line  = " 
         << last << endl;
    return 0;
}