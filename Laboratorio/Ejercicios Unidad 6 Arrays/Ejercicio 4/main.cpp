#include <iostream>
/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registr� el n�mero de venta, el n�mero de d�a y el importe de la venta. El fin de la carga de datos se indica con n�mero de venta igual a 0.
Se pide calcular e informar:
Por cada d�a, la recaudaci�n total (s�lo de aquellos d�as que tuvieron recaudaci�n).
El n�mero de d�a que m�s se recaud� en total y cu�l fue la recaudaci�n m�xima.

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
