#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int c1=0, c2=0;
	cout<<"Iniciando juego..."<<endl;
	do{
		cout<<"Jugador 1 lanza un dado..."<<endl;
		int j1 = (rand() % 6) + 1;
		cout<<j1<<endl;
		cout<<"Jugador 2 lanza un dado..."<<endl;
		int j2 = (rand() % 6) + 1;
		cout<<j2<<endl;
		if (j1>j2){
			cout<<"La ronda la gana el jugador 1 :D"<<endl;
			c1=c1+1;
		} else if(j2>j1){
			cout<<"La ronda la gana el jugador 2 :D"<<endl;
			c2=c2+1;
		} else if(j1==j2){
			cout<<"EMPATE"<<endl;
		}
	} while(c1 < 3 && c2 < 3);
	cout<<" ENHORABUENA :D "<<endl;
	if (c1==3){
		cout<<"El juego lo gana el jugador 1"<<endl;
	} else if(c2==3){
		cout<<"El juego lo gana el jugador 2"<<endl;
	}
	return 0;
}
