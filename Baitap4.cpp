#include <iostream>
#include <iomanip>
using namespace std;

class Car{
	private:
		string brand;
		int weight;
		int seats;
		int travelers;
		string* travelers_list;
	public:
		Car();
		~Car();
		void show();
		void showTravelers_List();	
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
		void setTravelers(int num){
			travelers = num;
			travelers_list = new string[travelers];
			for(int i=0; i<travelers; i++){
				cout<<"Id"<<i+1<<": ";
				cin>>travelers_list[i];
			}
		}
		int getTravelers(){
			return travelers;
		}
};
Car::Car(){
	brand = "N/A";
	weight = 0;
	seats = 0;
}
Car::~Car(){
	delete[] travelers_list;
}
void Car::show(){
	cout<<setw(10)<<brand<<setw(15)<<weight<<setw(15)<<seats<<setw(15)<<travelers<<endl;
}
void Car::showTravelers_List(){
	cout<<"Danh sach du khach tren xe:"<<endl;
    for(int i=0; i<travelers; i++){
        cout <<"Du khach "<<i+1<<": "<<travelers_list[i]<<endl;
    }
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
		cout<<"Brand: ";
		getline(cin, strtmp);
		car[i].setBrand(strtmp);
		cout<<"Weight: ";
		cin>>inttmp;
		car[i].setWeight(inttmp);
		cout<<"Seats: ";
		cin>>inttmp;
		car[i].setSeats(inttmp);
		cout<<"Travelers: ";
		cin>>inttmp;
		car[i].setTravelers(inttmp);
	}
	
	cout<<setw(16)<<"Brand"<<setw(15)<<"Weight"<<setw(15)<<"Seats"<<setw(15)<<"Travelers"<<endl;
	for(int i=0; i<n; i++){
		cout<<setw(3)<<"Xe "<<i+1<<": ";
		car[i].show();
		car[i].showTravelers_List();
	}
	
	delete[] car;
	return 0;
}
