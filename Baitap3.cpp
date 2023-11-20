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
	cout<<setw(10)<<brand<<setw(15)<<weight<<setw(15)<<seats<<endl;
}
int main() 
{
	cout<<"Nhap so xe: ";
	int n; cin>>n;
	Car *car = new Car[n];
	string strtmp;
	int inttmp; 
	for(int i=0; i<n; i++){
		cin.ignore(265, '\n');
		cout<<"Thong tin xe "<<i+1<<":\n";
		cout<<"Brand: ";
		getline(cin, strtmp);
		car[i].setBrand(strtmp);
		cout<<"Weight: ";
		cin>>inttmp;
		car[i].setWeight(inttmp);
		cout<<"Seats: ";
		cin>>inttmp;
		car[i].setSeats(inttmp);		
	}
	
	cout<<setw(16)<<"Brand"<<setw(15)<<"Weight"<<setw(15)<<"Seats"<<endl;
	for(int i=0; i<n; i++){
		cout<<setw(3)<<"Xe "<<i+1<<": ";
		car[i].show();
	}
	
	delete[] car;
	return 0;
}
