#include <iostream>
#include <iomanip>
using namespace std;

class Car{
	public:
		string brand;
		int weight;
		int seats;
		Car();
		void show();		
};
Car::Car(){
	brand = "N/A";
	weight = 0;
	seats = 0;
}
void Car::show(){
	cout<<setw(12)<<brand<<setw(15)<<weight<<setw(15)<<seats<<endl;
}
int main() 
{
	Car car1, car2, car3;
	cout<<"Brand: ";
	getline(cin, car1.brand);
	cout<<"Weight: ";
	cin>>car1.weight;
	cout<<"Seats: ";
	cin>>car1.seats;
	
	cin.ignore(265, '\n');
	cout<<"Brand: ";
	getline(cin, car2.brand);
	cout<<"Weight: ";
	cin>>car2.weight;
	cout<<"Seats: ";
	cin>>car2.seats;
	
	cin.ignore(265, '\n');
	cout<<"Brand: ";
	getline(cin, car3.brand);
	cout<<"Weight: ";
	cin>>car3.weight;
	cout<<"Seats: ";
	cin>>car3.seats;
	
	cout<<setw(12)<<"Brand"<<setw(15)<<"Weight"<<setw(15)<<"Seats"<<endl;
	car1.show();
	car2.show();
	car3.show();
	return 0;
}
