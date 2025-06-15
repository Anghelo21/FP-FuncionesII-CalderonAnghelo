#include <iostream>
#include <complex> // Para raíces complejas
#include <cmath>
using namespace std;

int main(){
	double a, b, c;
	complex<double> discriminante, x1, x2; // Declara las variales para casos complejos
	cout<<"Ingrese los coeficientes de la ecuacion cuadratica:"<<endl;
	cout<<"Primero:"<<endl;
	cin>>a;
	cout<<"Segundo:"<<endl;
	cin>>b;
	cout<<"Tercero:"<<endl;
	cin>>c;
	discriminante=sqrt(complex<double>(pow(b, 2)-4*a*c));
	/* Se usa el "complex<double>" dentro del sqrt 
	para que se pueda realizar el cálculo 
	de la raíz negativa (caso complejo) */
	x1=(-b + discriminante)/(2*a);
	x2=(-b - discriminante)/(2*a);
    if (imag(x1) == 0){
		cout<<"X1 = "<<real(x1)<<endl;
	} else{
		cout<<"X1 = "<<x1<<endl;
	}
	if (imag(x2) == 0){
		cout<<"X2 = "<<real(x2)<<endl;
	} else{
		cout<<"X2 = "<<x2<<endl;
	} // "imag()" es la parte imaginaria y "real()" es la parte real
	return 0;
}
