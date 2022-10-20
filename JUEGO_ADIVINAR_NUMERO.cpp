#include <iostream>
#include <stdlib.h>//es necesaria para generar el numero aleatorio, si no da error en srand()
#include <time.h> /*Esta libreria permite usar la funcion time()*/
using namespace std;
int main(){
    int num, entrada, intentos=0;
    char continuar;

    srand(time(NULL));/* inicializa los numeros aleatorios para que cada vez
    que se ejecute el programa sea un numero aleatorio diferente*/

/*Ajustar el rango del num aleatorio:  variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
por ejemplo Numero aleatorios entre 250 y 420: num=250+rand()%(421-250);*/
    num=1+rand()%100;

    cout<<"\n----------------------Este es un juego de adivinar el numero entre 1 y 100----------------------\n";
//    cout<<num; //se inmprime el numero aleatorio para verificar el programa
    do {
        cout<<"\nEscriba el numero: "; cin>>entrada;
        if (num<entrada) {
            cout<<"\nEL NUMERO ES MENOR\n";
        }
        /*no se puede usar un else porque en caso de que num==entrada imprime la linea "numero mayor" y luego cierra el bucle*/
        if (num>entrada) {
            cout<<"\nEL NUMERO ES MAYOR\n";
        }
        intentos++;
    } while(num!=entrada);

    cout<<"\n----------------------ADIVINO EL NUMERO----------------------\n";
    cout<<"Numero de intentos: "<<intentos<<endl;

    do {
        cout<<"\nDesea continuar? y=Si n=NO "; cin>>continuar;

        if (continuar=='n'||continuar=='N') {
            break;
        }
        while (continuar=='y'||continuar=='Y') {
            srand(time(NULL));
            num=1+rand()%100;
            intentos=0;
//            cout<<num; //se inmprime el numero aleatorio para verificar el programa
            do {
                cout<<"\nEscriba el numero: "; cin>>entrada;
                if (num<entrada) {
                    cout<<"\nEL NUMERO ES MENOR\n";
                }
                if (num>entrada) {
                    cout<<"\nEL NUMERO ES MAYOR\n";
                }
                intentos++;
            } while(num!=entrada);
            cout<<"\n----------------------ADIVINO EL NUMERO----------------------\n";
            cout<<"Numero de intentos: "<<intentos<<endl;
            cout<<"\nDesea continuar? y=Si n=NO "; cin>>continuar;
        }
    } while(continuar!='n' && continuar!='y' && continuar!='N' && continuar!='Y');

    return 0;
}
