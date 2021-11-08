#include <chrono>
#include <thread>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "cola.hpp"

using namespace std;

int Numero_Aleatorio(int max);
void Papa_Caliente(const vector<string> &listaNombres);

int main (){
	vector<string> jugadores = {"1.Erick", "2.Emmanuel", "3.Brian", "4.Gabriel", "5.Maria", "6.Oscar", "7.Krista",
								"8.Eduardo", "9.Alejandra", "10.Carlos", "11.Diego", "12.Manuel", "13.Jose", "14.Mateo",
								"15.Fernando", "16.Martinez", "17.Ernesto", "18.Gustavo", "19.Graham"};
	Papa_Caliente(jugadores);							
	return 0;
}

int Numero_Aleatorio(int max){
	static bool semilla_Creada=false;
	if(semilla_Creada){
		srand(time(0));
		semilla_Creada=true;
	}
	return rand() % max;
}

void Papa_Caliente(const vector<string> &listaNombres){
	int cantidad_jugadores = listaNombres.size();
	Cola<string> simulacion;
	
	for(int i=0; i<cantidad_jugadores; i++){
		simulacion.enqueue(listaNombres[i]);		
	}
	
	for(int i=cantidad_jugadores; i>1; i--){
		cout << "Quien tiene la papa caliente?" << endl;
		for(int pases=Numero_Aleatorio(2*cantidad_jugadores); pases>0; pases--){
			string jugador=simulacion.dequeue();
			cout << jugador << endl;
			simulacion.enqueue(jugador);
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		string perdiste = simulacion.dequeue();
		cout << perdiste << endl;
		cout << "Alto!!!" << perdiste << " sale del juego..." << endl << endl;
	}
	string ganador = simulacion.dequeue();
	cout << ganador << " ganaste el juego." << endl;	
}