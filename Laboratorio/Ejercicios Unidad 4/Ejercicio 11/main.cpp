#include <iostream>

using namespace std;
/*
El teatro Lara Rex presentará la obra "Ojo que se viene el primer parcial" en una única jornada. El mismo cuenta con 1200 butacas a un costo de $5000. Se pide un programa para poder ingresar todos los tickets vendidos para esta presentación. Por cada venta se registró:
Número de venta
Cantidad de butacas

La venta de tickets se finaliza con un número de venta igual a cero o bien cuando no se dispongan de más butacas para vender. Se pide calcular e informar:
El total recaudado.
La cantidad de butacas que quedaron sin vender.

*/
int main() {
    //Datos Principales
    int n_venta;
    int butacas = 0;
    int butacas_restantes = 1200;
    int flag_vuelta1 = 0;
    int total_recaudado = 0;
    int check_butacas;
    do{
        if(flag_vuelta1 != 0){
            check_butacas = 0;
            cout<<"Butacas vendidas: ";
            while(check_butacas == 0){
            cin>>butacas;
            if(butacas_restantes-butacas<0){
                cout<<"No hay suficientes butacas, compre menor cantidad: ";
            }
            else{
                check_butacas++;
            }
            }
            butacas_restantes-=butacas;

        }
        total_recaudado += (butacas*5000);
        if(butacas_restantes-butacas>=0 || flag_vuelta1 == 0){
        cout<<"Numero de venta: ";
        cin>>n_venta;
        flag_vuelta1++;
        }
    }while(n_venta != 0 && butacas_restantes>1);

        cout<<"El total recaudado fue de "<<total_recaudado<<"$"<<endl;
        if(butacas_restantes>1){
            cout<<"La cantidad de butacas restantes es de "<<butacas_restantes;
        }
        else if(butacas_restantes == 1){
            cout<<"Solo quedo una butaca restante";
        }
        else{
            cout<<"No quedaron butacas";
        }

    return 0;
}
