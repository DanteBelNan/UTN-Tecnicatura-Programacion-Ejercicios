#include <iostream>

using namespace std;

int main()
{
    int ejercicios;
    int ciclos = 27; //numero aleatorio que uso para permanecer los casos dentro de un if, y asi poder ->
    cin>>ejercicios;  // -> declarar variables de nombres iguales en cada una
    switch (ejercicios){

        case 1: //Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 elementos
        if(ciclos == 27){
            for(int x = 1 ; x<=20; x+=3){
                cout<<x<<endl;
            }
        }
        break;

        case 2: //Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden decreciente.
        if(ciclos == 27){
            for (int x = 20 ; x>=1 ; x--){
                cout<<x<<endl;
            }
        }
        break;

        case 3:
        /*Hacer un programa para que el usuario ingrese un número positivo
        y que luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario */
        if(ciclos == 27){
            int n;
            cin>>n;
            for(int x = 2; x<n; x++){
                cout<<x<<endl;
            }
        }
        break;

        case 4: /*Hacer un programa para que el usuario ingrese dos números
        y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.*/
        if(ciclos == 27){
            int n1, n2, maxn, minn;
            cin>>n1>>n2;
            minn = n1;
            maxn = n2;
            if (n1>n2){
                maxn = n1;
                minn = n2;
            }
            for(int x = minn + 1; x<maxn ; x++){
                cout<<x<<endl;
            }
        }
        break;

        case 5: /* Hacer un programa para ingresar un N valor que indica la cantidad de números
    que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos */
        if(ciclos == 27){
            int cant_num;
            int n;
            int contador_positivos = 0;
            cin>>cant_num;
            for (int x = 0 ; x<cant_num ; x++){
                cin>>n;
                if(n>0){
                    contador_positivos++;
                }
            }
            cout<<contador_positivos<<endl;
        }
        break;

        case 6: /*Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos,
        cuántos son negativos, y cuántos iguales a cero. */
        if(ciclos == 27){
            int n;
            int contador_positivos = 0;
            int contador_negativos = 0;
            int contador_zeros = 0;
            for (int x = 0; x<10 ; x++){
                cin>>n;
                if(n > 0){
                    contador_positivos++;
                }
                else if (n < 0){
                    contador_negativos++;
                }
                else{
                    contador_zeros++;
                }
            }
            cout<<"La cantidad de positivos es de "<<contador_positivos<<endl;
            cout<<"La cantidad de negativos es de "<<contador_negativos<<endl;
            cout<<"La cantidad de ceros es de "<<contador_zeros<<endl;
        }
        break;

        case 7:
        /*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
        El sueldo máximo.
        El sueldo mínimo.
        El sueldo promedio.
        Cantidad de sueldos mayores a $50000. */
        if (ciclos == 27){
        float sueldo;
        float sueldo_max;
        int sueldo_max_flag = 0;
        float sueldo_min;
        int sueldo_min_flag = 0;
        float suma_sueldo = 0;
        float promedio_sueldo;
        int contador_mayor_50k = 0;
        for(int x = 0 ; x<10; x++){
            cin>>sueldo;
            //Inicio encontrar maximo sueldo
            if (sueldo_max_flag == 0){
                sueldo_max = sueldo; //Aplica para la primer vuelta
                sueldo_max_flag++;
            }
            if (sueldo > sueldo_max){
                sueldo_max = sueldo;
            } // Fin encontrar maximo sueldo
            //Inicio encontrar minimo sueldo
            if (sueldo_min_flag == 0){
                sueldo_min = sueldo; //Aplica para la primer vuelta
                sueldo_min_flag++;
            }
            if( sueldo < sueldo_min) {
                sueldo_min = sueldo;
            } // Fin encontrar maximo sueldo

            //Inicio promedio de sueldo
            suma_sueldo += sueldo;
            promedio_sueldo = suma_sueldo/10; //esto es mas optimo que vaya despues, pero por orden lo dejo aca
            //Fin promedio de sueldo

            //Inicio sueldos +50k
            if(sueldo > 50000){
                contador_mayor_50k++;
            }
        }
        cout<<"El sueldo maximo es "<<sueldo_max<<endl;
        cout<<"El sueldo minimo es "<<sueldo_min<<endl;
        cout<<"El sueldo promedio es "<<promedio_sueldo<<endl;
        cout<<"La cantidad de sueldos mayores a 50000 es "<<contador_mayor_50k<<endl;
        }
        break;

        case 8: /* Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo */
        if(ciclos == 27){
        int legajo , sueldo;
        int max_legajo, max_sueldo;
        int primera_vuelta = 0;
            for (int x = 0; x<10; x++){
                cout<<"Ingrese el N de legajo del empleado"<<endl;
                cin>>legajo;
                cout<<"Ahora ingrese el sueldo del empleado"<<endl;
                cin>>sueldo;
                if (primera_vuelta == 0){
                    max_legajo = legajo;
                    max_sueldo = sueldo;
                    primera_vuelta++;
                }
                if (sueldo>max_sueldo){
                    max_sueldo = sueldo;
                    max_legajo = legajo;
                }
            }
            cout<<"El legajo con mayor sueldo es el N"<<max_legajo;
        }
        break;

        case 9: /*Hacer un programa para ingresar una lista 10 números e informar
        el máximo de los negativos y el mínimo de los positivos */
        if(ciclos == 27){
            int n;
            int max_negativos;
            int flag_max_negativos = 0;
            int min_positivos;
            int flag_min_positivos = 0;
            for (int x = 0; x<10; x++){
                cin>>n;
                if(n>0 && flag_min_positivos == 0){
                    min_positivos = n;
                    flag_min_positivos++;
                }
                if (n<min_positivos && n>0){
                    min_positivos = n;
                }

                if(n<0 && flag_max_negativos == 0){
                    max_negativos = n;
                    flag_max_negativos++;
                }
                if(n>max_negativos && n<0){
                    max_negativos = n;
                }
            }
            cout<<"El minimo positivo es "<<min_positivos<<endl;
            cout<<"El maximo negativo es "<<max_negativos<<endl;
        }
        break;

        case 10: //Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
        if(ciclos == 27){
            int n;
            int impar1, impar2;
            int flag_impar = 0;
            for (int x = 0; x<7 ; x++){
                cin>>n;
                if (flag_impar == 0 && (n%2 == 1 || n%2== -1)){
                    impar1 = n;
                    flag_impar++;
                }
                if (flag_impar == 1 && (n%2 == 1 || n%2== -1)){
                    impar2 = n;
                    flag_impar++;
                }
            }
        }
        break;

        case 11:
        if (ciclos == 27){
            /*Hacer un programa para ingresar una lista de 8 números y luego informar
            si todos están ordenados en forma creciente.
            En caso de haber dos números “empatados” considerarlos como crecientes. */
            int n, n2;
            int flag = 0;
            bool orden = true;
            for (int x = 0; x<8 ; x++){
                cin>>n;
                if(flag == 0){
                    n2 = n; //Se encarga de la primera vuelta, como casi todas mis flags
                    flag++;
                }
                if(n<n2){ //Evalua caso que no este ordenado
                    orden = false;
                }
            }
            if(orden == true){
                cout<<"Conjunto Ordenado"<<endl;
            }
            else {
                cout<<"Conjunto Desordenado"<<endl;
            }
        }
        break;

        case 12: /*Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados,
        aclarando cual es el máximo y cual el que le sigue. */
        if(ciclos == 27){
            int n;
            int maxn, maxn2;
            int flag = 0;
            for (int x = 0; x<5 ; x++){
                cin>>n;
                if(flag == 0){
                    maxn = n;
                    maxn2 = n - 2; //Esto lo hago para asignarle valor a la varible, y que no sea igual que no
                    flag++;
                }
                if(n>maxn){
                    maxn2 = maxn;
                    maxn = n;
                }
                if(n<=maxn && n>maxn2){
                    maxn2 = n;
                }
            }
            cout<<"El mayor numero es "<<maxn<<endl;
            cout<<"El segundo mayor numero es "<<maxn2<<endl;
        }
        break;

        case 13: //Hacer un programa para ingresar un número y luego informar todos los divisores de ese número.
        if (ciclos == 27){
        int n;
        cin>>n;
        for(int x = 1; x<=n ; x++){
            if(n%x==0){
                cout<<x<<endl;
            }
        }
        }
        break;

        case 14://Programa que ingresa un numero e indica cuantos divisores tiene
        if (ciclos == 27){
        int n;
        cin>>n;
        int contador = 0;
        for(int x = 1; x<=n ; x++){
            if(n%x==0){
                contador++;
            }
        }
        cout<<contador<<endl;
        }
        break;

        case 15: //Programa que averigua si un numero es primo
        if(ciclos == 27){
           int n;
        cin>>n;
        int contador = 0;
        for(int x = 1; x<=n ; x++){
            if(n%x==0){
                contador++;
            }
        }
        if(contador == 2){
            cout<<"Es un numero primo"<<endl;
        }
        }
        break;

    }
    return 0;
}
