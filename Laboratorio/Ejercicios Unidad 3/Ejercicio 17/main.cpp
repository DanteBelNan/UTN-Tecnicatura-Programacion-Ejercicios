#include <iostream>

using namespace std;

int main() /*
Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
N�mero de d�a (entero)
Temperatura (float)
Mil�metros de lluvia (float)
Visibilidad en km (float)
Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
1)El n�mero de d�a que se haya registrado la temperatura m�xima.
2)La amplitud t�rmica de todo el per�odo.
3)La cantidad de d�as con neblina.
4)Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda"
si llovi� al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
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
