/*Funcion strlen() para obtener la longitud de una cadena*/
#include <iostream>
#include <string.h>//libreria para cadena de caracteres
using namespace std;
int main(){
    char word[]="hello";
    int length=0;/*La funcion strlen() devuelve un numero entero por eso es necesario esta variable*/

    length=strlen(word);// dentro de la funcion esta la variable que se quiere analizar
    cout<<"Numero de elementos de la cadena: "<<length;

    return 0;
}

/*Funcion strcpy() para copiar una cadena*/
#include <iostream>
#include <string.h>//libreria para cadena de caracteres
using namespace std;
int main(){
    char origin[]="hello";
    char destiny[10];

    strcpy(destiny,origin);/*se ingresa la palabra de destino y despues la de origen*/

    cout<<origin<<" & "<<destiny;

    return 0;
}