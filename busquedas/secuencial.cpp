/*Busqueda secuencial:
Revisa toda la lista para buscar un elemento, comenzando por la posicion 0,
no importa el orden de la lista*/
#include<iostream>
using namespace std;
int main(){
	int a[] = {3,4,2,1,5};
	int i,dato;
	bool band = false;
	dato = 1;
	//Busqueda Secuencial
	i=0;
	while((band == false) && (i<5)){
		if(a[i] == dato){
			band = true;
		}
		i++;
	}

	if(band == false){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == true){
		cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;
	}

	return 0;
}