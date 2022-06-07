#include <iostream>
using namespace std;
/*
Publicar en la cafetería del campus virtual la cantidad de números entre el 1 y 99999 que tienen más 3 que 4 pero que al menos tenga un 4 y ningún 5.
*/
void numero_ejercicio(void);
int dig_5(int x);
int dig_4(int x, int digi5);
int dig_3(int x, int digi4, int digi5);
int dig_2(int x, int digi3, int digi4, int digi5);
int dig_1(int x, int digi2, int digi3, int digi4, int digi5);

int main() {

    numero_ejercicio();
    return 0;
}

int dig_5(int x){
    x = x/10000;
    return x;
}
int dig_4(int x, int dig5){
    x = x-dig5*10000;
    x = x/1000;
    return x;
}

int dig_3(int x, int dig4, int dig5){
    x-= dig5*10000;
    x-= dig4*1000;
    x = x/100;
    return x;
}

int dig_2(int x, int dig3, int dig4, int dig5){
    x-= dig5*10000;
    x-= dig4*1000;
    x-= dig3*100;
    x = x/10;
    return x;
}

int dig_1(int x, int dig2, int dig3, int dig4, int dig5){
    x-= dig5*10000;
    x-= dig4*1000;
    x-= dig3*100;
    x-= dig2*10;
    return x;
}


void numero_ejercicio(void){
    int contador3 = 0;
    int contador4 = 0;
    int contador5 = 0;
    int contador = 0;
        for(int x = 1; x<100000;x++){
        contador3 = 0;
        contador4 = 0;
        contador5 = 0;
        int vec[5] = {};
        vec[4] = dig_5(x);
        vec[3] = dig_4(x, vec[4]);
        vec[2] = dig_3(x, vec[3], vec[4]);
        vec[1] = dig_2(x, vec[2], vec[3], vec[4]);
        vec[0] = dig_1(x, vec[1], vec[2], vec[3], vec[4]);

        for(int x = 4;x>=0;x--){
           if(vec[x] == 3){
            contador3++;
           }
           if(vec[x] == 4){
            contador4++;
           }
           if(vec[x] == 5){
            contador5++;
           }
        }

        if(contador3>contador4 && contador4>0 && contador5==0){
                cout<<"|";
            for(int x = 4;x>=0;x--){
                cout<<" "<<vec[x]<<"  ";
            }
                cout<<"|"<<endl;
                contador++;
        }
        }
        cout<<contador<<endl;


}
