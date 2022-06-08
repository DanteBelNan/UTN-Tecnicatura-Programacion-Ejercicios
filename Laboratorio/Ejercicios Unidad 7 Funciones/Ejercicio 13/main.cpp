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
    int contador[5] = {};
    int resta;
    cout<<endl<<endl;
    //Contador cifras
    while(x-10000>1000){//Cifra DecMil
        contador[4]++;
        x -= 10000;
    }

    while(x-1000>=100){//Cifra Mil
        contador[3]++;
        x -= 1000;
    }

    while(x-100>=10){ //Cifra Cent
        contador[2]++;
        x -= 100;
    }

    while(x-10>=0){//Cifra Dec
        contador[1]++;
        x -= 10;
    }

    while(x-1>=0){//Cifra Unid
        contador[0]++;
        x -= 1;
    }

   //Esto presenta un error, que cuando se ingresa un numero N seguido de un 0, el digito de cifra superior se le resta uno, y el digito actual queda en 10

  //Solucion:
  for(int x=0;x<4;x++){
      if(contador[x] == 10){
          contador[x] = 0;
          contador[x+1]++;
      }
  }

   //Escritura en digitos
   for(int x = 4;x>=0;x--){
       num[x] = contador[x];
   }
   //Salida de Datos
    for(int y = 4;y>=0;y--){
        cout<<num[y]<<" ";
    }
}
