/*ahora se puede cambiar el nombre del archivo y su contenido*/
#include <iostream>
#include <stdlib.h>//para usar el exit()
#include <fstream>//libreria para file stream

using namespace std;

void write();

int main()
{
    write();

    return 0;
}

void write()
{
    ofstream archivo;

    string archivo_name;//variable para crear el nombre del archivo
    cout<<"Write file name: ";
    getline(cin,archivo_name);/*se usa getline y no cin.getline porque se va a guardar
    una variable tipo string y no tipo char*/
    /*el primer parametro de getline() indica que de va a guardar, el segundo el lugar*/
//si archivo_name = C:/Users/IntelPC/Desktop/prueba.txt el archivo se guardaria en
//esa ubicacion

    archivo.open(archivo_name.c_str(),ios::out);
/*archivo_name.c_str() se usa la funcion .c_str() para pasar de string a un parametro que
la funcion .open() pueda aceptar y guarde el nombre del archivo*/

    if (archivo.fail())
    {
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

	cout<<"Type 3 fruits"<<endl;
	int loop_counter = 0;
	while (loop_counter<3)
	{
		cout<<"Fruit "<<loop_counter+1<<" : ";
		string fruit;
		cin>>fruit;
		archivo<<fruit;
		archivo<<"\n";
		loop_counter++;
	}
/*otra forma de guardar texto en el archivo
	string frase;
	cout<<"\nWrite file text: ";
	getline(cin,frase);
	archivo<<frase;
*/

	archivo.close();
}