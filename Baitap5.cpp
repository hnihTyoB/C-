#include <iostream>
#include <iomanip>
using namespace std;

class Thisinh{
	private:
		string hoten;
		int somonthi;
		float *diem;
		float trunbinh;
	public:
		void setHoten(string h){
			hoten = h;
		}
		string getHoten(){
			return hoten;
		}
		void setSomonthi(int s){
			somonthi = s;
			diem = new float[somonthi];
			for(int i=0; i<somonthi; i++){
				cout<<"Mon "<<i+1<<": ";
				cin>>diem[i];
			}
		}
		int getSomonthi(){
			return somonthi;
		}

		float tinh_tb();
		void show();
		Thisinh();
		~Thisinh();
		bool check();
};
float Thisinh::tinh_tb(){
	float dtb=0;
	for(int i=0; i<somonthi; i++){
		dtb += diem[i];
	}
	dtb /= somonthi;
	return dtb;
}
void Thisinh::show(){
	cout<<setw(13)<<hoten<<setw(15)<<somonthi<<setw(15)<<fixed<<setprecision(1)<<tinh_tb()<<endl;
	for(int i=0; i<somonthi; i++){
		cout<<"Mon "<<i+1<<": "<<diem[i]<<endl;
	}
}
Thisinh::Thisinh(){
	hoten = "N/A";
}
Thisinh::~Thisinh(){
	delete[] diem;
}
bool Thisinh::check(){
	if(tinh_tb() < 5)
		return false;
	for(int i=0; i<somonthi; i++){
		if(diem[i] == 0)
			return false;
	}
	return true;
}
int main() 
{
	cout<<"Nhap so thi sinh: ";
	int n;cin>>n;
	Thisinh ts[n];
	string strtmp;
	int inttmp;
	for(int i=0; i<n; i++){
		cin.ignore();
		cout<<"Thi sinh "<<i+1<<endl;
		cout<<"Ho ten: ";
		getline(cin, strtmp);
		ts[i].setHoten(strtmp);
		cout<<"So mon thi: ";
		cin>>inttmp;
		ts[i].setSomonthi(inttmp);
	}
	cout<<"\nDanh sach thi sinh trung tuyen\n";
	cout<<setw(25)<<"Ho ten"<<setw(15)<<"So mon thi"<<setw(15)<<"Trung binh"<<endl;
	for(int i=0; i<n; i++){	
		if(ts[i].check()){
			cout<<"Thi sinh "<<i+1<<": ";
			ts[i].show();
		}			
	}
	return 0;
}
