#include <iostream>

using namespace std;

/* En una empresa los empleados cobran un sueldo según la categoría a la que pertenecen. Son 50 empleados y los sueldos son:

Categoría 1: $38000
Categoría 2: $70000
Categoría 3: $105000

Al sueldo se le suma además $ 1200 por cada año trabajado. Para cada empleado se tienen los siguientes datos:
- Categoría (1 a 3)
- Antigüedad (entero)

Hay un registro por cada empleado. La información no está agrupada ni ordenada. Se pide calcular e informar:
a) ¿Cuantos empleados hay para cada categoría?
b) Total de sueldos (en $) pagados para cada categoría.
c) Sueldo Promedio.
d) ¿Cual fue el sueldo máximo y a que categoría pertenece?

*/

int main()
{
    //Datos Principales
    const float sueldo1 = 38000;
    const float sueldo2 = 70000;
    const float sueldo3 = 105000;
    const float sueldo_ano = 1200;
    int categoria;
    int antiguedad;
    int sueldo;
    int cantidad_empleados = 50;

    //Datos Ej A.
    int empleados_cat1 = 0;
    int empleados_cat2 = 0;
    int empleados_cat3 = 0;

    //Datos Ej B.
    float total_sueldos_cat1 = 0;
    float total_sueldos_cat2 = 0;
    float total_sueldos_cat3 = 0;

    //Datos Ej C.
    float sueldo_promedio;

    //Datos Ej D.
    int bandera = 0;
    int sueldo_max;
    int categoria_sueldo_max;

    //Secuencia Principal
    for (int empleado = 1; empleado<=cantidad_empleados; empleado++){
        cout<<"Empleado: "<<empleado<<endl;
        cout<<"Categoria: (del 1 al 3) ";
        cin>>categoria;
        cout<<"Antiguedad del empleado: ";
        cin>>antiguedad;
        cout<<endl;

        //Ejercicio A y B
        switch(categoria){

            case 1:
            sueldo = sueldo1 + antiguedad*sueldo_ano;
            empleados_cat1++;
            total_sueldos_cat1 += sueldo;
            break;

            case 2:
            sueldo = sueldo2 + antiguedad*sueldo_ano;
            empleados_cat2++;
            total_sueldos_cat2 += sueldo;
            break;

            case 3:
            sueldo = sueldo3 + antiguedad*sueldo_ano;
            empleados_cat3++;
            total_sueldos_cat3 += sueldo;
            break;

        }
        //Ejercicio D
        if(bandera==0){
            sueldo_max = sueldo;
            categoria_sueldo_max = categoria;
            bandera++;
        }
        if(sueldo>sueldo_max){
            sueldo_max = sueldo;
            categoria_sueldo_max = categoria;
        }
    }

    //Ejercicio C
    sueldo_promedio = (total_sueldos_cat3+total_sueldos_cat2+total_sueldos_cat1)/cantidad_empleados;
    //Salida de Ejercicios
    //A
    cout<<"La cantidad de empleados de la categoria 1 es de "<<empleados_cat1<<endl;
    cout<<"La cantidad de empleados de la categoria 2 es de "<<empleados_cat2<<endl;
    cout<<"La cantidad de empleados de la categoria 3 es de "<<empleados_cat3<<endl<<endl;
    //B
    cout<<"La cantidad de dinero gastado en sueldos para la categoria 1 es de $"<<total_sueldos_cat1<<endl;
    cout<<"La cantidad de dinero gastado en sueldos para la categoria 2 es de $"<<total_sueldos_cat2<<endl;
    cout<<"La cantidad de dinero gastado en sueldos para la categoria 3 es de $"<<total_sueldos_cat3<<endl<<endl;
    //C
    cout<<"El promedio general de sueldos fue de $"<<sueldo_promedio<<endl<<endl;
    //D
    cout<<"El sueldo maximo fue de $"<<sueldo_max<<" y fue de la categoria "<<categoria_sueldo_max<<endl;
    return 0;
}
