#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int c1, c2;
	double hipotenusa;
	cout<<"Ingrese las medidas de sus catetos:"<<endl;
	cout<<"Cateto 1:"<<endl;
	cin>>c1;
	cout<<"Cateto 2:"<<endl;
	cin>>c2;
	hipotenusa= sqrt(pow(c1, 2) + pow(c2, 2));
	cout<<"La hipotenusa es:"<<endl<<hipotenusa<<endl;
	return 0;
}
