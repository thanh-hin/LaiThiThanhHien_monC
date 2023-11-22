#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến
	string Name,// tên học sinh
		   Front,//đầu dòng
		   End;// cuối dòng
	ifstream InputFile;// Xác định đối tượng ifstream
    //giới thiệu chương trình
	cout << "\nThis program reports which student would be at the front of\n"
		 << "the line and which one would be at the end of the line.\n"
		 << "When lined up in single file according to their first name.\n";
	InputFile.open("LineUp.dat");// mở file
	if (!InputFile)//kiểm trả lỗi mở file
		cout << "Error openning file!\n";//báo lỗi
	else
	{
		InputFile >> Name;// đọc tên đầu tiên
		Front = End = Name;						
		while (!InputFile.eof())// Đọc đến cuối tập tin
		{ // Để sắp xếp học sinh theo tên
			if (Name > End)
				End = Name;
			if (Name < Front)
				Front = Name;
			InputFile >> Name;// Đọc học sinh tiếp theo
		}
	}
	
	//Xếp học sinh lên đầu hàng
    // và nằm ở cuối dòng
	cout << endl << Front << " is at the front of the line."<< End << " is at the end of the line.\n";
	InputFile.close();// đóng file
	return 0;
}