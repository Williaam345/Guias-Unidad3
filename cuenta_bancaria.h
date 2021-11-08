#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria {
	private: 
	
	string NumeroCuenta;
	string NombreTitular;
	double Saldo;
	
	public:
		CuentaBancaria(string num, string titular, double Saldo);
		double getSaldo();
		string getNumeroCuenta();
		string getNombreTitular();
		void depositar(double importeDeposito);
		void retirar(double importeRetiro);
};

//Implementando el constructor 

CuentaBancaria::CuentaBancaria(string num, string titular, double Saldo)
{
		//Asignar Saldo
	
	if(Saldo < 0){
		
		this -> Saldo = 0.0;
	} else {
	this -> Saldo = Saldo;
	}
	this -> NumeroCuenta = num;
	this -> NombreTitular = titular;
}

double CuentaBancaria::getSaldo(){
	return this -> Saldo;
}

string CuentaBancaria::getNumeroCuenta(){
	return this -> NumeroCuenta;
}

string CuentaBancaria::getNombreTitular(){
	return this -> NombreTitular;
}
void CuentaBancaria::depositar(double importeDeposito){
	if(importeDeposito > 0){
		this -> Saldo +=importeDeposito;
	}else{
	cout << "! - Importe no Valido " << endl;
	}	
}
void CuentaBancaria::retirar(double importeRetiro){
	if(importeRetiro > 0 && importeRetiro < this -> Saldo){
		this -> Saldo -= importeRetiro;
	}else {
	cout << "! - Importe No Valido " << endl;
	}
}


