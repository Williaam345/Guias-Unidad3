#include <iostream>
#include <array>
#include <ctime>

using namespace std;

const int SIZE=64000;

void Imprimir_Arreglo(array<int, SIZE>&arr, int num_elementos){
	for (int i=0; i<arr.size() && i<num_elementos; i++){
		cout << arr[i] << endl;
	}
}

void Ordenamiento_Burbuja(array<int, SIZE>&arr){
	int size= arr.size();
	bool desordenado=true;
	for (int pase=0; pase < size-1 && desordenado; pase++){
		desordenado=false;
		for (int j=0; j<size-1 -pase; j++){
			if(arr[j]>arr[j+1]){
				desordenado=true;
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	array<int, SIZE>mi_arreglo;
	
	for (int i=0; i<SIZE; i++){
		cin >> mi_arreglo[i];
	}
	
	clock_t inicio=clock();
	Ordenamiento_Burbuja(mi_arreglo);
	clock_t fin=clock();
	
	double tiempo_segundos = double(fin - inicio)/CLOCKS_PER_SEC;
	
	cout << "Cantidad de elementos: " << mi_arreglo.size() << endl;
	cout << "Tiempo transcurrido: " << tiempo_segundos << " segundos" << endl;
}
