#include <iostream>

using namespace std;

int main() {
	int x;
	int y;
	int hasil;
	
cout<< "masukan nilai x:"; cin>> x;
cout<<"masukan nilai y:";cin>>y;
hasil=x-y;
if (hasil<0)
	cout << hasil*-1;
	else
	cout << hasil;
}
