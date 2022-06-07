#include <iostream>
using namespace std;
/*Hacer una función que reciba un vector de cadena de caracteres y devuelva la cantidad de caracteres del mismo hasta el '\0'.
Asumir que el vector dispone de un '\0'. */

int cant_caracteres(string vec);

int main()
{

    string vec;
    cin>>vec;
    int cant_car = cant_caracteres(vec);
    cout<<"La posicion es: "<<cant_car;
    return 0;
}

int cant_caracteres(string vec){
    int cont;
    int x;
    int tam = sizeof(vec);
    for(x = 0; x<tam; x++){
        if(vec[x] == '\0'){
            cont = x;
            x = tam; // cierra ciclo for.
        }
    }
    return cont;
}
