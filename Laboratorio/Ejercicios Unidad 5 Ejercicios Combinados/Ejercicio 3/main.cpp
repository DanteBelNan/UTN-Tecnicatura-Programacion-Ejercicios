#include <iostream>
/*
Una empresa tiene 50 empleados que trabajaron durante 7 días hábiles. Se confecciona una serie de registros con el objeto de controlar la asistencia de sus empleados. Hay un primer registro por empleado que contiene:
- Nro. de Legajo
- Cantidad de horas teóricas a trabajar por semana

A continuación de este registro, siete registros más, uno por cada uno de los 7 días con los siguientes datos:
- Hora de entrada (entero)
- Hora de salida (entero)

El día que falta el empleado se ingresa cero en la hora de entrada y salida respectivamente.

Después de estos siete registros aparece nuevamente un registro de otro empleado seguido por los registros de los días trabajados por este último y así hasta el último empleado.

Realizar un programa que ingresando los datos indicados determine e informe:
a) Los nros. de legajo de los empleados que faltaron algún día en la semana.
b) Para cada empleado indicar con una leyenda aclaratoria si trabajó de más, igual o de menos a las horas teóricas que tiene asignadas en la semana.

*/
using namespace std;

int main()
{
    //Datos Principales
    int empleados = 2;
    int empleado;
    int dias = 1;
    int dia;
    int num_legajo;
    int horas_semanales;
    int hora_entrada;
    int hora_salida;
    int faltas = 0;

    //Datos Ejercicio A.
    int legajo_faltas[empleados]; //Esto podria evitarlo, pero sirve para que quede ordenado a la hora de sacar los datos.
    int flag_faltas;

    //Datos Ejercicio B.
    int horas_trabajadas; // horas_trabajadas = hora_salida-hora_entrada;
    int horas_trabajadas_semana;

    for(empleado = 1; empleado<=empleados;empleado++){
        cout<<"Numero de Legajo del empleado: ";
        cin>>num_legajo;
        cout<<"Cantidad de horas que deberia trabajar esta semana: ";
        cin>>horas_semanales;
        flag_faltas = 0; //Dato Ej A.
        horas_trabajadas_semana = 0; //Dato Ej B.
        for(dia = 1; dia<=dias;dia++){
            cout<<endl<<"Datos del dia "<<dia<<endl;
            cout<<"Horario en el que entro: ";
            cin>>hora_entrada;
            cout<<"Horario en el que salio; ";
            cin>>hora_salida;

            //Ejercicio A.
            if(hora_entrada == 0 && hora_salida == 0){
                if(flag_faltas == 0)
                legajo_faltas[faltas] = num_legajo;
                flag_faltas++;
                faltas++;
            }

            //Ejercicio B.
            horas_trabajadas = hora_salida-hora_entrada;
            horas_trabajadas_semana += horas_trabajadas;
        }
        if(horas_trabajadas_semana > horas_semanales && horas_trabajadas_semana != 0){
            cout<<"Trabajo horas extras"<<endl<<endl;
        }
        else if(horas_trabajadas_semana < horas_semanales && horas_trabajadas_semana != 0){
            cout<<"Le falto trabajar horas"<<endl<<endl;
        }
        else if(horas_trabajadas_semana == horas_semanales && horas_trabajadas_semana != 0){
            cout<<"Trabajo las horas justas"<<endl<<endl;
        }
    }
    //Salida Ejercicios.

    //A.
    for(int x = 0; x<faltas;x++){
        cout<<"El empleado con legajo N "<<legajo_faltas[x]<<" falto almenos una vez en la semana"<<endl;
    }



    return 0;
}
