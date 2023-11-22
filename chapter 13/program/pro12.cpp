#include <iostream>
#include "ContactInfo.h"
using namespace std;

int main()
{
    // Định nghĩa một đối tượng ContactInfo với các dữ liệu sau đây:
    ContactInfo entry("Kristen Lee", "555-2021");

    // Hiển thị dữ liệu của đối tượng.
    cout << "Name: " << entry.getName() << endl;
    cout << "Phone Number: " << entry.getPhoneNumber() << endl;

    // Ngoài việc hàm hủy tự động được gọi khi một đối tượng bị hủy,
    // các điểm sau đây nên được đề cập:
    //  Giống như hàm tạo, hàm hủy không có kiểu trả về.
    //  Hàm hủy không thể chấp nhận đối số, vì vậy chúng không bao giờ có danh sách tham số.

    // Nếu một đối tượng của lớp được cấp phát động bởi toán tử new,
    // bộ nhớ của nó cần được giải phóng khi đối tượng không còn cần thiết.
    // Ví dụ, trong đoạn mã sau, objectPtr là một con trỏ đến một đối tượng ContactInfo được cấp phát động.

    // Định nghĩa một con trỏ ContactInfo.
    ContactInfo *objectPtr = nullptr;

    // Tạo động một đối tượng ContactInfo.
    objectPtr = new ContactInfo("Kristen Lee", "555-2021");

    // Hiển thị dữ liệu của đối tượng.
    cout << "Name: " << objectPtr->getName() << endl;
    cout << "Phone Number: " << objectPtr->getPhoneNumber() << endl;

    // xóa đối tượng được cấp phát động để tránh rò rỉ bộ nhớ
    delete objectPtr;

    return 0;
}
