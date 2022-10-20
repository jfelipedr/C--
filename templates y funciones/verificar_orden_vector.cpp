/*Ejercicio 12: funcion que diga si EL VECTOR ESTA ORDENADO CRECIENTEMENTE*/
#include<iostream>
using namespace std;

void pedirDatos();
void comprobarOrdenamiento(int vec[],int);

int vec[100],tam;

int main(){
	pedirDatos();
	comprobarOrdenamiento(vec,tam);

	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del vector: ";
	cin>>tam;

	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

void comprobarOrdenamiento(int vec[],int tam){
	char band = 'F';
	//1 2 3 4 5
	int i=0;
	while((band=='F')&&(i<tam-1)){
		if(vec[i]>vec[i+1]){
			band = 'V';
		}
		i++;
	}

	if(band == 'F'){
		cout<<"\nEl arreglo esta ordenado en forma creciente";
	}
	else{
		cout<<"\nEl arreglo NO esta ordenado";
	}
}
-------------------------------------------------------
/*OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION
OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION OTRA SOLUCION*/
#include<iostream>
using namespace std;

void PedirDatos();
void Comprobacion(int vec[],int);

int vec[100], tam;

int main(){

	PedirDatos();
 	Comprobacion(vec,tam);

 	return 0;
}

void PedirDatos(){
	cout<<"Digite el tamaño del vector: ";
 	cin>>tam; cout<<"\n";

 	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
  		cin>>vec[i];
 	}
}

void Comprobacion(int vec[],int tam){
	int aux = 1;

 	for(int i=1;i<tam;i++){
  		if(vec[i] >= vec[i-1]){
   		aux += 1;
  	}
}
	if(aux == tam){
  		cout<<"\nEl arreglo esta ordenado crecientemente."<<endl;
 	}
 	else{
  		cout<<"\nEl arreglo NO esta ordenado crecientemente."<<endl;
 	}
}