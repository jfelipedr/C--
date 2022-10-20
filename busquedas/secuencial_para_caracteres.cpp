//busqueda Secuencial para caracteres
#include<iostream>
using namespace std;
int main(){
	char a[] = {'a','i','u','e','o'}, dato;
	int i;
	bool band = false;
	dato = 'e';
	//Busqueda Secuencial
	i=0;
	while((band == false) && (i<5)){
		if(a[i] == dato){
			band = true;
		}
		i++;
	}

	if(band == false){
		cout<<"El dato a buscar no existe en el arreglo"<<endl;
	}
	else if(band == true){
		cout<<"El dato a sido encontrado en la pos: "<<i-1<<endl;
	}

	return 0;
}