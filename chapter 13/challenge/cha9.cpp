  #include <iostream>
#include <iomanip>
using namespace std;
//khai báo class Pop
class Pop
{
private:
    int population;  // Biến riêng để lưu trữ số lượng dân số
    int births;      // Biến riêng để lưu trữ số người được sinh
    int deaths;      //Biến riêng để lưu trữ số người chết

public:
    // Chức năng thành viên công cộng để thiết lập giá trị
    void setPopulation(int);
    void setBirths(int);
    void setDeaths(int);

    // Chức năng thành viên công cộng để nhận giá trị
    int getPopulation();
    double getBirthRate();
    double getDeathRate();

    // Hàm tạo để khởi tạo các biến
    Pop() : population(0), births(0), deaths(0) {}
};


// Đặt số lượng dân số
void Pop::setPopulation(int p)
{
    population = p;
}

// Đặt số lần sinh
void Pop::setBirths(int B)
{
    births = B;
}

// Đặt số người chết
void Pop::setDeaths(int d)
{
    deaths = d;
}

// Lấy số lượng dân số
int Pop::getPopulation()
{
    return population;
}

// Lấy tỷ lệ sinh (số ca sinh bình quân đầu người)
double Pop::getBirthRate()
{
    // Tính tỷ lệ sinh bằng tỷ lệ sinh trên dân số
    return births / static_cast<double>(population);
}

// Lấy tỷ lệ tử vong (số người chết bình quân đầu người)
double Pop::getDeathRate()
{
    // Tính tỷ lệ tử vong bằng tỷ lệ số người chết trên dân số
    return deaths / static_cast<double>(population);
}


int main()
{
	Pop  myTown;             // khởi tạo một đối tượng Pop
	int  numPeople;
	int  numBirths;
	int  numDeaths;
	 
	// nhập dân số
	cout << "Enter total population: ";
	cin  >> numPeople;
	while (numPeople < 1)//xác thực đầu vào
	{   cout << "Value must be greater than 0.  Please re-enter: ";
	cin  >> numPeople;
	}
	myTown.setPopulation(numPeople); 
    //nhập số người sinh hàng năm
	 cout << "Enter annual number of births: ";
	 cin  >> numBirths;
	 while (numBirths < 0)//xác thực đầu vào
	{   cout << "Value cannot be negative.  Please re-enter: ";
		cin  >> numBirths;
	}
	myTown.setBirths(numBirths); 
	   //nhập số người chết hàng năm
	cout << "Enter annual number of deaths: ";
	cin  >> numDeaths;
	while (numDeaths < 0)//xác thực đầu vào
	{   cout << "Value cannot be negative.  Please re-enter: ";
		cin  >> numDeaths;
	}
	myTown.setDeaths(numDeaths);

	// Hiển thị số liệu thống kê cho myTown
	cout << "\nPopulation Statistics  ";        
	cout << fixed << showpoint  << setprecision(3);//formatting
	cout << "\n\tPopulation:  " << setw(7) << myTown.getPopulation();
	cout << "\n\tBirth Rate:  " << setw(7) << myTown.getBirthRate();
	cout << "\n\tDeath Rate:  " << setw(7) << myTown.getDeathRate() << endl;
	 
	 return 0;
}