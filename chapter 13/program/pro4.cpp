#include <iostream>
#include <memory>
using namespace std;

// Khai báo lớp hình chữ nhật
class Rectangle
{
private:
    double width;   // Chiều rộng của hình chữ nhật
    double length;  // Chiều dài của hình chữ nhật

public:
    // Thiết lập giá trị cho chiều rộng
    void setWidth(double);

    // Thiết lập giá trị cho chiều dài
    void setLength(double);

    // Lấy giá trị chiều rộng
    double getWidth() const;

    // Lấy giá trị chiều dài
    double getLength() const;

    // Tính diện tích của hình chữ nhật
    double getArea() const;
};

// Gán giá trị cho chiều rộng của hình chữ nhật
void Rectangle::setWidth(double w)
{
    width = w;
}

// Gán giá trị cho chiều dài của hình chữ nhật
void Rectangle::setLength(double len)
{
    length = len;
}

// Lấy giá trị của chiều rộng
double Rectangle::getWidth() const
{
    return width;
}

// Lấy giá trị của chiều dài
double Rectangle::getLength() const
{
    return length;
}

// Tính diện tích của hình chữ nhật
double Rectangle::getArea() const
{
    return width * length;
}

int main()
{
    //khai báo biến
    double number;
    double totalArea;

    // Tạo các đối tượng Unique_ptr cho ba hình chữ nhật (nhà bếp, phòng ngủ, phòng làm việc)
    unique_ptr<Rectangle> kitchen(new Rectangle);
    unique_ptr<Rectangle> bedroom(new Rectangle);
    unique_ptr<Rectangle> den(new Rectangle);
        // nhập kích thước phòng bếp
    cout << "What is the kitchen's length? ";
    cin >> number;//nhập chiều dài
    kitchen->setLength(number);//lưu vào hướng đối tượng
    cout << "What is the kitchen's width? ";
    cin >> number;//nhập chiều rộng
    kitchen->setWidth(number);//lưu vào hướng đối tượng
    // nhập kích thước nhà tắm
    cout << "What is the bedroom's length? ";
    cin >> number;//nhập chiều dài
    bedroom->setLength(number);//lưu vào hướng đối tượng
    cout << "What is the bedroom's width? ";
    cin >> number;//nhập chiều rộng
    bedroom->setWidth(number);//lưu vào hướng đối tượng
    // nhập kích thước phòng làm việc
    cout << "What is the den's length? ";
    cin >> number;//nhập chiều dài
    den->setLength(number);//lưu vào hướng đối tượng
    cout << "What is the den's width? ";
    cin >> number;//nhập chiều rộng
    den->setWidth(number);//lưu vào hướng đối tượng

    // tính tổng diện tích 3 phòng
    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

    // Hiển thị tổng diện tích của ba phòng
    cout << "The total area of the three rooms is "
         << totalArea << endl;

    return 0;
}