#include <iostream>
using namespace std;
/*
El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de conciertos distribuidos en tres jornadas distintas. Se desea un programa que registre los artistas que participarán. Por cada artista se registró:
Número de artista (entero)
Integrantes (entero)
Jornada (1, 2 o 3)
Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio. La carga de datos se finaliza con un número de artista igual a cero. Calcular e informar:
El número de artista que realice el show más largo de la jornada 1.
La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
La jornada más extensa (en minutos).
Duración promedio de show por artista (se muestra un resultado).

*/
int main(){
    //Datos Basicos
    int num_artista;
    int integrantes;
    int flag_vuelta1 = 0;
    int jornada;
    int jornada_check = 0;
    int duracion;

    //Datos Ej1.
    int max_numart1;
    int max_duracion1;

    //Datos Ej2.
    int solos_j1 = 0;
    int solos_j2 = 0;
    int solos_j3 = 0;

    //Datos Ej3.
    int duracion_j1 = 0;
    int duracion_j2 = 0;
    int duracion_j3 = 0;
    int duracion_j;

    //Datos Ej4.
    float promedio;
    float duracion_total;

    do{
        if(flag_vuelta1>0){
            jornada_check = 0;
            cout<<"Cantidad de integrantes: ";
            cin>>integrantes;
            cout<<"Jornada: ";
            while(jornada_check == 0){
                cin>>jornada;
                if(jornada<1 || jornada>3){
                    cout<<"Jornada invalida, ingrese otra: ";
                }
                else {
                    jornada_check++;
                }
            }
            cout<<"Duracion (minutos): ";
            cin>>duracion;
            //Ejercicio 1, 2 y comienzo 3.
            switch(jornada){
            case 1:
            if(flag_vuelta1 == 1){
                max_numart1 = num_artista;
                max_duracion1 = duracion;
            }
            if(duracion>max_duracion1){
                max_numart1 = num_artista;
                max_duracion1 = duracion;
            }
            if(integrantes == 1){
            solos_j1++;
            }
            duracion_j1 += duracion;
            break;

            case 2:
            if(integrantes == 1){
            solos_j2++;
            }
            duracion_j2 += duracion;
            break;

            case 3:
            if(integrantes == 1){
            solos_j3++;
            }
            duracion_j3 += duracion;
            break;
        }
        //Ejercicio 3 final.
        if(duracion_j1 > duracion_j2 && duracion_j1 > duracion_j3){
            duracion_j = 1;
        }
        else if (duracion_j2 > duracion_j1 && duracion_j2 > duracion_j3){
            duracion_j = 2;
        }
        else {
            duracion_j = 3;
        }
        //Ejercicio 4.
        duracion_total = duracion_j1+duracion_j2+duracion_j3;
        promedio = duracion_total/flag_vuelta1;
        }
        cout<<"Numero de artista: ";
        cin>>num_artista;
        flag_vuelta1++;
    }while(num_artista!=0);

    cout<<"El artista que realizo el show mas largo fue el N"<<max_numart1<<endl;
    cout<<"En la jornada 1 hubieron "<<solos_j1<<" solistas"<<endl;
    cout<<"En la jornada 2 hubieron "<<solos_j2<<" solistas"<<endl;
    cout<<"En la jornada 3 hubieron "<<solos_j3<<" solistas"<<endl;
    cout<<"La jornada mas larga fue la N"<<duracion_j<<endl;
    cout<<"El promedio de duracion por show fue de "<<promedio<<" minutos"<<endl;
    return 0;
}
