#include <iostream>

using namespace std;

// khai báo class
class Arrays 
{
private:
    float *arr;  // Con trỏ tới một mảng động gồm các số có dấu phẩy động

public:
    // Trình xây dựng để khởi tạo mảng với kích thước nhất định
    Arrays(int n) {
        arr = new float[n];  // Cấp phát bộ nhớ cho mảng
    }

    // Hàm hủy để giải phóng bộ nhớ được cấp phát động
    ~Arrays() 
    {
        delete[] arr;  //Giải phóng bộ nhớ khi đối tượng
    }

    // Phương pháp lưu trữ một số tại một chỉ mục cụ thể trong mảng
    void storeNumber(float num, int index) {
        arr[index] = num;  //Gán số đã chỉ định cho chỉ mục đã chỉ định
    }

    // Phương thức truy xuất một số tại một chỉ mục cụ thể trong mảng
    float retrieveNumber(int index) {
        return arr[index];  // Trả về số tại chỉ mục đã chỉ định
    }

    // Phương pháp tìm số lớn nhất trong mảng
    float highestNum(int n) {
        float max = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] > max)
                max = arr[i];  // Cập nhật tối đa nếu phần tử hiện tại lớn hơn
        }
        return max;  // Trả về số cao nhất trong mảng
    }

    // Phương pháp tìm số nhỏ nhất trong mảng
    float lowestNum(int n) {
        float min = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] < min)
                min = arr[i];  // Cập nhật min nếu phần tử hiện tại nhỏ hơn
        }
        return min;  // Trả về số thấp nhất trong mảng
    }

    // Phương pháp tính trung bình cộng các số trong mảng
    float averageNum(int n) {
        float sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];  // Tính tổng của tất cả các phần tử
        }
        return (sum / n);  // Trả về giá trị trung bình 
    }
};


int main() 
{
    // Tạo một thể hiện của lớp Arrays với mảng có kích thước 5
    Arrays r(5);

    // Lưu trữ số trong mảng
    r.storeNumber(44, 0);
    r.storeNumber(42, 1);
    r.storeNumber(67, 2);
    r.storeNumber(33, 3);
    r.storeNumber(78, 4);

    // Hiển thị kết quả
    cout << "\nArray number at index 2: " << r.retrieveNumber(2);
    cout << "\nHighest: " << r.highestNum(5);
    cout << "\nLowest: " << r.lowestNum(5);
    cout << "\nAverage: " << r.averageNum(5);

    return 0;
}
