#include <iostream>
#include <iomanip>
using namespace std;

class Car{
	private:
		string brand;
		int weight;
		int seats;
	public:
		Car();
		void show();	
		void setBrand(string b){
			brand = b;
		}
		string getBrand(){
			return brand;
		}
		void setWeight(int w){
			weight = w;
		}
		int getWeight(){
			return weight;
		}
		void setSeats(int s){
			seats = s;
		}
		int getSeats(){
			return seats;
		}			
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
	string strtmp;
	int inttmp; 
	cout<<"Brand: ";
	getline(cin, strtmp);
	car1.setBrand(strtmp);
	cout<<"Weight: ";
	cin>>inttmp;
	car1.setWeight(inttmp);
	cout<<"Seats: ";
	cin>>inttmp;
	car1.setSeats(inttmp);
	
	cin.ignore(265, '\n');
	cout<<"Brand: ";
	getline(cin, strtmp);
	car2.setBrand(strtmp);
	cout<<"Weight: ";
	cin>>inttmp;
	car2.setWeight(inttmp);
	cout<<"Seats: ";
	cin>>inttmp;
	car2.setSeats(inttmp);
	
	cin.ignore(265, '\n');
	cout<<"Brand: ";
	getline(cin, strtmp);
	car3.setBrand(strtmp);
	cout<<"Weight: ";
	cin>>inttmp;
	car3.setWeight(inttmp);
	cout<<"Seats: ";
	cin>>inttmp;
	car3.setSeats(inttmp);
	
	cout<<setw(12)<<"Brand"<<setw(15)<<"Weight"<<setw(15)<<"Seats"<<endl;
	car1.show();
	car2.show();
	car3.show();
	return 0;
}
