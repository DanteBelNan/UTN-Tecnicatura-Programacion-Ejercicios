#include <iostream>

using namespace std;
int main() {
    int ejercicio;
    int scopes = 27;
    cout<<"Seleccionar un ejercicio: ";
    cin>>ejercicio;

    switch(ejercicio){
        case 1: //Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
        if (scopes == scopes){
            int n;
    int positivos = 0;
    int negativos = 0;
    do{
        cout<<"Numero: ";
        cin>>n;
        if(n>0){
            positivos++;
        }
        if(n<0){
            negativos++;
        }
    }
    while(n!=0);
    cout<<"Hay "<<positivos<<" positivos y "<<negativos<<" negativos."<<endl;

        }
        break;

    case 2://Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.

    if (scopes == scopes){
    int n;
    int maxn;
    bool flag_maxn = false;
    do{
        cout<<"Numero: ";
        cin>>n;
        if (flag_maxn == false){
            maxn = n;
            flag_maxn = true;
        }
        if(n>maxn){
            maxn = n;
        }
    }while(n!=0);
    cout<<"El mayor numero es "<<maxn;
    }
    break;

    case 3: //Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición dentro de la lista.
    if (scopes == scopes){
        int n;
        int posicion = 1;
        int maxn;
        int posicion_maxn;
        bool flag_maxn = false;

        do{
        cout<<"Numero: ";
        cin>>n;
        if (flag_maxn == false){
            maxn = n;
            flag_maxn = true;
            posicion_maxn = posicion;
        }
        if(n>maxn){
            maxn = n;
            posicion_maxn = posicion;
        }
        posicion++;
    }while(n!=0);
    cout<<"El mayor numero es el "<<maxn<<endl;
    cout<<"En la posicion N"<<posicion_maxn;
    }
    break;

    case 4://Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo de los números pares.
    if(scopes == scopes){
        int n;
        int maxn;
        bool flag_maxn = false;
        do{
            cout<<"Numero: ";
            cin>>n;
            if (flag_maxn == false && n%2==0){
                maxn = n;
                flag_maxn = true;
            }
            if(n>maxn && n%2==0){
            maxn = n;
            }
    }while(n!=0);
    cout<<"El mayor numero par es "<<maxn;
    }
    break;

     case 5://Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor a 10. Calcular e informar la cantidad de números que componen la lista.

    if(scopes == scopes){
        int n;
        int diferencia;
        int maxn;
        bool flag_maxn = false;
        int minn;
        bool flag_minn = false;
        int contador = 0;

        do{
            cout<<"Numero: ";
            cin>>n;

            if (flag_maxn == false){
            maxn = n;
            flag_maxn = true;
            }
            if(n>maxn){
            maxn = n;
            }

            if (flag_minn == false){
            minn = n;
            flag_minn = true;
            }
            if(n<minn){
            minn = n;
            }
            contador++;
            diferencia = maxn-minn;
        }while(diferencia<=10);
        cout<<"La lista se compone por "<<contador<<" numeros";
    }
    break;

     case 6://Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par calcular e informar la cantidad de ternas de números negativos ingresados de manera consecutiva.

    if(scopes == scopes){
        int n;
        int contador_par = 0;
        bool negativo_anterior = false;
        bool negativo_actual;
        bool conector_negativos;
        bool conector_negativos_actual;
        int contador_ternas = 0;

        do{
        cout<<endl;
        cout<<"Numero: ";
        cin>>n;

        if(n<0){
            negativo_actual = true;
        }
        if(negativo_actual == true && negativo_anterior == true){
            conector_negativos = true;
            conector_negativos_actual = true;
        }
        else {
            conector_negativos = false;

        }

        if(conector_negativos == false && conector_negativos_actual == true){
            contador_ternas++;
            conector_negativos_actual = false;
        }
        if(n%2==0){
            contador_par++;
        }
        if((conector_negativos == true && conector_negativos_actual == true) && contador_par == 5){
            contador_ternas++;
        }
        negativo_anterior = negativo_actual;
        negativo_actual = NULL;

        }while(contador_par!=5);
        cout<<"La cantidad de ternas de negativos es de "<<contador_ternas;
    }
    break;

     case 7:// Dada una lista de números que finaliza cuando se ingresa un número divisible por 7, informar cual es el anteúltimo y último número impar ingresado.
    if(scopes == scopes){
        int n;
        int ult_impar = 0;
        int anteult_impar = 0;
        bool flag_ult_impar = false;
        do{
            cout<<"Numero : ";
            cin>>n;

            if(n%2==1 && flag_ult_impar == true){
                anteult_impar = ult_impar;
                ult_impar = n;
            }
            if(n%2==1 && flag_ult_impar == false){
                ult_impar = n;
                flag_ult_impar = true;
            }

        }while(n%7!=0);
        if(ult_impar == 0){
            cout<<"No se ingresaron numeros impares";
        }
        else if(anteult_impar == 0){
            cout<<"Se ingreso un solo impar y este fue "<<ult_impar;
        }
        else {
            cout<<"El ultimo impar fue "<<ult_impar<<endl;
            cout<<"Y el ante ultimo impar fue "<<anteult_impar;
        }
    }
    break;

     case 8:// Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar si todos están ordenados en forma creciente. En caso de haber un número igual al anterior considerarlo como creciente
    if(scopes == scopes){
        int n = 0;
        int ult_n;
        int anteult_n;
        bool flag_n = false;
        bool creciente_virgen = true;
        bool creciente;

        do{
            if (n!=0){
            if(flag_n==false){
                ult_n = n;
                flag_n = true;
            }
            if(flag_n == true){
                anteult_n = ult_n;
                ult_n = n;
            }
            if(ult_n>=anteult_n && creciente_virgen == true){
                creciente = true;
                cout<<"conectado"<<endl;
            }
            else {
                creciente = false;
                creciente_virgen = false;
            }
            }
            cout<<"Numero: ";
            cin>>n;
        }while(n!=0);
        if(creciente == true){
            cout<<"Conjunto Ordenado";
        }
        else {
            cout<<"Conjunto Desordenado";
        }
    }
    break;

    }
    return 0;
}
