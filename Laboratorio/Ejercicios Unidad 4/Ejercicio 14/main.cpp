#include <iostream>

using namespace std;
/*
    Una universidad dispone de diez aulas para acomodar a una cantidad de asistentes a una charla. Cada aula tiene una capacidad total de 60 personas. Se necesita un programa que solicite la cantidad de asistentes a la charla y  determine la cantidad total de aulas necesarias para acomodarlos a todos.

Por ejemplo:
Si los asistentes son 120 se necesitarán 2 aulas.
Si los asistentes son 123 se necesitarán 3 aulas.
Si los asistentes son 40 se necesitará 1 aula.

DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo.

*/
int main() {
    //Eleccion con/sin desafio:
    char desafio;
    cout<<"Desea correr el programa hecho con el desafio (Y) o sin el desafio (N)?"<<endl;
    cout<<"Desafio: ";
    cin>>desafio;
    cout<<endl;
    if(desafio == 'N'){
    //Datos Basicos
    const int aulas = 10;
    const int capacidad_aulas = 60;
    int asistentes;
    int aulas_requeridas;
    cout<<"Cantidad de asistentes: ";
    cin>>asistentes;
    aulas_requeridas = asistentes/capacidad_aulas;
    if(asistentes%capacidad_aulas>0){
        aulas_requeridas++;
    }
    if(aulas_requeridas<=aulas){
        if(aulas>1){
            cout<<"Se necesitaran "<<aulas_requeridas<<" aulas";
        }
        if(aulas == 1){
            cout<<"Se necesita un aula";
        }
    }
    else{
        cout<<"No alcanzan las aulas";
    }
}

    if(desafio == 'Y'){
        const int aulas = 10;
        const int capacidad_aulas = 60;
        int asistentes;
        int aulas_requeridas;
        cout<<"Cantidad de asistentes: ";
        cin>>asistentes;

        while(asistentes>=60){
            aulas_requeridas++;
            asistentes-=60;
        }
        if(asistentes>0){
            aulas_requeridas++;
        }
        if(aulas_requeridas<=aulas){
            if(aulas>1){
                cout<<"Se necesitaran "<<aulas_requeridas<<" aulas";
            }
            if(aulas == 1){
            cout<<"Se necesita un aula";
            }
        }
        else{
            cout<<"No alcanzan las aulas";
        }
    }

    return 0;
}
