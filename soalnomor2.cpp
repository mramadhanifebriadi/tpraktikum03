#include <iostream>

using namespace std;

int main() {
	int t;
	int l;
	int a;
	char inisial;
	cout<<"selamat datang di program perhitungan bangun datar \n"
		<<"Input inisial bangun datar apa yang ingin anda hitung:"; cin >> inisial;
		
		if (inisial=='p'||inisial=='P')
		{
			cout << "Anda menginputkan inisial untuk menghitung persegi \n"
				<<"input tinggi:"; cin>>t; cout <<"cm \n"
				<<"input lebar:"; cin>>l; cout <<"cm"<<endl;
				cout <<"luas persegi:"; 
				cout<<t*l;
				cout<<"cm"<<endl;
		}
		else if (inisial=='s'||inisial=='S')
		{
			cout << "Anda menginputkan inisial untuk menghitung segitiga \n"
				<<"input tinggi:"; cin>>t; cout <<"cm \n"
				<<"input alas:"; cin>>a; cout <<"cm"<<endl;
				cout <<"luas segitiga:"; 
				cout<<0.5*a*t;
				cout<<"cm"<<endl;
		}
		else
		cout <<"inisial yg anda inputkan tidak tersedia \n"
			<<"ssilahkan input 'p' untuk persegi dan 's' untuk segitiga"; 
}
