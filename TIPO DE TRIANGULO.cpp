#include<iostream>
#include <math.h>
using namespace std;
 main ()
{
int opcion;

cout << "*****Bienvenido*****\n"<<endl;
cout <<"*****Elija una Opcion*****\n"<<endl;

cout <<" 1 TIPO DE TRIANGULO Y SU AREA SEGUN SUS LADOS\n";
cout <<" 2 EL MAYOR DE 5 NUMEROS\n";
cout <<" 3 PROMEDIO ENTRE VARIOS NUMEROS\n";
cin >> opcion; 

switch(opcion){
	case 1: 
	
	float a, b, c, area, perimetro, raiz;

// Lectura de Datos 


cout << "\nEscribe 3 medida de angulos de un triangulo y te dire cual es....\n" <<endl;
cout << "\nLado A\n" <<endl; cin >> a;
cout << "\nLado B\n" <<endl; cin >> b;
cout << "\nLado C\n" <<endl; cin >> c;

// Comprobamos el tipo de triangulo

if(a==b&&a==c)
{
cout << "\nSon medidas de un triangulo Equilatero\n"<<endl;
}

else if(a==b||a==c||b==c)
{
cout << "\nSon medidas de un triangulo Isosceles\n"<<endl;
}

else if(a!=b&&a!=b&&b!=c)
{
cout << "\nSon medidas de un triangulo Escaleno\n"<<endl;
}

// Calculamos el area del Triangulo 

perimetro = (a+b+c)/2;
raiz = perimetro*(perimetro-a)*(perimetro-b)*(perimetro-c);
area = sqrt(raiz);

cout << "\n Su area es: " <<area <<endl;

break;

case 2: 
int N1, N2, N3, N4, N5;

cout <<"\n Ingrese 5 numeros cuales quiera: \n";
cout <<"Numero 1: "; cin>>N1;
cout <<"Numero 2: "; cin>>N2;
cout <<"Numero 3: "; cin>>N3;
cout <<"Numero 4: "; cin>>N4;
cout <<"Numero 5: "; cin>>N5;

if(N1>N2 && N1>N3 && N1>N4 && N1>5){
	cout << " El numero mayor es: "<<N1;
}else if(N2>N3 && N2>N4 && N2>N5){
	cout << " El numero mayor es: "<<N2;
}else if(N3>N4 && N3>N5){
	cout << " El numero mayor es: "<<N3;
}else if(N4>N5){
	cout << " El numero mayor es: "<<N4;
}else {
	cout << " El numero mayor es: "<<N5;	
}
break; 

case 3:

int cantidad;
float  x, y, promedio;

cout <<"¿Cuantos numeros desea ingresar?: \n" <<endl; cin>>cantidad;

for(int i=0; i<cantidad; i++){

cout <<"Ingrese un numero "<<i+1<<": "; cin>>x;
y=y+x;

}
 promedio = y/cantidad;
 
 cout <<"El promedio de los numeros ingresados es: \n" <<promedio <<endl;	
break; 
	
default:
cout <<"Error no existe esa opcion ";	

}
}



