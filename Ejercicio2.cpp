#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int n, cantidad;
	cout<<"ingrese la cantidad de numeros aleatorios que desea ver en pantalla:"<<endl;
	cin>>cantidad;
	cout<<"Ahora ingrese el valor maximo permitido para los numeros aleatorios:"<<endl;
	cin>>n;
	cout<<"La lista es:"<<endl;
	for (int i=1; i<=cantidad; i++){
		int limite = rand() % (n + 1);
		cout<<limite<<endl;
	}
	return 0;
}
