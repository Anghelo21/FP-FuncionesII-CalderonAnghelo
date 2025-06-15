#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

void calcularRaices(double a, double b, double c, complex<double> discriminante, complex<double> &x1, complex<double> &x2, bool &tipo){
	discriminante=sqrt(complex<double>(pow(b, 2)-4*a*c));
	x1=(-b + discriminante)/(2*a);
	x2=(-b - discriminante)/(2*a);
	tipo = (imag(x1) == 0 && imag(x2) == 0);
}

int main(){
	double a, b, c;
	complex<double> discriminante, x1=0, x2=0;
	bool tipo;
	cout<<"Ingrese los coeficientes de la ecuacion cuadratica:"<<endl;
	cout<<"Primer coeficiente:"<<endl;
	cin>>a;
	cout<<"Segundo coeficiente:"<<endl;
	cin>>b;
	cout<<"Tercero coeficiente:"<<endl;
	cin>>c;
	calcularRaices(a, b, c, discriminante, x1, x2, tipo);
	if (tipo==true){
		cout<<"Raices reales"<<endl;
		cout<<"X1 = "<<real(x1)<<endl;
		cout<<"X2 = "<<real(x2)<<endl;
	} else{
		cout<<"Raices complejas"<<endl;
		cout<<"X1 = "<<x1<<endl;
		cout<<"X2 = "<<x2<<endl;
	}
	return 0;
}
