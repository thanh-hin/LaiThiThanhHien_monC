#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream Inputfile;
	Inputfile.open("people.dat");  // mở file
	if (!Inputfile) // Kiểm tra lỗi mở
		cout << "Error opening file.\n";
	int Pop;  	//dân số
	// Hiển thị tiêu đề biểu đồ thanh dân số
	cout << "PRAIRIEVILLE POPULATION GROWTH\n"
		 << "(each * represents 1000 people)\n\n";

	for (int Year = 1; Year <= 6; Year++)
	{  //Một lần lặp lại mỗi năm
		switch (Year)
		{
			case 1 : cout << "1900 ";
					 break;
			case 2 : cout << "1920 ";
					 break;
			case 3 : cout << "1940 ";
					 break;
			case 4 : cout << "1960 ";
					 break;
			case 5 : cout << "1980 ";
					 break;
			case 6 : cout << "2000 ";
					 break;
		}
		Inputfile >> Pop;// đọc từ file
		Pop /= 1000;// tính một trên 1000 người
		for (int Arisk = 1; Arisk <= Pop; Arisk++)
		{  // Hiển thị một dấu hoa thị trên mỗi lần lặp Một lần lặp trên 1000 người
			cout << "*";
		}
		cout << endl;
	}
	Inputfile.close(); 						// đóng file
	return 0;
}