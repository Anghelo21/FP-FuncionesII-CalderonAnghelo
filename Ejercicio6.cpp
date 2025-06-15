#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int jugador, puntaje=0;
	cout<<"Juguemos piedra papel o tijera :D"<<endl;
	cout<<"Cual sera tu eleccion?"<<endl;
	cout<<"1 = Piedra"<<endl;
	cout<<"2 = Papel"<<endl;
	cout<<"3 = Tijera"<<endl;
	do{
		int maquina = (rand() % 3) + 1;
		cout<<"Juega :D"<<endl;
		switch(maquina){
			case 1:
				cin>>jugador;
				if(jugador==1){
					cout<<"Empate"<<endl;		
				}else if(jugador==2){
					cout<<"Punto"<<endl;
					puntaje=puntaje+1;
				}else if(jugador==3){
					cout<<"Perdiste"<<endl;
				} else{
					cout<<"Tu eleccion tiene que estar entre 1 y 3"<<endl;
				}
				break;
			case 2:
				cin>>jugador;
				if(jugador==1){
					cout<<"Perdiste"<<endl;		
				}else if(jugador==2){
					cout<<"Empate"<<endl;
				}else if(jugador==3){
					cout<<"Punto"<<endl;
					puntaje=puntaje+1;
				} else{
					cout<<"Tu eleccion tiene que estar entre 1 y 3"<<endl;
			    }
				break;
			case 3:
				cin>>jugador;
				if(jugador==1){
					cout<<"Punto"<<endl;
					puntaje=puntaje+1;	
				}else if(jugador==2){
					cout<<"Pierdes"<<endl;
				}else if(jugador==3){
					cout<<"Empate"<<endl;
				} else{
					cout<<"Tu eleccion tiene que estar entre 1 y 3"<<endl;
				}
				break;
			default:
				cout<<"Tu eleccion tiene que estar entre 1 y 3"<<endl;
				break;
		}
	} while(puntaje<=2);
	cout<<"¡¡¡ GANASTE !!!"<<endl;
	return 0;
}
