#include <iostream>
/*
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
Numero de Entrenamiento (1 - 9999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada. El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
Por cada cliente, los tipos de entrenamiento que realizó.
Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
El número de cliente que más tiempo haya entrenado.
Los tipos de entrenamiento que no se realizaron por ningún cliente.

*/
using namespace std;
int main() {
    //Datos Principales.
    int cliente;
    int check_cliente = 0;
    int num_entrenamiento = 0;
    int check_num_entrenamiento = 0;
    int tipo_entrenamiento;
    int check_tipo_entrenamiento = 0;
    int tiempo_entrenamiento;

    //Ej 1.
    int tiempo_cliente[50][2] = {}; //Primera fila columna representa hs, segunda mins.

    //Ej 2 y 3.
    int tipo_entrenamiento_cliente[50][10][2] = {};

    //Ej 4.
    int num_cliente_max_tiempo;
    int max_tiempo;
    int flag_max_tiempo = 0;

    //Ej 5.
    int entrenamientos_hechos[10] = {};

    do{
        check_cliente = 0;
        check_num_entrenamiento = 0;
        check_tipo_entrenamiento = 0;
        if(num_entrenamiento!=0){

            while(check_cliente == 0){
            cout<<"Cliente N°: ";
            cin>>cliente;
            if(cliente>100 && cliente<151){
                check_cliente++;
            }
            else{
                cout<<"Numero de cliente no valido, ingrese otro..."<<endl;
            }
            }

            while(check_tipo_entrenamiento == 0){
            cout<<"Tipo de entrenamiento (1-10): ";
            cin>>tipo_entrenamiento;
            if(tipo_entrenamiento>0 && tipo_entrenamiento<10){
                check_tipo_entrenamiento++;
            }
            else{
                cout<<"Tipo de entrenamiento no valido, ingrese otro..."<<endl;
            }
            }

            cout<<"Tiempo de entrenamiento (mins) : ";
            cin>>tiempo_entrenamiento;

            //Ej 1
            int horas = tiempo_entrenamiento/60;
            tiempo_cliente[cliente-101][0] += horas; //Horas
            tiempo_cliente[cliente-101][1] += tiempo_entrenamiento-(horas*60); // minutos

            if(tiempo_cliente[cliente-101][1]>=60){
                tiempo_cliente[cliente-101][0]++;
                tiempo_cliente[cliente-101][1] -=60;
            }


            //Ej 2
            tipo_entrenamiento_cliente[cliente-101][tipo_entrenamiento-1][0] = 1; // El 0 de la tercer dimension, abarca si existe, y el 1, los minutos
            tipo_entrenamiento_cliente[cliente-101][tipo_entrenamiento-1][1] +=tiempo_entrenamiento; // minutos


            //Ej 4
            if(flag_max_tiempo == 0){
                max_tiempo == tiempo_entrenamiento;
                num_cliente_max_tiempo = cliente;
                flag_max_tiempo++;
            }
            if(tiempo_entrenamiento>max_tiempo){
                max_tiempo == tiempo_entrenamiento;
                num_cliente_max_tiempo = cliente;
            }

            //Ej 5
            entrenamientos_hechos[tipo_entrenamiento-1] = 1;
        }
        while(check_num_entrenamiento == 0){
        cout<<"Numero de entrenamiento (1-9999): ";
        cin>>num_entrenamiento;
        if (num_entrenamiento>=0 && num_entrenamiento<10000){
            check_num_entrenamiento++;
        }
        else{
            cout<<"Numero de entrenamiento no valido, ingrese otro..."<<endl;
        }
    }
    }while(num_entrenamiento != 0);

    //Salida de datos
    while(num_entrenamiento == 0){
        int salida_cliente;
        int check_salida_cliente = 0;
        cout<<"Ejercicios 1, 2 y 3:"<<endl;
        while(check_salida_cliente == 0){
        cout<<"Ingrese el cliente que desea ver: ";
        cin>>salida_cliente;
        if(salida_cliente>100 && salida_cliente<151){
            check_salida_cliente++;
        }
        else{
            cout<<"Numero de cliente no existente, ingrese otro..."<<endl;
        }
        }

        //Ej 1, 2 y 3.
        cout<<endl<<"Cliente: "<<salida_cliente<<endl;

        //Ej 1.
        cout<<"Entreno ";
        cout<<tiempo_cliente[salida_cliente-101][0]<<" horas y ";
        cout<<tiempo_cliente[salida_cliente-101][1]<<" minutos.";
        cout<<endl<<endl;

        //Ej 2 y 3.

        cout<<"Entrenamientos realizados:"<<endl;
        for(int x = 0; x<10;x++){
            if(tipo_entrenamiento_cliente[salida_cliente-101][x][0] == 1){
                cout<<x+1<<": Tiempo entrenado en ese ejercicio:";
                cout<<tipo_entrenamiento_cliente[salida_cliente-101][x][1]<<" minutos."<<endl;;
            }
        }
        cout<<endl<<endl;
        cout<<"Desea revisar los datos de otro cliente? (0 = SI| CUALQUIER OTRO NUMERO = NO)"<<endl;
        cin>>num_entrenamiento;
    }
        //Ej 4.
        cout<<"El cliente que mas tiempo entreno fue el N"<< num_cliente_max_tiempo;
        cout<<endl<<endl;
        //Ej 5.
        cout<<"Los entrenamientos no realizados por ningun cliente fueron los N:"<<endl;
        for(int x = 0;x<10;x++){
            if(entrenamientos_hechos[x] == 0){
                cout<<"Entrenamiento "<<x+1<<endl;
            }
        }
    return 0;
}
