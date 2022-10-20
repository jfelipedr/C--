/*ejemplo: z1=5-3i  z2=-4+2i
z1+z2 = (5-4) + (-3i + 2i)
z1+z2 =	1 - i */
#include<iostream>
using namespace std;

struct complejos{
	float real,imaginaria;
}z1,z2;

void pedir_datos();
complejos suma(complejos,complejos);/*se define esta funcion porque el retorno es tipo estructuras
									es decir es una funcino de tipo complejo*/
void mostrar(complejos);

int main(){
	cout<<"\n---------------Sumar numeros complejos---------------\n";

	pedir_datos();
	complejos x=suma(z1,z2);/*esta variable se declara aca porque primero se piden los datos que va a contener,
							si se declara antes de pedir datos no se van a almacenar*/
	mostrar(x);
 	return 0;
}

void pedir_datos(){
	cout<<"\nIngrese datos del primer complejo:"<<endl;
	cout<<"Parte real: ";
	cin>>z1.real;
	cout<<"Parte imaginaria: ";
	cin>>z1.imaginaria;

	cout<<"\nIngrese datos del segundo complejo:"<<endl;
	cout<<"Parte real: ";
	cin>>z2.real;
	cout<<"Parte imaginaria: ";
	cin>>z2.imaginaria;
}
complejos suma(complejos z1,complejos z2){
	z1.real+=z2.real;
	z1.imaginaria+=z2.imaginaria;

	return z1;
}
void mostrar(complejos x){
	cout<<"\nRedultado de la suma: "<<x.real<<","<<x.imaginaria<<endl;
}
