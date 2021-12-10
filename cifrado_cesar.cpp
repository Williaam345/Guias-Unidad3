#include <iostream>
#include <cstring>

using namespace std;
 
void encriptar(char mensaje[100] ,int n); 


/* DECLARAMOS VARIABLES 
utilizaremos vectores con las letras del abecedario tanto en minusculas como mayusculas 
esto con el fin de utilizarlas para cifrar la palabra que ingresemos
*/
char ABC [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
char abc []= "abcdefghijklmnopqrstuvwxyz"; 
/*delcaramos una variable para capturar un numero cualquiera con el cual se realiza 
el desplazamiento de letras para cifrar nuestro mensaje*/
int n=0; 
 
int main(){ 
	
	 cout<<"\n\t\t ENCRIPTACION UTILIZANDO CIFRADO DE CESAR \n\n";
 	 cout<<"\n\t\t Estructura de Datos \n\n";
 	 cout<<"\n\t\t Alumno WILLIAM ALEXANDER HERRERA ALVAREZ \n\n";
 	 //declaramos un vector que almacenara la palabra ingresada por el usuario
    char cadena[100];
    cout << "intrudce una palabra a encriptar: ";
    //le asignamos la palabra ingresada a nuestro vector 
    cin.getline(cadena, 100);   
    //solicitamos el numero que desplazara las letras de la palabra original 
    cout<<"introduce un numero: "; 
    //le asignamos el numero a nuestra variable declarada anteriormente
    cin>> n;
    //procedemos a pasar los datos a nuestro meto de encriptamiento
    encriptar (cadena, n);
    //imprimimos en pantalla la palabra y aencriptada
    cout<< "la palabra encriptada seria : " << cadena << endl;
    return 0; 
} 

void encriptar(char mensaje[100], int n){ 
    int i = 0;
    while(mensaje[i] != '\0') {
        mensaje[i] +=n;
        i++;
    }
        
}