#include <iostream>
/*
LaraRaffle es el sorteo m�s importante de Argentina. Se dispone de 100 n�meros entre el 0 y el 99 que los participantes pueden elegir para su compra. Cada n�mero tiene un costo de $500. Entrega un premio al ganador de $30000 y al segundo ganador de $5000.
Nos solicitan un programa que permita cargar los n�meros comprados por los participantes. El programa no debe permitir comprar m�s de una vez un n�mero ya vendido. El fin de carga de informaci�n se indica con n�mero igual a -1.

Luego, sortear dos n�meros al azar entre 0 y 99 e informar:
Total recaudado en concepto de compra de n�meros.
Ganancia neta o p�rdida del Sr Lara.
El porcentaje de n�meros no vendidos con respecto al total.
N�mero ganador del primer premio y n�mero ganador del segundo premio (no pueden ser el mismo n�mero). E indicar si esos n�meros se vendieron o no.

*/
using namespace std;
int main() {

    //Datos Principales
    const int cant_boletos = 100;
    int boletos[cant_boletos] = {};
    int boleto_compra = -1;
    int check_boleto = 0;

    //Datos Ej 1.
    const int precio_boleto = 500;
    int recaudado = 0;

    //Datos Ej 2.
    int premios[2][2] = {{30000,5000} , {0,0}};
    int neto = 0;

    //Datos Ej 3.
    double cant_vendidos = 0;
    double porc_vendidos = cant_vendidos/cant_boletos*100;

    //Datos Ej 4.

    //Numeros Ganadores.
    const int premio1 = 59;
    const int premio2 = 32;
    do{
        check_boleto = 0;
        if(boleto_compra!= -1){
            recaudado +=500;
            //Ej 2.
            neto += 500;
            //Ej 3.
            cant_vendidos++;
            porc_vendidos = cant_vendidos/cant_boletos*100;
            }
        while(check_boleto == 0){
            cout<<"Ingrese el boleto que quiere comprar (del 0 al 99):";
            cin>>boleto_compra;
            if(boleto_compra>=-1 && boleto_compra<100 && boletos[boleto_compra]==0){
                boletos[boleto_compra] = 1;
                check_boleto++;

            }
            else{
                cout<<"Este boleto ya esta comprado, ingrese otro."<<endl;
            }

        }


    }while(boleto_compra!=-1);
    //Ej 4.
    if(boletos[premio1] == 1){
            premios[1][0] = 1;
            recaudado+= premios[0][0];
            neto -= premios[0][0];
        }
        if(boletos[premio2] == 1){
            premios[1][1] = 1;
            neto -= premios[0][1];
        }

        cout<<endl<<"Ej 1: "<<endl;
        cout<<"En total se recaudaron $"<<recaudado<<endl;

        cout<<endl<<"Ej2: "<<endl;
        cout<<"El resultado neto fue de  $"<<neto<<endl;

        cout<<endl<<"Ej3: "<<endl;
        cout<<"El porcentaje de boletos vendidos fue de "<<porc_vendidos<<"%"<<endl;

        cout<<endl<<"Ej4:"<<endl;
        cout<<"El primer ganador es el boleto N"<<premio1<<" y el segundo el N"<<premio2<<endl;
        if(premios[1][0] == 1){
            cout<<"El primer premio salio en los boletos."<<endl;
        }
        if(premios[1][1] == 1){
            cout<<"El segundo premio salio en los boletos."<<endl;
        }

    return 0;
}
