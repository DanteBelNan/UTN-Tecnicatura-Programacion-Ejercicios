#include <iostream>
using namespace std;
/* Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:
La nota promedio entre todos los estudiantes.
El legajo del estudiante con menor nota.
La cantidad de exámenes rendidos para la materia 10.
El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.
*/
int main() {
    //Datos Basicos
    int legajo;
    int codigo_materia;
    float nota = 0;
    int flag_vuelta1 = 0;
    //Datos Ejercicio 1
    float estudiantes = 0;
    float suma_nota = 0;
    float promedio = 0;

    //Datos Ejercicio 2
    float min_nota;
    int legajo_min_nota;

    //Datos Ejercicio 3
    int materia10 = 0;

    //Datos Ejercicio 4
    float aprobados = 0;
    float desaprobados = 0;
    float porc_aprobados;
    float porc_desaprobados;
    do{
    if(flag_vuelta1>0){
    cout<<"Codigo de Materia: ";
    cin>>codigo_materia;
    nota = 0; //para que el while se active, y verifique que sea una nota valida
    cout<<"Nota: ";
    while(nota<1 || nota>10){
    cin>>nota;
    if(nota<1 || nota>10){
        cout<<"Valor invalido, ingrese otro: ";
    }
    }
    //Ejercicio 1:
    estudiantes++;
    suma_nota += nota;
    promedio = suma_nota/estudiantes;

    //Ejercicio 2:
    if(flag_vuelta1 == 1){
        min_nota = nota;
        legajo_min_nota = legajo;
    }
    if(nota<min_nota){
        min_nota = nota;
        legajo_min_nota = legajo;
    }

    //Ejercicio 3:
    if(codigo_materia == 10){
        materia10++;
    }

    //Ejercicio 4:
    if(nota>=6){
        aprobados++;
    }
    else {
        desaprobados++;
    }
    cout<<"Aprobados: "<<aprobados<<endl;
    cout<<"Desaprobados: "<<desaprobados<<endl;
    porc_aprobados = aprobados/(aprobados+desaprobados)*100;
    porc_desaprobados = desaprobados/(aprobados+desaprobados)*100;
    cout<<"Aprobados: "<<porc_aprobados<<endl;
    cout<<"Desaprobados; "<<porc_desaprobados<<endl;

    }cout<<"Numero de Legajo: ";
    cin>>legajo; //Esto aplica para que el programa se cierre automaticamente al llegar a 30k
    flag_vuelta1++;
    }while(legajo<30000);
    cout<<"El promedio de notas es de "<<promedio<<endl;
    cout<<"El legajo del estudiante con menor nota es el N"<<legajo_min_nota<<endl;
    cout<<"La cantidad de examenes rendidos para la materia 10 es de "<<materia10<<endl;
    cout<<"El porcentaje de aprobados es del "<<porc_aprobados<<"%"<<endl;
    cout<<"El porcentaje de desaprobados es del "<<porc_desaprobados<<"%"<<endl;
    return 0;
}
