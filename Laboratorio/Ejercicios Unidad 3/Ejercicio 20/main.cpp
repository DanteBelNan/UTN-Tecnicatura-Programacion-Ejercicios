#include <iostream>

using namespace std;

int main() {
    /*
    Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
        Número de partido
        Minutos jugados
        Tarjetas amarillas
        Tarjetas rojas
        Goles

        Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
       1) La cantidad de partidos que no jugó (partidos con minutos igual a cero)
        2) La cantidad de partidos que jugó por completo (minutos >= 90)
       3) El promedio de tarjetas recibidas por partido.
       4) El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
       5) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.


    */


    //Datos Basicos
    int partidos = 5;
    int partido;
    int minutos_jugados;
    float tarjetas_amarillas;
    float tarjetas_rojas;
    int goles;

    //Datos Ejercicio 1 y 2.
    int partidos_ausente = 0;
    int partidos_completos = 0;

    //Datos Ejercicio 3.
    float total_tarjetas = 0;
    float promedio_tarjetas;

    //Datos Ejercicio 4.
    int partido_max_goles;
    int max_goles;
    int flag_max_goles = 0;

    //Datos Ejercicio 5.
    bool partido_pasado = true;
    bool partido_actual = true;
    int racha_goles = 0;
    int max_racha = 0;

    for (partido = 1; partido<=partidos ; partido++){
        cout<<"Partido N: "<<partido<<endl;
        cout<<"Minutos Jugados: ";
        cin>>minutos_jugados;
        cout<<"Tarjetas Amarillas: ";
        cin>>tarjetas_amarillas;
        cout<<"Tarjetas Rojas: ";
        cin>>tarjetas_rojas;
        cout<<"Goles: ";
        cin>>goles;

        //Ejercicio 1 y 2.
        if(minutos_jugados < 1){
            partidos_ausente++;
        }
        if(minutos_jugados>= 90){
            partidos_completos++;
        }

        //Ejercicio 3.
        total_tarjetas = total_tarjetas + tarjetas_amarillas + tarjetas_rojas;
        promedio_tarjetas = total_tarjetas/partidos;

        //Ejercicio 4.
        if(flag_max_goles == 0){
            partido_max_goles = partido;
            max_goles = goles;
            flag_max_goles++;
        }
        if(goles>max_goles){
            partido_max_goles = partido;
            max_goles = goles;
        }

        //Ejercicio 5.
        if(goles>0){
            partido_actual = true;
        }
        else{
            partido_actual = false;
        }
        if(partido_actual == true && partido_pasado == true){
            racha_goles++;
        }
        else {
            racha_goles = 0;
        }
        if(racha_goles>max_racha){
            max_racha = racha_goles;
        }
        partido_pasado == partido_actual;

    }
    //Salida Ejercicio 1 y 2.
    cout<<"Diego estuvo ausente en "<<partidos_ausente<<" partidos."<<endl;
    cout<<"Diego jugo completo una cantidad de "<<partidos_completos<<" partidos."<<endl;
    //Salida Ejercicio 3.
    cout<<"Diego tuvo en promedio "<<promedio_tarjetas<<" tarjetas por partido."<<endl;
    //Salida Ejercicio 4.
    cout<<"El partido en el que mas goles hizo fue el N"<<partido_max_goles<<endl;
    cout<<"Y fue con "<<max_goles<<" goles."<<endl;
    //Salida Ejercicio 5.
    cout<<"La mayor cantidad de partidos consecutivos con goles de diego fue de "<<max_racha;
    return 0;
}
