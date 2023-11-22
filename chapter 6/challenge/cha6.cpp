#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double inputValidate(double);
double kineticEnergy(double, double);
void displayInefo(double, double, double);

int main()//hàm chính
{
    //khai báo biến
	double KINETIC_ENERGY,//động năng
            mass,//khối lượng
            velocity;//vận tốc
    //nhập khối lượng của vật
    cout << "Enter the object's mass: ";
    mass = inputValidate(mass);//gán biến mass = hàm inputValidate
    //nhập vận tốc của vật
    cout << "Enter the object's velocity: ";
    velocity = inputValidate(velocity);//gán biến velocity = hàm inputValidate
	KINETIC_ENERGY = kineticEnergy(mass, velocity);//tính động năng = hàm kineticEnergy
    //gọi hàm displayInfo để hiển thị thông tin
	displayInfo(mass, velocity, KINETIC_ENERGY);
  	return 0;
}

//hàm xác thực đầu vào 
double inputValidate(double num)//định nghĩa hàm 
{
    while(!(cin >> num))
    {
        //báo lỗi
        //yêu cầu phải nhập số. nhập lại
        cout << "Error. A number must be entered. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;//trả về giá trị num
}

//hàm tính động năng
double kineticEnergy(double mass, double velocity)//định nghĩa hàm
{
    return (0.5) * mass * pow(velocity, 2);//trả kết quả động năng
}

//hàm hiển thị thông tin
void displayInfo(double mass, double velocity, double KINETIC_ENERGY)
{
	cout << setprecision(2) << fixed;//formatting
    cout << endl;
    //hiển thị các thông tin
    cout << "Mass           = " << mass << endl;
    cout << "Velocity       = " << velocity << endl;
    cout << "Kinetic Energy = " << KINETIC_ENERGY << endl;
    cout << endl;
}