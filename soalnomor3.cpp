#include <iostream>
using namespace std;

int main(){
	int jk;
	int gp;
	int lembur;
	int jamlembur;
	int jamkerjatotal;
	int gatot;
	int gaber;
	cout<<"masukan jam kerja anda:"; cin >> jk;
	cout<<"masukan gajih anda perjam:"; cin >> gp;
	lembur=jk-40;
	jamlembur=lembur*1.5;
	jamkerjatotal=40+jamlembur;
	gatot=jamkerjatotal*gp;
	gaber=gatot-(0.15*gatot);
	cout <<"jam lembur anda:"<<lembur<<endl;
	cout <<"bonus dari lembur anda:"<<jamlembur<<endl;
	cout <<"jam kerja total anda:"<<jamkerjatotal<<endl;
	cout <<"gajih total anda:"<<gatot<<endl;
	cout <<"gajih bersih anda di potong pajak:"<<gaber<<endl;
	
}
