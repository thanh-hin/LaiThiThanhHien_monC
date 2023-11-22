#include <iostream>
#include <vector>
using namespace std;
// Function prototype
double avgVector(vector<int>);
int main()
{
    vector<int> values; // Một vectơ để giữ các giá trị
    int numValues;//Số lượng giá trị
    double average; // mức trung bình
    //Lấy số lượng giá trị trung bình
    cout << "How many values do you wish to average? ";
    cin >> numValues;
    // Lấy các giá trị và lưu trữ chúng trong vector
    for (int count = 0; count < numValues; count++)
    {
        int tempValue;
        cout << "Enter a value: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }
    // Lấy giá trị trung bình của các giá trị và hiển thị nó
    average = avgVector(values);
    cout << "Average: " << average << endl;
    return 0;
}
double avgVector(vector<int> vect)
{
    int total = 0;//bộ đếm
    double avg;//biến trung trung
    if (vect.empty()) // Xác định xem vectơ có rỗng không
    {
        cout << "No values to average.\n";
        avg = 0.0;
    }
    else
    {
        for (int count = 0; count < vect.size(); count++)
        total += vect[count];
        avg = total / vect.size();
    }
    return avg;
}