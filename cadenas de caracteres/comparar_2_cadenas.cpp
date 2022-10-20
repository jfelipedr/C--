/*Comprar dos cadenas ingresadas por el usuario*/
/*Como las cadenas tambien puede ALMACENAR NUMEROS se puede compara que numero es mayor o igual a otro
con la funcion strcmp()*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char cadena1[100];
    char cadena2[100];

    cout<<"\nDigite una palabra: ";
    cin.getline(cadena1,100,'\n');
    cout<<"\nDigite otra palabra: ";
    cin.getline(cadena2,100,'\n');

    if(strcmp(cadena1,cadena2)==0){
        cout<<"Las palabras son iguales.";
    }
    if(strcmp(cadena1,cadena2)>0){
        cout<<"La palabra "<<cadena1<<" es mayor que: "<<cadena2<<endl;
    }
    if(strcmp(cadena1,cadena2)<0){
        cout<<"La palabra "<<cadena2<<" es mayor que: "<<cadena1<<endl;
    }

 return 0;
}