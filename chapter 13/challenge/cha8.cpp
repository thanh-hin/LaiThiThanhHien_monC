
#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

//khai báo số hằng pi
const double PI = 3.14159;

// khai báo class Circle
class Circle
{
public:
    Circle(); // hàm tạo mặc định
    Circle(const Circle &); //sao chép hàm tạo

    // hàm thành viên (phương thức)
    void SetRadius(double); // công cụ sửa đổi đặt bán kính mới
    double Area();

private:
    // biến thành viên (dữ liệu)
    double radius; // bán kính vòng tròn
};

int main()
{
    Circle myCircle; // đối tượng Circle
    double circleArea = 0.0; // diện tích của vòng tròn
    double userInput = 0.0; // đầu vào của người dùng cho bán kính hình tròn
    //nhập bán kính
    cout << "Enter radius of the circle: ";
    cin >> userInput;

    myCircle.SetRadius(userInput);
    circleArea = myCircle.Area();//tính diện tích
    //hiển thị diện tích
    cout << "The area is " << circleArea << endl << endl;

    return 0;
}

// tạo mặc định
Circle::Circle()
{
    radius = 0.0;
}

// sao chép hàm tạo
Circle::Circle(const Circle & Object)
{
    radius = Object.radius;
}

// đăt bán kính của hình tròn
void Circle::SetRadius(double IncomingRadius)
{
    radius = IncomingRadius;
}

// hàm tính diện tích hình tròn
double Circle::Area()
{
    return(PI * pow(radius, 2));
}