#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{    
    //khai báo biến
    int choice;//lựa chọn người dùng
    double area,//diện tích
           radius, //bán kính
           length, //chiều dài
           width, //chiều rộng
           base, //dáy tam giác
           height;//chiều cao tam giác
    const double PI = 3.14159;//hằng số pi
    const int CIRCLE_CHOICE = 1,
              RECTANGLE_CHOICE = 2,
              TRIANGLE_CHOICE = 3,
              QUIT_CHOICE = 4;
    //dhiển thị menu và nhập lựa chọn
    cout << "\t1. Area of Circle \n"
         << "\t2. Area of Rectangle \n"
         << "\t3. Area of Triangle \n"
         << "\t4. Quit \n";
    cin >> choice;
    cout << fixed << setprecision(2);//formatting
    switch(choice)
    {
        case CIRCLE_CHOICE://trường hợp hình tròn
                cout << "Enter the radius of the circle: ";
                cin >> radius;//nhập bán kính hình tròn
            if(radius < 0)//xác thực đầu vào bán kính
                {
                    cout << "Radius cannot be negative!! \nEnter radius again: \n";
                    cin >> radius;//nhập lại bán kính
                }
            area = PI * radius * radius;//tính diện tích hình tròn
            cout << "The circle's area is = " << area << " square units \n\n";//hiển thị diện tích hình tròn
            break;//ngừng
        case RECTANGLE_CHOICE://trường hợp hình chữ nhật
            cout << "Enter the length of the rectangle: ";
            cin >> length;//nhập chiều dài 
            if(length < 0)//xác thực đầu vào chiều dài
                {
                    cout<< "Length cannot be less than 0!! \n\n"  << "Enter length again: \n";
                    cin >> length;//nhập lại chiều dài
                }
            cout << "Enter the width of the rectangle: ";
            cin >> width;//nhập chiều rộng
            if(width < 0)//xác thực đầu vào chiều rộng
                {
                    cout<< "Width cannot be less than 0!! \n\n"  << "Enter width again: \n";
                    cin >> width;//nhập lại chiều rộng
                }

            area = length * width;//tính diện tích hình chữ nhật
            cout << "The rectangle's area is = " << area << " square units \n\n";//hiển thị diện tích hình chữ nhật
            break;//ngừng 
        case TRIANGLE_CHOICE://trường hợp hình tam giác
            cout << "Enter the base of the triangle: ";
            cin >> base;//nhập đáy tam giác
            if(base < 0)//xác thực đầu vào đáy tam giác
                {
                    cout << "Base cannot be less than 0!! \n\n"  << "Enter base again: \n";
                    cin >> base;//nhập lại đáy 
                }
            cout << "Enter the height of the triangle: ";
            cin >> height;//nhập chiều cao 
            if(height < 0)//xác thực đầu vào chiều cao
                {
                    cout << "Height cannot be less than 0!! \nEnter height again: \n";
                    cin >> height;//nhập lại chiều cao
                }
            area = base * height * 0.5;//tính diện tích tam giác
            cout << "The triangle's area is = " << area << " square units \n\n";//hiển thị diện tích tam giác
            break;//ngừng
        case QUIT_CHOICE://trường hợp thoát chương trình
            cout << "\nThe program is ending...\n\n";
            break;//ngừng
        default://xác thực đâu fvaof lựa chọn
        cout << "The valid choices are 1-4 \nRun the program again \n\n";//báo lỗi lựa chọn
    }
    return 0;
}