#include <iostream>
using namespace std;
/*
Hacer una función que reciba tres números enteros llamados dia, mes y hemisferio y una cadena de caracteres llamada estacion. Asignar el nombre de la estación del año de acuerdo al día y mes y dependiendo del hemisferio.
NOTA: Hemisferio será 0 → Sur y 1 → Norte.

*/
string det_estacion(int mes, int dia, int hemisferio);
int main() {
    int mes;
    int dia;
    int hemisferio;
    string estacion;
    cout<<"Indique el dia: ";
    cin>>dia;
    cout<<"Indique el mes: ";
    cin>>mes;
    cout<<"Ingrese el emisferio: (1 = norte | 0 = sur): ";
    cin>>hemisferio;

    estacion = det_estacion(mes, dia, hemisferio);
    cout<<"La estacion es: "<<estacion<<"."<<endl;
    return 0;
}

string det_estacion(int mes, int dia, int hemisferio){
    string estaciones[4] = {"verano", "otoño", "invierno", "primavera"};
    int det = mes/4;
    if(dia>=21 && mes%3==0){
        det++;
    }
    if(hemisferio == 1){
        det +=2;
        if(det>3){
            det-=4;
        }
    }
    return estaciones[det];
}
