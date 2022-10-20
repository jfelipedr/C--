/*Factorial de un numero con funciones recursivas, las que se llaman a ellas mismas
y tienen un caso base*/
#include<iostream>
using namespace std;

int factorial(int);
int n;

int main(){
	cout<<"\n---------------Factorial de un numero---------------\n";

	cout<<"\nIngrese el numero: ";
	cin>>n;
	cout << "\nEl resultado es: "<<factorial(n)<< '\n';
 	return 0;
}

int factorial(int n){
	if (n==0) {/*caso base de la funcion recursiva*/
		n=1;
	}
	else{
		n = n *factorial(n-1);
	}
	return n;
}