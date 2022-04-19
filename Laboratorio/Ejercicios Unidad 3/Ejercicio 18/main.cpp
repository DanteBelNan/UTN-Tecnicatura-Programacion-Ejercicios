#include <iostream>

using namespace std;

int main()
{
    /*
    La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada.
    Por cada movimiento se registró:
    Número de movimiento
    Día
    Tipo ('E' - Extracción / 'D' - Depósito)
    Importe

    Existe un registro por movimiento. Se desea calcular e informar:
    El saldo final de la cuenta.
    El porcentaje de movimientos de extracción y el porcentaje de depósito.
    El depósito de mayor importe indicando también día y número de movimiento.
    La cantidad de movimientos del día 10.
    */

    //Datos Basicos
    int dia;
    char tipo;
    int num_movimiento;
    int importe;

    //Ejercicio 1 Datos
    int saldo = 0;

    //Ejercicio 2 Datos
    float cant_extraccion = 0;
    float cant_deposito = 0;
    float cant_movimientos = 5;
    float porc_extraccion;
    float porc_deposito;
    //Ejercicio 3 Datos
    int max_deposito;
    int flag_max_deposito = 0;
    int dia_max_deposito;
    int movimiento_max_deposito;

    //Ejercicio 4 Datos
    int movimiento_dia10 = 0;

    //Programa
    for(num_movimiento = 1; num_movimiento<=cant_movimientos; num_movimiento++){
        cout<<"Numero de movimiento: "<<num_movimiento<<endl;
        cout<<"Dia: ";
        cin>>dia;
        cout<<"Tipo de movimiento: ";
        cin>>tipo;
        cout<<"Importe: ";
        cin>>importe;
        //Ejercicio 1 y 2
        switch(tipo){
            case 'D':
            saldo += importe;
            cant_deposito++;
            break;

            case 'd':
            saldo += importe;
            cant_deposito++;
            break;

            case 'E':
            saldo -= importe;
            cant_extraccion++;
            break;

            case 'e':
            saldo -= importe;
            cant_extraccion++;
            break;
        }
        porc_extraccion = cant_extraccion/cant_movimientos*100;
        porc_deposito = cant_deposito/cant_movimientos*100;
        cout<<"Deposito:"<<porc_deposito<<endl;
        cout<<"Extraccion"<<porc_extraccion<<endl;
        //Fin Ejercicio 1 Y 2


        //Ejercicio 3
        if(flag_max_deposito == 0 && (tipo == 'D' || tipo == 'd')){
            max_deposito = importe;
            dia_max_deposito = dia;
            movimiento_max_deposito = num_movimiento;
            flag_max_deposito++;
        }

        if(importe>max_deposito && (tipo == 'D' || tipo == 'd')){
            max_deposito = importe;
            dia_max_deposito = dia;
            movimiento_max_deposito = num_movimiento;
            flag_max_deposito++;
        }
        //Fin Ejercicio 3

        //Inicio Ejercicio 3
        if(dia == 10){
            movimiento_dia10++;
        }
    }
    //Salida Ejercicio 1
    cout<<"El saldo final de la cuenta es de $"<<saldo<<endl;

    //Salida Ejercicio 2
    cout<<"El porcentaje de movimientos que fueron una extraccion fue de "<<porc_extraccion<<"%"<<endl;
    cout<<"El porcentaje de movimientos que fueron un deposito fue de "<<porc_deposito<<"%"<<endl;
    //Salida Ejercicio 3
    cout<<"El deposito mas alto fue de $"<<max_deposito<<" en el dia N"<<dia_max_deposito<<" y fue en el movimiento N"<<movimiento_max_deposito<<endl;
    //Salida Ejercicio 4
    cout<<"La cantidad de movimientos que hubo en el dia N10 fue de "<<movimiento_dia10<<endl;
    return 0;
}
