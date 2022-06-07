#include <iostream>
using namespace std;
/*
Hacer una función que reciba un caracter llamado valor_buscado y un vector de cadenas de caracteres y devuelva la cantidad de veces que el caracter buscado se encuentra en el vector.
*/
int valor_buscado(int vec[],int tam,int busc);
int main() {
    int tama;
    int buscar;
    int contador;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>tama;
    const int tam = tama;
    int vector[tam];
    for(int x = 0;x<tam;x++){
        cout<<"Ingrese el elemento N "<<x<<" del vector: ";
        cin>>vector[x];
    }
    cout<<"Ahora ingrese el valor que quiere saber cuantas veces esta: ";
    cin>>buscar;
    contador = valor_buscado(vector ,tam ,buscar);
    cout<<"El numero "<<buscar<<" se encuentra "<<contador<<" veces."<<endl;
    return 0;
}


int valor_buscado(int vec[], int tam, int busc){
    int contador = 0;
    for(int x = 0; x<tam;x++){
        if(vec[x] == busc){
            contador++;
        }
    }
    return contador;
}
