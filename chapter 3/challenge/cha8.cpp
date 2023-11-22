#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const float INDV_WIDGET_WIEGHT = 12.5;
    float pallet_wt,
          pallet_with_widgets,
          widget_weight,
          num_widgets;
    //nhập số liệu
    cout << "How much does the pallet weight by itself? ";
    cin >> pallet_wt;
    cout << "How much does the pallet weight with widgets?";
    cin >> pallet_with_widgets;
    // tính số lượng đồ dùng xếp chồng lên nhau
    widget_weight = pallet_with_widgets - pallet_wt;
    num_widgets   = widget_weight / INDV_WIDGET_WIEGHT;
    // Hiển thị số lượng vật dụng xếp chồng lên nhau trên pallet
    cout << setprecision(2) << fixed << right << endl;//formatting
    cout << "Individual widget weight   = " << setw(6) << INDV_WIDGET_WIEGHT  << endl;
    cout << "Pallet weight              = " << setw(6) << pallet_wt << endl;
    cout << "Pallet weight with widgets = " << setw(6) << pallet_with_widgets << endl;
    cout << "Widget weight              = " << setw(6) << widget_weight << endl;
    cout << "Number of widgets          = " << setw(6) << num_widgets << endl;
    return 0;
}