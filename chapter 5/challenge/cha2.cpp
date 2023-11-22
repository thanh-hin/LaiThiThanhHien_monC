#include <iostream>
using namespace std;
int main()
{
    char ascii_code_number;//mã ASCII
    // vòng lặp hiển thị mã ASCII
	for(int code = 0; code <= 127; code++)
	{
		if ( code %16==0)
		    cout << endl;
		//hiển thị kết quả
		cout << (char)code << "  ";
	}
	cout << endl;
    return 0;
}