/*Devolver dos valores o mas por medio del paso de parametros por referencia*/
#include <iostream>
using namespace std;

/*aqui se estan pasando 2 parametros por valor y otros 2 por referencia*/
void calculate(int, int, int&, int&);

int main(){
	int num1,num2, suma=0, mult=0;

	cout<<"Digite 2 numeros: ";
	cin>>num1>>num2;

	calculate(num1,num2,suma,mult);

	cout<<"El valor de la suma es: "<<suma<<endl;
	cout<<"El valor de la multiplicacion es: "<<mult<<endl;

	return 0;
}

/*Es decir que los primeros dos paramatros son una copia del valor de num1 y num2*/
void calculate(int num1, int num2, int& suma, int& mult){
	suma=num1+num2;/*estos son los valores que devuelve*/
	mult=num1*num2;/*la funcion, ya que lo hace por referencia*/
}
