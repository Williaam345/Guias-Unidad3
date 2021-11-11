#include <iostream>
#include <string>
#include <stdlib.h>
#include "palindromo.hpp"

int main()
{
  Pila pila = NULL;    // creando Pila
    string cad;
    
    cout<<"\n\t\tVERIFICAR SI UNA FRASE ES PALINDROMA CON PILAS \n\n";
    
    cout << " Ingrese palabra: ";
    getline(cin, cad);
    
    verificarPalindromo( pila, cad );
    
    cout<<"\n\n ";
        
    return 0;
}
    
