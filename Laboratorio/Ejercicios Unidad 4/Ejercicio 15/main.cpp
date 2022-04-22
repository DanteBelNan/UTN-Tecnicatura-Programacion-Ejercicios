#include <iostream>

using namespace std;
/*
    Hacer un programa que contenga un menú con el siguiente formato:

Menú principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a centímetros
3 - Convertir a kilómetros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opción:


Al ingresar a la opción 1, nos pedirá una medida (float) en metros que con las siguientes opciones del menú podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y sólo finalizará al ingresar a la opción 0.


*/
int main() {
    int bucle = 0;
    int vuelta1 = 0;
    while(bucle == 0){
        //Menu
        cout<<"Menu Principal"<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"1 - Ingresar medida en metros"<<endl;
        cout<<"2 - Convertir a centímetros"<<endl;
        cout<<"3 - Convertir a kilómetros"<<endl;
        cout<<"4 - Convertir a pulgadas"<<endl;
        cout<<"5 - Convertir a pies"<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"0 - Salir del programa"<<endl;
        cout<<endl<<endl;
        //Fin Menu


        //Datos Casos.
        string continuar;
        float med_mts;
        float med_cm;
        float med_km;
        float med_pulg;
        float med_pies;

    //Inicio Programa
        int opcion;
        int check_opcion = 0;

        cout<<"Ingrese opcion: ";
        while(check_opcion == 0){
        cin>>opcion;
        cout<<endl;
        if(opcion !=1 && vuelta1 == 0){
            cout<<"Primero debe ingresar una medida en metros."<<endl;
            cout<<"Selecciones otra opcion: ";
        }
        else if(opcion==1 && vuelta1 == 0){
            check_opcion++;
        }
        if(vuelta1 != 0){
            check_opcion++;
        }
        }
        switch(opcion){ //poner un clear en cada caso.
            case 1:
            cout<<"Medida en metros: ";
            cin>>med_mts;
            vuelta1++;
            system("cls");
            break;

            case 2:
            med_cm = med_mts * 100;
            cout<<med_mts<<" metros, en centimetros es "<<med_cm<<"cm"<<endl<<endl;
            cout<<"Ingrese cualquier tecla para continuar"<<endl;
            cin>>continuar;
            system("cls");
            break;

            case 3:
            med_km = med_mts/1000;
            cout<<med_mts<<" metros, en kilometros es "<<med_km<<"km"<<endl<<endl;
            cout<<"Ingrese cualquier tecla para continuar"<<endl;
            cin>>continuar;
            system("cls");
            break;

            case 4:
            med_pulg = med_mts*39.3701;
            cout<<med_mts<<" metros, en pulgadas es "<<med_pulg<<" pulgadas"<<endl<<endl;
            cout<<"Ingrese cualquier tecla para continuar"<<endl;
            cin>>continuar;
            system("cls");
            break;

            case 5:
            med_pies = med_mts/3.28084;
            cout<<med_mts<<" metros, en pies es "<<med_pies<<" pies"<<endl<<endl;
            cout<<"Ingrese cualquier tecla para continuar"<<endl;
            cin>>continuar;
            system("cls");
            break;

            case 0:
            return 0;
            break;
        }

    }
    return 0;
}
