#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo hằng số
    const int WEIGHT_MIN   =    0,//trọng lượng tối thiểu
              WEIGHT_MAX   =   20,//trọng lượng tối đa
              DISTANCE_MIN =   10,//khoảng cách tối thiểu
              DISTANCE_MAX = 3000;//khoảng cách tối đa
    //khai báo biến
    float package_weight,//trọng lượng bưu kiện
          distance,//khoảng cách
          total_charges;//tổng phí
    //nhập trọng lượng của bưu kiện
    cout << "\nWhat is the weight (kg) of the package? ";
    cin >> package_weight;
    //xác thực đầu vào của trọng lượng bưu kiện
    if (package_weight <= WEIGHT_MIN ||  package_weight > WEIGHT_MAX)
    {
        cout << "\nWe're sorry, package weight must be\n more than 0kg and less than 20kg.\n Rerun the program and try again.\n" ;
    }
    else 
    {
        //nhập khoảng cách bưu kiện vận chuyển
        cout << "\nDistance? ";
        cin >> distance;
        //xác thực đầu vào khoảng cách 
        if (distance < DISTANCE_MIN ||  distance > DISTANCE_MAX)
        {
            cout << "\nWe're sorry, the distance must be\n within 10 and 3000 miles.\n Rerun the program and try again.\n" ;
        }
        else 
        {
            //tính tổng phí để vận chuyển bưu kiện
             if (package_weight <= 2)
                total_charges = (distance / 500) * 1.10;
            else if (package_weight > 2 && 
                    package_weight <= 6)
                total_charges = (distance / 500) * 2.20;
            else if (package_weight > 6 && 
                    package_weight <= 10)
                total_charges = (distance / 500) * 3.70;
            else if (package_weight > 10 && 
                    package_weight <= 20)
                total_charges = (distance / 500) * 4.80;

            cout << setprecision(2) << fixed//formatting
                << "Total charges are $" << total_charges << endl;
        }
    }
    return 0;
}