#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//prototipos 
std::string generar_movimiento_computadora(); 
std::string obtener_movimiento_jugador();
void determinar_ganador(std::string computadora, std::string jugador);
void procesar_entrada_jugador_piedra(std::string computadora);
void procesar_entrada_jugador_papel(std::string computadora);
void procesar_entrada_jugador_tijera(std::string computadora);
void procesar_entrada_jugador_lagarto(std::string computadora);
void procesar_entrada_jugador_spock(std::string computadora);

int main(){
	using namespace std;
	
	string movimiento_computadora;
	string movimiento_jugador;
	
	movimiento_jugador = obtener_movimiento_jugador();
	movimiento_computadora = generar_movimiento_computadora();
	determinar_ganador(movimiento_computadora, movimiento_jugador);
	
	return 0;
}

std::string generar_movimiento_computadora() {
	std::string movimiento;
	int num_aleatorio;
	
	//Generar numero aleatorio
	srand(time(0));
	num_aleatorio = rand() % 3+1;
	
	switch(num_aleatorio)
	{
		case 1:
			movimiento="piedra";
			break;
		case 2:
			movimiento="papel";
			break;
		case 3:
			movimiento="tijeras";
			break;
		case 4:
			movimiento="lagarto";
			break;
		case 5:
			movimiento="spock";
			break;
	}
	
	std::cout << "La computadora escogio: " << movimiento << "\n";
	return movimiento;
}

std::string obtener_movimiento_jugador() {
	using namespace std;
	string movimiento;
	
	cout << "Piedra, Papel, Tijeras, Lagarto o Spock (Para terminar el juego, escriba salir)?";
	cin >> movimiento;
	
	return movimiento;
}

void determinar_ganador(std::string computadora, std::string jugador){
	if (computadora == jugador){
		std::cout << "Empate \n";
	}
	else if (jugador == "piedra"){
		procesar_entrada_jugador_piedra(computadora);
	}
	else if (jugador == "papel"){
		procesar_entrada_jugador_papel(computadora);
	}
	else if (jugador == "tijeras"){
		procesar_entrada_jugador_tijera(computadora);
	}
	else if (jugador == "lagarto"){
		procesar_entrada_jugador_lagarto(computadora);
	}
	else if (jugador == "spock"){
		procesar_entrada_jugador_spock(computadora);
	}
	else{
		std::cout << "Entrada no valida. Ingrese piedra, papel o tijeras. \n";
	}
}

void procesar_entrada_jugador_piedra(std::string computadora){
	if (computadora == "papel"){
		std::cout << "La computadora gana. Papel cubre a piedra.";
	}
	else if (computadora == "spock"){
		std::cout << "La computadora gana. Spock vaporiza a piedra.";
	}
	else if (computadora == "tijeras"){
		std::cout << "Usted gana. Piedra rompe las tijeras.";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted gana. Piedra aplasta a lagarto.";
	}
}

void procesar_entrada_jugador_papel(std::string computadora){
	if (computadora == "tijeras"){
		std::cout << "La computadora gana. Tijeras cortan el papel.";
	}
	else if (computadora == "lagarto"){
		std::cout << "La computadora gana. Lagarto devora papel.";
	}
	else if (computadora == "piedra"){
		std::cout << "Usted gana. Papel cubre a piedra.";
	}
	else if (computadora == "spock"){
		std::cout << "Usted gana. Papel desautoriza a spock.";
	}
}

void procesar_entrada_jugador_tijera(std::string computadora){
	if(computadora == "piedra"){
		std::cout << "La computadora gana. Piedra rompe a tijeras.";
	}
	else if (computadora == "spock"){
		std::cout << "La computadora gana. Spock rompe tijeras.";
	}
	else if(computadora == "papel"){
		std::cout << "Usted gana. Tijeras cortan a papel.";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted gana. Tijeras decapitan a lagarto.";
	}
}

void procesar_entrada_jugador_lagarto(std::string computadora){
	if (computadora == "tijeras"){
		std::cout << "La computadora gana. Tijeras decapitan a lagarto";
	}
	else if (computadora == "piedra"){
		std::cout << "La computadora gana. Piedra aplasta a lagarto";
	}
	else if (computadora == "spock"){
		std::cout << "Usted gana. Lagarto envenena a spock";
	}
	else if (computadora == "papel"){
		std::cout << "Usted gana. Lagarto devora papel";
	}
}

void procesar_entrada_jugador_spock(std::string computadora){
	if (computadora == "lagarto"){
		std::cout << "La computadora gana. lagarto envenena a Spock.";
	}
	else if (computadora == "papel"){
		std::cout << "La computadora gana. Papel desautoriza a Spock.";
	}
	else if (computadora == "tijeras"){
		std::cout << "Usted gana. Spock rompe las tijeras.";
	}
	else if (computadora == "piedra"){
		std::cout << "Usted gana. Spock vaporiza a piedra.";
	}
}