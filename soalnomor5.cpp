#include <iostream>

using namespace std;

int main() {

    float b;
    int t;
    cout << "Silahkan masukkan tinggi badan(cm) : "; 
cin >>t;
cout << "Silahkan masukkan berat badan(kg) : " ;
cin >> b;
if (b<t/2.5)
cout << "  Underweight" << endl;
else if (t/2.3 < b)
cout << "  Overweight" << endl;
else if (t/2.5 <= b <= t/2.3)
cout << "  Normal" << endl;

}

