#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    // khai báo biến hằng
    const float ASSESSMENT_PER = 0.60,
                PROPERTY_TAX_PER = 0.75;
    // khai báo biến
    float total_assessment_value,
          total_property_tax,
          value_of_property;
    // hỏi giá trị thực tế
    cout << "What is that actual value of a property?";
    cin >> value_of_property;
    //tính giá trị định giá và thuế tài sản
    total_assessment_value = value_of_property * ASSESSMENT_PER;
    total_property_tax = (total_assessment_value / 100) * PROPERTY_TAX_PER;
    //hiển thị kết quả
    cout << setprecision(2) << fixed << right << endl;//formatting
    cout << "Property Value:    $";
    cout << setw(12) << value_of_property << endl;
    cout << "Assessment value:  $";
    cout << setw(12) << total_assessment_value << endl;
    cout << "Property Tax:      $";
    cout << setw(12) << total_property_tax << endl;
    return 0;
}