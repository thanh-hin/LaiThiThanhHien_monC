#include <iostream>
#include <iomanip>
using namespace std;
int main()//chương trình chính
{
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    // khai báo biến
    double length, //chiều dài
            width, // chiều rộng
            height, // chiều cao
            volume, // khối lượng
            cost, // chi phí sản xuất
            charge,// giá bán 
            profit; // lợi nhuận
    cout << setprecision(2) << fixed << showpoint;//formatting
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;//nhập chiều dài
    cout << "Width: ";
    cin >> width;//nhập chiều rộng
    cout << "Height: ";
    cin >> height;//nhập chiều cao
    volume = length * width * height;//tính khối lượng thùng
    cost = volume * COST_PER_CUBIC_FOOT;//tính chi phí sản xuất thùng
    charge = volume * CHARGE_PER_CUBIC_FOOT;// tính giá bán ra
    profit = charge - cost;//tính lợi nhuận thu được
    // hiển thị dữ liệu 
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}