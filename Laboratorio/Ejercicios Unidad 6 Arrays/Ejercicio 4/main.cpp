#include <iostream>
/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta. El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.

*/
using namespace std;
int main() {
    double rec_mes[31] = {0};
    int dia_max_importe;
    int max_importe;
    int num_venta;
    int importe;
    int dia;
    int flag = 0;
    do{
        cout<<"Dia: ";
        cin>>dia;
        cout<<"Numero de venta: ";
        cin>>num_venta;
        if(num_venta != 0){ //Esto esta para cerrar el ciclo directamente cuando valga 0 el numero de venta
        cout<<"Importe: ";
        cin>>importe;
        if(flag == 0){
            max_importe = importe;
            dia_max_importe = dia;
            flag++;
        }
        if(max_importe<importe){
            max_importe = importe;
            dia_max_importe = dia;
        }
        rec_mes[dia] += importe;
        }
    }while(num_venta !=0);
    for(int x = 0; x<31;x++){
        if(rec_mes[x] != 0){
            cout<<"El dia "<<x<<" se recaudo un total de "<<rec_mes[x]<<endl;
        }
    }
    cout<<endl<<"El dia que mas se obtuvo el importe mas alto fue el dia N "<<dia_max_importe<<endl;
    return 0;
}
