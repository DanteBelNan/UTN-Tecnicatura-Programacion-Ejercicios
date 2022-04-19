#include <iostream>

using namespace std;

int main() /*
Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)
Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
1)El número de día que se haya registrado la temperatura máxima.
2)La amplitud térmica de todo el período.
3)La cantidad de días con neblina.
4)Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda"
si llovió al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/
{
    //Datos basicos
    int dia;
    float temperatura;
    float mm_lluvia;
    float view_km;
    int dias = 4;
    // 1)
    int dia_max_temp;
    // 2)
    float max_temp;
    int flag_max_temp = 0;
    float min_temp;
    int flag_min_temp = 0;
    float amplitud;
    // 3)
    int dias_neblina = 0;
    // 4)
    int dias_lluvia = 0;
    int dias_sol = dias;

    //Programa inicial
    for(dia = 1; dia<=dias; dia++){
        cout<<"Datos del dia: "<<dia<<endl;
        cout<<"Temperatura: ";
        cin>>temperatura;
        cout<<"Milimetros de lluvia: ";
        cin>>mm_lluvia;
        cout<<"Visibilidad en km: ";
        cin>>view_km;

        //Ejercicio 1 y 2
        if(flag_max_temp == 0){
            max_temp = temperatura;
            dia_max_temp = dia;
            flag_max_temp++;
        }
        if(temperatura>max_temp){
            max_temp = temperatura;
            dia_max_temp = dia;
        }

        if(flag_min_temp == 0){
            min_temp = temperatura;
            flag_min_temp++;
        }
        if(temperatura<min_temp){
            min_temp = temperatura;

        }
        //Fin Ejercicio 1 2

        //Ejercicio 3
        if(view_km<2){
            dias_neblina++;
        }
        //Fin Ejercicio 3

        //Ejercicio 4
        if(mm_lluvia>0){
            dias_lluvia++;
            dias_sol--;
        }
        cout<<endl;
    }
        //Salida Ejercicio 1
        cout<<"El dia que hubo mayor temperatura fue el dia "<<dia_max_temp<<endl;

      //Salida Ejercicio 2
     amplitud = max_temp - min_temp;
     cout<<"La amplitud del periodo fue de "<<amplitud<<endl;

     //Salida Ejercicio 3
     cout<<"La cantidad de dias con neblina fue de "<<dias_neblina<<endl;

     //Salida Ejercicio 4
     if(dias_sol<dias_lluvia){
         cout<<"Quincena Lluviosa"<<endl;
     }
     else if (dias_lluvia>=dias/3){
         cout<<"Quincena seca"<<endl;
     }
    return 0;
}
