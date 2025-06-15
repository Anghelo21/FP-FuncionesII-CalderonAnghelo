#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double pi= M_PI, radio, area;
	cout<<"Ingrese el valor del radio del circulo para calcular su area:"<<endl;
	cin>>radio;
	area= pi*pow(radio, 2);
	cout<<"El area del circulo es: "<<area<<endl;
	return 0;
}
