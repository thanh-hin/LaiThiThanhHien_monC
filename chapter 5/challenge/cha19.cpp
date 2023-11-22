#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến
    float budget_amount,//tiền dự trù
          expense_total = 0, //bộ tích lũy tổng chi phí
          expense,//chi phí 1 cái
          budget_result;//tiền chênh lệch giữa tiền chi tiêu và tiền dự trù
    int num_of_expenses;//số khoảng chi tiêu
    //nhập số tiền dự trù
    cout << "\nEnter the amount budgeted for this month: ";
    cin >> budget_amount;
    //hỏi có bao nhiêu khoảng để chi tiêu
    cout << "How many expenses do you have? ";
    cin >> num_of_expenses; //10
    for (int i = 0; i < num_of_expenses; i++)
    {
        //nhập chi phí từng khoảng
        cout << "Enter expense #" << (i + 1) << ": ";
        cin >> expense;
        expense_total += expense;//tổng tích lủy chạy
    }
    budget_result = budget_amount - expense_total;//tính số tiền chên lệch 
    //xác định người dùng vượt quá hoặc dưới ngân sách
    if (expense_total > budget_amount)
    {
        cout << "You are over budget by $";
        cout << budget_result << '.' << endl;
    }
    else if (expense_total < budget_amount)
    {
        cout << "You are under budget by $";
        cout << budget_result << '.' << endl;
    }
    else if (expense_total == budget_amount)
    {
        cout << "Your budget is 0 based." << endl;
    }
    return 0;
}