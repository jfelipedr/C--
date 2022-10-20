/*Pasar parametros por referencia
Se puede pasar valores de una variable indicando la direeccion de memoria en donde
esta almacenada el valor que al que queremos acceder, es decir si ya hay una variable creada
con un valor definido podemos indicar a otras funciones que requieran conocer ese valor en que espacio
de memoria esta almacenado*/
#include <iostream>
using namespace std;

void new_valor(int&, int&);/*como estamos indicando paso por referencia solo se indica
							que la funcion new_valor tiene dos parametros en este caso "int"*/

int main(){
	int num1,num2;

	cout<<"Digite 2 numeros: ";
	cin>>num1>>num2;

	new_valor(num1,num2);

	cout<<"El NUEVO valor del primer numero es: "<<num1<<endl;
	cout<<"El NUEVO valor del segundo numero es: "<<num2<<endl;

	return 0;
}

/*Se define que el tipo de valor es int, y al usar el "&" se indica que revise la direccion de*/
void new_valor(int& xnum, int& ynum){
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;

	xnum=25;/*tambien se pueden cambiar los valores*/
	ynum=79;
}
