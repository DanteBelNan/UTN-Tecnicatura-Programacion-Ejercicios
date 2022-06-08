#include <iostream>
/*
Una fábrica tiene 80 empleados, y dispone de un primer lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Valor de una hora de trabajo
- Valor de la hora extra de trabajo

A fin de mes se desean calcular los sueldos de los empleados que trabajaron y para ello se cuenta con un segundo lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Día
- Total de horas trabajadas en el día

Este lote finaliza con un registro con nro. de empleado igual a cero, y sólo figuran los registros de los empleados que trabajaron durante el mes. Calcular e informar el sueldo de cada uno de los empleados, teniendo en cuenta que a partir de la 9na hora del día se comienza a pagar como hora extra.

*/
using namespace std;
int main() {

    //Datos Principales
    int sueldo_final[80] = {};
    int empleados_nowork[80] = {};
    int num_empleado;
    int check_num_empleado = 0;
    int dia;
    int check_dia = 0;
    int horas_trabajadas;
    int valor_hora;
    int sueldo_dia;
    do{
        check_num_empleado = 0;
        check_dia = 0;
        if(num_empleado!=0){
            while(check_dia == 0){
                cout<<"Ingrese el dia: ";
                cin>>dia;
                if(dia>0 && dia<31){
                    check_dia++;
                }
                else{
                    cout<<"Ese dia no existe, ingrese otro..."<<endl;
                }
            }
            cout<<"Ingrese su salario por hora: ";
            cin>>valor_hora;
            cout<<"Ingrese sus horas trabajadas del dia "<<dia<<" : ";
            cin>>horas_trabajadas;
            if(horas_trabajadas<=8){
                sueldo_dia = horas_trabajadas * valor_hora;
            }
            else{
                horas_trabajadas -= 8;
                sueldo_dia = 8*valor_hora + horas_trabajadas*valor_hora*2;
            }
            sueldo_final[num_empleado-1] += sueldo_dia;
        }
        while(check_num_empleado == 0){
            cout<<"Numero de empleado: ";
            cin>>num_empleado;
            if(num_empleado>=0 && num_empleado<81){
                check_num_empleado++;
            }
            else{
                cout<<"Ese empleado no existe, ingrese uno existente..."<<endl;
            }
        }
    }while(num_empleado!=0);

    for(int empleado = 0; empleado<80;empleado++){
        if(sueldo_final[empleado]!=0){
            cout<<"El sueldo del empleado N"<<empleado+1<<" es de "<<sueldo_final[empleado]<<endl;
        }
        else{
            empleados_nowork[empleado] = empleado+1;
        }
    }
    cout<<"Los empleados que no trabajaron este mes fueron los siguientes: "<<endl;
    for(int empleado = 0; empleado<80;empleado++){
        if(empleados_nowork[empleado]!=0){
            cout<<empleados_nowork[empleado]<<"  ";
        }
    }


    return 0;
}

