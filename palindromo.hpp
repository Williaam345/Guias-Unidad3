
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct nodo{
      char dato;
      struct nodo *sgte;
};
typedef struct nodo *Pila;

/*                      Creando Nodo
--------------------------------------------------------------------*/

Pila crearNodo(char a)
{
      Pila nuevoNodo = new(struct nodo);
      nuevoNodo->dato = a;
      return nuevoNodo;
}

/*                      apilamos 
--------------------------------------------------------------------*/

void push(Pila &top, char a)
{
     Pila aux = crearNodo(a);
     aux->sgte = top;
     top = aux;
}
/*                      desapilamos
---------------------------------------------------------------------*/
char pop(Pila &top)
{
     int b ;
     Pila aux;
     
     aux = top ;
     b = aux->dato;   // asignamos el primer valor de la pila
     top = aux->sgte ;
     delete(aux);
     return b;
}

/*                      Verificamos la Frase Ingresada 
---------------------------------------------------------------------*/
void verificarPalindromo( Pila &p, string cad)
{
     Pila aux;     
     
     /* Borrando los espacios de la cadena   */
     for(int i=0; i<cad.size(); i++)
          if(cad[i]==32)
              cad.erase(i,1);   // borramos el caracter espacio(ASCII 32)
     
     /* Apilamos cada uno de los caracteres, el ultimo sera el primero en la pila*/
     for(int i=0; i<cad.size(); i++)
          push(p, cad[i]);    


     /* Comparando la cadena con la pila */
     for(int i=0; i<cad.size(); i++)
     {
          aux = p;   // apunta siempre a la cima de la pila para comparar 
          
          if(cad[i]== aux->dato)
               pop( p );
          else
             break;
     }
     
     if( p==NULL)
        cout << "\n\t La frase ES PALINDROMA..." << endl;
     else
        cout << "\n\t La frase NO ES PALINDROMA..." << endl;
}