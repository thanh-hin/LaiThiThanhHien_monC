#include <iostream>

using namespace std;

// Xác định một lớp Employee
class Employee 
{
    // Các thành viên dữ liệu riêng tư chứa dữ liệu
    private:
        string name;
        int idNumber;
        string department;
        string position;
    
    public:
        // Hàm tạo được tham số hóa để gán các thành viên riêng tư
        Employee(string EName, int eID, string eDept, string ePos) 
        {
            this->name = EName;
            this->idNumber = eID;
            this->department = eDept;
            this->position = ePos;
        }
        
        // Hàm tạo được tham số hóa để gán tên thành viên riêng và idNumber
        Employee(string EName, int eID) 
        {
            this->name = EName;
            this->idNumber = eID;
            this->department = "";
            this->position = "";
        }        
        
        // Hàm tạo mặc định gán giá trị trống và 0 cho các thành viên private
        Employee() 
        {
            this->name = "";
            this->idNumber = 0;
            this->department = "";
            this->position = "";
        }
               
        // Chức năng biến đổi
        void setName(string eName) {
            this->name = eName;
        }
    
        void setIdNumber(int eIdNumber) {
            this->idNumber = eIdNumber;
        }
    
        void setDepartment(string eDepartment) {
            this->department = eDepartment;
        }
    
        void setPosition(string ePosition) {
            this->position = ePosition;
        }
               
        //Hàm truy cập
        string getName() {
            return name;
        }
    
        int getIdNumber() {
            return idNumber;
        }
    
        string getDepartment() {
            return department;
        }
    
        string getPosition() {
            return position;
        }
        
        //Hiển thị dữ liệu nhân viên
        void diplayData()
        {
            cout << name << " \t " << idNumber << " \t\t " << department << " \t " << position;
        }
};

int main()
{
    // Lưu trữ dữ liệu trong đối tượng
    Employee E1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee E2("Mark Jones", 39119, "IT", "Programmer");
    Employee E3("Joy Rogers", 81774, "Manufacturing", "Engineer");
    
    //Mảng ba đối tượng
    Employee emp[3] = {E1, E2, E3};

    cout << "Employee \t Name \t\t IDNumber \t Department \t Position" << endl;
    //khởi tạo vòng lặp để hiển thị data từng nhân viên
    for(int i=0; i<3; i++)
    {
        cout << i+1 << " \t\t ";
        emp[i].diplayData();
        cout << endl;
    }
    return 0;
}
