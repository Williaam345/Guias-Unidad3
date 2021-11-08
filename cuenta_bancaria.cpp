#include "cuenta_bancaria.h"

using namespace std; 

int main(){
	// creando cuenta bancaria
	
	CuentaBancaria miCuenta("A-20211998", "William Herrera", 10000.00);
	cout << "Titular: " <<miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: $" << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	// Creando otra Cuenta Bancaria
	
	CuentaBancaria cuentaAmigo ("J-20213098", "Jochebed Hernandez", 9500.00);
	cout << "Titular: " <<cuentaAmigo.getNombreTitular() << endl;
	cout << "# Cuenta: " << cuentaAmigo.getNumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaAmigo.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	CuentaBancaria cuentaNoValida ("B-3016998", "Bertilio Alvarez", -2000.00);
	cout << "Titular: " <<cuentaNoValida.getNombreTitular() << endl;
	cout << "# Cuenta: " << cuentaNoValida.getNumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaNoValida.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	// haciendo un retiro de mi cuenta 
	
	cout << "Quiero Retirar $2500 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "Saldo Inicial $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(2500);
	cout << "Saldo luego de la Operacion: $" << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
 // hacer un retiro mayor al saldo disponible en mi cuenta 
 
 	cout << "Quiero Retirar $8000 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "Saldo Inicial $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(8000);
	cout << "Saldo luego de la Operacion: $" << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	 // hacer un retiro de monto negativo en mi cuenta 
 
 	cout << "Quiero Retirar -$1000 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "Saldo Inicial $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(-1000);
	cout << "Saldo luego de la Operacion: $" << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	 // hacer un deposito en mi cuenta 
 
 	cout << "Quiero Depositar $25000 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "Saldo Inicial $ " << miCuenta.getSaldo() << endl;
	miCuenta.depositar(25000);
	cout << "Saldo luego de la Operacion: $" << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	 // hacer un deposito negativo  en mi cuenta 
 
 	cout << "Quiero Depositar -$8000 de la cuenta " << miCuenta.getNombreTitular() << endl;
	cout << "Saldo Inicial $ " << miCuenta.getSaldo() << endl;
	miCuenta.depositar(-8000);
	cout << "Saldo luego de la Operacion: $" << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
 
 
	
	return 0;
}