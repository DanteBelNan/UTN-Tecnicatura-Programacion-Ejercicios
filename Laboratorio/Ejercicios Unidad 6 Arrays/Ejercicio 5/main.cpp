#include <iostream>
using namespace std;
/*
Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega. Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores. Sólo deben utilizarse dos vectores en el programa: pos y nega.

*/
int main() {
    //Declaracion de variables
    int pos[10] = {};
    int nega[10] {};
    int num;
    //Funcion que llena los vectores nega y pos
    for(int x = 0;x<10;x++ ){
        cout<<"Vuelta "<<x<<" : ";
        cin>>num;
        if(num>0){
            pos[x] = num;
        }
        if(num<0){
            nega[x] = num;
        }
    }

    //Imprimir valores vector pos
    cout<<endl<<endl<<"Valores ingresados positivos: ";
    for(int x = 0; x<10;x++){
        if(pos[x] != 0){
            cout<<pos[x]<<" ";
        }
    }
    cout<<endl<<endl;
    //Imprimir valores vector neg
    cout<<"Valores ingresados negativos: ";
    for(int x = 0; x<10;x++){
        if(nega[x] != 0){
            cout<<nega[x]<<" ";
        }
    }
    return 0;
}
