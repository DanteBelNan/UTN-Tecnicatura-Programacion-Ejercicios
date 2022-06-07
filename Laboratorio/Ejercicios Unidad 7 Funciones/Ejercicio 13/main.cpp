#include <iostream>
using namespace std;
/*
Hacer una función que reciba un número entero de hasta 5 cifras y un vector de enteros de cinco elementos y descomponga las cifras del número y las asigne a cada elemento del vector. Por ejemplo:
Si recibe 45323 como parámetro, el vector quedará {4, 5, 3, 2, 3}
Si recibe 390 como parámetro, el vector quedará {0, 0, 3, 9, 0}

*/
int descomponer_num(int x);
int main(){
    int n;
    int check_n = 0;
    cout<<"Ingrese el numero a descomponer: ";
    while(check_n == 0){
        cin>>n;
        if(n-99999>0){
            cout<<"El numero no puede ser mayor a 5 cifras, ingrese otro..."<<endl;
        }
        else{
            check_n++;
        }
    }
    cout<<"El numero descompuesto es: "<<endl;
    descomponer_num(n);
}


int descomponer_num(int x){
    int num[5] = {};
    int contador = 0;
    int resta;
    for(int y = 0;y<5;y++){
        cout<<num[x]<<" ";
    }
    cout<<endl<<endl;
    while(x-10000>1000){
        contador++;
        x -= 10000;
        cout<<num[4]<<" ";
        num[4] = contador;
    }
    contador = 0;

    while(x-1000>100){
        contador++;
        x -= 1000;
        num[3] = contador;
    }
    contador = 0;

    while(x-100>10){
        contador++;
        x -= 100;
        num[2] = contador;
    }
    contador = 0;

    while(x-10>0){
        contador++;
        x -= 10;
        num[1] = contador;
    }
    contador = 0;

    while(x-1>=0){
        contador++;
        x -= 1;
         num[0] = contador;
    }

    for(int y = 4;y>=0;y--){
        cout<<num[y]<<" ";
    }
}
