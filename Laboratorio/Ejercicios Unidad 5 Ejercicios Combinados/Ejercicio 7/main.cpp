#include <iostream>
using namespace std;
/*
Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor. Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}

*/
int main() {
    int vector[10];
    for(int x = 0 ; x<9 ; x++){
        int check_orden = 0;
        while(check_orden == 0){
        cout<<"Numero N"<<x+1<<" : ";
        cin>>vector[x];
            if(x == 0){
            check_orden++;
            }
                else{
                    if(vector[x]>vector[x-1]){
                    check_orden++;
                    }
                }
        if(check_orden == 0){
            cout<<"El conjunto tiene que ser ordenado, este valor no se puede ingresar"<<endl;
        }
        }
    }

    int num10;
    cout<<"Numero N10 : ";
    cin>>num10;
    int coord;
    vector[9] = num10;
    for(int x = 0; x<9; x++){
        if(vector[9]<vector[x]){
            for(int y = 8; y>=x; y = y - 1){
                vector[y+1] = vector[y];
                coord = x;
        }
        vector[coord] = num10;
        }
        if(num10>=vector[8]){
            vector[9] = num10;
        }
    }
    cout<<endl<<endl;
    for(int x = 0; x<10;x++){
        cout<<vector[x]<<" ";
    }
    return 0;
}
