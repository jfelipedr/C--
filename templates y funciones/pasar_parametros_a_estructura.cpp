/*Pasar parametros a una estructura*/
#include<iostream>
using namespace std;

struct persona{
	char nombre[20];
	int edad;
}p1;

void pedir_datos();
void mostrar_datos(persona);/*se indica que esta funcion va a usar los datos de tipo persona*/

int main(){
	cout<<"\n---------------Pasar parametros a una estructura---------------\n";

	pedir_datos();
	mostrar_datos(p1);

 	return 0;
}
void pedir_datos(){
	cout<<"Ingrese su nombre: ";
	cin.getline(p1.nombre,20,'\n');
	cout<<"Ingrese su edad: ";
	cin>>p1.edad;
}
void mostrar_datos(persona p){
	cout<<"\nNombre: "<<p.nombre<<endl;
	cout<<"\nEdad: "<<p.edad<<endl;
}