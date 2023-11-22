#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void getData(int &, int &, double &);
void orderStatus(int, int , double);
void numInputError(string, int);

int main()//hàm chính
{
    //khai báo biến
	int Ordered,//hàng đặt
		InStock;//hàng trong kho
	double	SpecShipg;//số tiền vận chuyển
    //nhập dữ liệu bằng gọi hàm getData
	getData(Ordered, InStock, SpecShipg);
    //hiển thị thông tin bằng gọi hàm orderStatus
	orderStatus(Ordered, InStock, SpecShipg);
	return 0;
}

//hàm nhập dữ liệu
void getData(int &Ordered, int &InStock, double &SpecShipg)//định nghĩa hàm
{
	cout << "\nThe Middletown Wholesale Copper Wire Order Status Query Form\n";
	do
	{   //nhập số lượng cuộn đặt hàng
		cout << "Enter the number of spools ordered: ";
		cin  >> Ordered;
		if(Ordered < 1)//xác thự đầu vào
			numInputError("Spools ordered", 1);
	} while (Ordered < 1);//xác thực đầu vào để quay lại nhập lại số lượng cuộn đặt hàng
	do
	{   //nhập số lượng cuộn trong kho
		cout << "Enter the number of spools in stock: ";
		cin  >> InStock;
		if (InStock < 0)//xác thực đầu vào
			numInputError("Spools in stock", 0);
	} while (InStock < 0);//xác thực đầu vào để quay lại vòng lặp nhập lại số lượng cuộn trong kho
	do
	{
        //nhập số tiền của bất kỳ khoản phí vận chuyển và xử lý đặc biệt nào:
		cout << "Enter the amount of any special shipping and handling charges: ";
		cin  >> SpecShipg;
		if(SpecShipg < 0)//xác thực đầu vào
			numInputError("Special Shiping", 0);
	} while (SpecShipg < 0);//xác thực đầu vào để quay lại vòng lặp nhập lại số tiền
}

//
void orderStatus(int Ordered, int InStock, double SpecShipg)
{
    //khai báo biến
	int 	Ready,//hàng có sẵn
	    	Backorder;//hàng đặt trước
	double	Shipg = 10.0,
	    	TotSellPrice,
	    	TotShipg,
	    	TotOrder;
    //hiển thị lượng hàng trong kho và hàng đặt như thế nào
	cout << "Number of ordered spools ready to ship from current stock : ";
	if (Ordered > InStock)//số lượng hàng trong kho ít hơn hàng đặt
	{
		Backorder = Ordered - InStock;//tính số hàng đặt trước
		Ready = InStock;//còn lại số hàng có sẵn
        //hiển thị kết quả
	    cout << setw(11) << Ready << endl;
		cout << "Number of ordered spools on backorder                     : "
			 << setw(11) << Backorder << endl;
	}
	else //hàng trong kho nhiều hơn hàng đặt
	{
		Ready = Ordered;//hàng có sẵn bằng hàng đặt
		cout << setw(11) << Ready << endl;//hiển thị kết quả
	}

	TotSellPrice = Ready * 100;//tỉnh tiền hàng đặt có sẵn
	TotShipg = Shipg + SpecShipg;//tính phí vận chuyển
	TotOrder = TotSellPrice + TotShipg;//tính tổng tiền đặt hàng
    //hiển thị thông tin
	cout << fixed << showpoint << setprecision(2);//formatting
	cout << "Total selling price of the portion ready to ship          : $"
	     << setw(10) << TotSellPrice << endl;
	cout << "Total shipping and handling on the portion ready to ship  : $"
         << setw(10) << TotShipg << endl;
    cout << "Total of the order ready to ship                          : $"
         << setw(10) << TotOrder << endl;
}

//hàm xác thực đầu vào
void numInputError(string Item, int Limit)//định nghĩa hàm
{
    //báo lỗi 
    //yêu cầu nhập số lớn hơn limit
	cout << "Error! Invalid number\n";
	cout << Item << " must be greater than " << Limit << ".\n";
}