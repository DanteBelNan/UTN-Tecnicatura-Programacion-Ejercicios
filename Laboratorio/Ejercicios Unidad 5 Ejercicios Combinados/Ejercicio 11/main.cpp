#include <iostream>
/*
Una empresa que fabrica pantalones nos encargó procesar los resultados de una encuesta realizada a la población con referencia a la predilección de color de los pantalones ('N'=negro, 'A'=azul, 'B'=blanco, 'O'=otros).
Para ello se ingresan los siguiente datos para cada encuesta efectuada:
- Edad del encuestado (entre 1 y 99)
- Color elegido (N, A, B, O)
- Sexo(M o F)

El fin del lote se indica con un registro con edad igual a cero. Se pide determinar e informar:
El color más votado entre las mujeres.
Por cada década de edad, la cantidad de encuestados.

Década     Edad
0           1-9
1         10-19
2         20-29
…          …
9         90-99
*/
using namespace std;
int main() {
    char color;
    char colores[4] = {'N' , 'A' , 'B', 'O'};
    int flag_color = 0;
    int color_mas_votado_f[4] = {};
    int edad = 0;
    int flag_edad = 0;
    int cant_votos_decada[10] = {};
    char sexo;
    int flag_sexo = 0;

    do{
        if(edad!=0){
            flag_color = 0;
            flag_sexo = 0;
            flag_edad = 0;
            cout<<"Ingrese el color (N = negro | A = azul | B = blanco | O = otros): ";
            while(flag_color == 0){
            cin>>color;
            for(int x = 0; x<4;x++){
                if(color == colores[x]){
                    flag_color++;
                }
            }
            if(flag_color == 0){
                cout<<"La opcion "<<color<<" no es valida, ingrese otra..."<<endl;
            }
            }
            cout<<"Ingrese su sexo (M = Masculino | F = Femenino): ";
            while(flag_sexo == 0){
            cin>>sexo;
            if(sexo == 'M' || sexo == 'F'){
                flag_sexo++;
            }
            else{
                cout<<"El sexo "<<sexo<<" no es valido en este sistema, porfavor ingrese uno de los indicados previamente..."<<endl;
            }
            }
            //Ej 1.
            if(sexo=='F'){
            switch(color){
                case 'N':
                color_mas_votado_f[0]++;
                break;

                case 'A':
                color_mas_votado_f[1]++;
                break;

                case 'B':
                color_mas_votado_f[2]++;
                break;

                case 'O':
                color_mas_votado_f[3]++;
                break;
            }
            }

            //Ej 2.
            for(int x = 0;x<10;x++){
                if(edad-(x*10)>0 && edad-(x*10)<10){
                    cant_votos_decada[x]++;
                    x = 9; //Esto lo hago para cortar el ciclo, y que no de vueltas innecesarias
                }
            }
        }
        cout<<"Ingrese su edad: ";
        while(flag_edad == 0){
        cin>>edad;
        if(edad>=0 && edad<100){
            flag_edad++;
        }
        else{
            cout<<"Esa edad no es valida, porfavor escoja una entre 1 y 99"<<endl;
        }
        }
        cout<<endl;
    }while(edad!=0);

    cout<<"Ej 1: ";
    for(int x = 0;x<4;x++){
        switch(x){
            case 0:
            cout<<"La cantidad de mujeres que votaron el color negro fue de ";
            break;

            case 1:
            cout<<"La cantidad de mujeres que votaron el color azul fue de ";
            break;

            case 2:
            cout<<"La cantidad de mujeres que votaron el color blanco fue de ";
            break;

            case 3:
            cout<<"La cantidad de mujeres que votaron otro color fue de ";
            break;
        }
        cout<<color_mas_votado_f[x]<<endl;
    }

    cout<<endl<<"Ej 2: ";
    for(int x = 0; x<10;x++){
        cout<<"La cantidad de encuestados entre las edades "<<(x*10)+1<<" y "<<(x*10)+10<<" es de "<<cant_votos_decada[x]<<endl;
    }

    return 0;
}
