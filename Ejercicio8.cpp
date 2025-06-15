#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool escalera(int a, int b, int c){
	return (a==b-1 && b==c-1) || (a==b+1 && b==c+1);
}

int jugada(){
	return (rand() % 5) + 1;
}

int main(){
    srand(time(0));
    int monedas=100;
    int apuesta, n1, n2, n3;
    cout <<"Bienvenido al tragamonedas :)"<<endl;
    cout <<"Monedas iniciales: "<<monedas<<endl;
    while(monedas>0){
        cout<<"Ingrese su apuesta (1 a 10), o 0 para salir: "<<endl;
        cin>>apuesta;
        if(apuesta==0){
            cout<<"Saliste del juego"<<endl;
            break;
        } else if(apuesta<1 || apuesta>10){
            cout<<"Apuesta inválida. La apuesta debe ser entre 1 y 10"<<endl;
        } else if(apuesta>monedas){
            cout<<"No tienes monedas para esta apuesta"<<endl;
        } else{
            n1=jugada();
            n2=jugada();
            n3=jugada();
            cout<<"Jugada: "<<n1<<" - "<<n2<<" - "<<n3<<endl;
            if (n1==n2 && n2==n3){
                cout<<"¡Tres iguales! Ganas 10 veces tu apuesta"<<endl;
                monedas=monedas+apuesta*9;
            } else if(escalera(n1, n2, n3)){
                cout<<"¡Escalera! Ganas 5 veces tu apuesta"<<endl;
                monedas=monedas+apuesta*4;
            } else if(n1==n2 || n1==n3 || n2==n3){
                cout<<"¡Dos iguales! Ganas el doble"<<endl;
                monedas=monedas+apuesta;
            } else{
                cout<<"No ganaste, lo siento :("<<endl;
                monedas=monedas-apuesta;
            }
            cout<<"Monedas actuales: "<<monedas<<endl;
        }
    }
    if (monedas==0){
        cout<<"Te quedaste sin monedas. Fin del juego."<<endl;
    }
    cout<<"Monedas finales: "<<monedas<<endl;
	return 0;
}
