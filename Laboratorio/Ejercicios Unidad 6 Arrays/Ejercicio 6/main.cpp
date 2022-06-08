#include <iostream>
/*
Se ingresa por teclado un vector de 10 elementos todos distintos entre sí. Luego eliminar el valor máximo y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector

*/
using namespace std;
int main() {
    int vector[5];
    int repe = 0; // Este valor lo asigno para que pueda ingresar al do while
    int maxn;
    int cord_maxn;
    //Estructura para ingresar los 10 numeros
    for(int x = 0;x<5;x++){
        do{
        int repe = 0;
        cout<<"Caso "<<x<<" : ";
        cin>>vector[x];
        for(int y = x-1; y>=0;y--){
            if(vector[x] == vector[y] && x!=0){
                repe++;
            }
        }
        if(repe!=0){
            cout<<"Numero ya ingresado, ingrese otro..."<<endl;
        }
        }while(repe != 0);
    }

    //Estructura para encontrar el mayor numero y su coordenada
    for(int x = 0; x<5;x++){
        if(x == 0){
            maxn = vector[x];
            cord_maxn = x;
        }
        if(maxn<vector[x]){
            maxn = vector[x];
            cord_maxn = x;
        }

    }

    //Eliminacion del numero y reemplazo
    for (int x = 0;x<(5-cord_maxn);x++){
        vector[cord_maxn+x] = vector[cord_maxn+x+1];
    }
    vector[5] = 0;

    //Escritura de vector
    cout<<"Conjunto sin el mayor numero: ";
    for(int x = 0;x<4;x++){
        cout<<vector[x]<<" ";
    }

    return 0;
}
