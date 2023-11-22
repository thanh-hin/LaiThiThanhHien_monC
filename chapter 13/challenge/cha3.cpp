#include <iostream>
#include <string>
using namespace std;

// Định nghĩa hạng Car
class Car
{
private:
    string make; // Hãng xe (thương hiệu)
    int year;    // Năm sản xuất ô tô
    int speed;   // Tốc độ hiện tại của ô tô

public:
    // Hàm khởi tạo để khởi tạo đối tượng Car
    Car(int y, string model)
    {
        year = y;
        make = model;
        speed = 0; // Tốc độ ban đầu được đặt thành 0
    }

    // Phương pháp Getter để lấy năm sản xuất của ô tô
    int getYear()
    {
        return year;
    }

    // Phương pháp Getter để lấy nhãn hiệu (nhãn hiệu) của ô tô
    string getMake()
    {
        return make;
    }

    // Phương pháp Getter để lấy tốc độ hiện tại của ô tô
    int getSpeed()
    {
        return speed;
    }

    // Phương pháp tăng tốc xe (tăng tốc độ thêm 5)
    int accelerate()
    {
        return speed += 5;
    }

    // Phương pháp tăng tốc xe (tăng tốc độ thêm 5)
    int carBreak()
    {
        return speed -= 5;
    }
};


int main()
{
    //khai báo biến
    int year;
    string make;//khai báo chuỗi

    // Nhắc người dùng về thông tin xe
    //nhập các thông tin về xe
    cout << "What year is your car? ";
    cin >> year;
    cout << "What is your car model? ";
    cin >> make;

    // Tạo đối tượng Car
    Car suv(2005, "Explorer"), sedan(year, make);

    // Đối tượng sedan
    cout << endl << "Sedan information" << endl;
    //khởi tạo vòng lặp
    for (int x = 1; x <= 5; x++)
    {
        cout << "Accelerating... Speed: " << sedan.accelerate() << endl;
    }
    cout << "Your speed is " << sedan.getSpeed() << " for the car model of " << sedan.getMake() << endl;
    for (int x = 1; x <= 5; x++)//khởi tạo vòng lặp
    {
        cout << "Decelerating... Speed: " << sedan.carBreak() << endl;
    }
    cout << "You stopped the car with a speed of " << sedan.getSpeed() << endl;

    // đối tượng SUV
    cout << endl << "SUV information" << endl;
    cout << "Make: " << suv.getMake() << endl;
    cout << "Year: " << suv.getYear() << endl;
    for (int x = 1; x <= 20; x++)
    {
        cout << "Accelerating... Speed: " << suv.accelerate() << endl;
    }
    cout << "Your speed for the SUV is " << suv.getSpeed() << endl;

    return 0;
}
