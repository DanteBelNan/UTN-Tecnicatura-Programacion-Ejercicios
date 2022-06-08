#include <iostream>
/*
Hacer un programa que permita cargar un vector de 5 números enteros y otro vector de 10 números. Luego de cargarlos, generar un tercer vector llamado v_union que contenga los datos del primer vector y a continuación los datos del segundo vector.

*/
using namespace std;
int main() {
    int vector1[5];
    int vector2[10];
    int v_union[10][2];
    int condicion_cambia = 5;
    int num_vector;
    int x, y;

   //Ingreso de datos
    for(num_vector = 0; num_vector<5;num_vector++){
        cout<<"Ingrese el numero N"<<num_vector+1<<" del primer vector: ";
        cin>>vector1[num_vector];
    }
    for(num_vector = 0; num_vector<10;num_vector++){
        cout<<"Ingrese el numero N"<<num_vector+1<<" del segundo vector: ";
        cin>>vector2[num_vector];
    }


    //Combinacion de datos
    for(int y = 0;y<2;y++){
        if(y == 1){
                condicion_cambia = 10;
            }
        for(int x = 0;x<condicion_cambia;x++){
            if(y == 0){
            v_union[x][y] = vector1[x];
            }
            else{
            v_union[x][y] = vector2[x];
            }
        }
    }
    condicion_cambia = 5;

    //Salida de Datos.
    for(int y = 0; y<2; y++){
        if(y == 1){
            condicion_cambia = 10;
        }
        for(int x = 0; x<condicion_cambia;x++){
                cout<<v_union[x][y]<<" ";
        }

    }
    return 0;
}
