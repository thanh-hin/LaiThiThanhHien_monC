#include <iostream>
#include <cstring>

using namespace std;

// Lớp cơ sở "Bike" đại diện cho một chiếc xe đạp
class Bike 
{
private:
    char* brand; // Thương hiệu của xe đạp

public:
    // Hàm tạo với tham số, khởi tạo thương hiệu xe đạp
    Bike(const char* b) 
    {
        brand = new char[strlen(b) + 1];
        strcpy(brand, b);
    }

    // Hàm hủy, giải phóng bộ nhớ cho thương hiệu xe đạp
    virtual ~Bike() 
    {
        delete[] brand;
    }

    // Phương thức di chuyển, hiển thị thông tin di chuyển của xe đạp
    virtual void move(int t1) 
    {
        cout << brand << ":" << t1 * 12 << " ";
    }
};

// Lớp dẫn xuất "EBike" từ lớp "Bike", đại diện cho một chiếc xe đạp điện
class EBike : public Bike 
{
public:
    // Hàm tạo với tham số, gọi hàm tạo của lớp cơ sở
    EBike(const char* b) : Bike(b) {}

    // Ghi đè phương thức move của lớp cơ sở
    void move(int t2) override 
    {
        Bike::move(t2 * 2); // Gọi phương thức move của lớp cơ sở và nhân thêm 2
    }
};

// Hàm hiển thị thông tin di chuyển của đối tượng Bike và EBike
void display(Bike& a, EBike& b) 
{
    a.move(2); // Gọi phương thức move của lớp cơ sở Bike
    b.move(2); // Gọi phương thức move của lớp dẫn xuất EBike
}

// Hàm main
int main() 
{
    // Tạo đối tượng EBike b1 và b2 với thương hiệu khác nhau
    EBike b1("EBike1"), b2("EBike2");

    // Hiển thị thông tin di chuyển của các đối tượng
    display(b1, b2);

    return 0;
}
