//Arrays ejercicios
#include <iostream>

using namespace std;

int main()
{
    int ejercicio;
    int bucle_general = 0;
    int bucle_ejercicio;
    while(bucle_general == 0){
    bucle_ejercicio = 0;
    cout<<"Ejercicio: ";
    cin>>ejercicio;
    switch(ejercicio){
        case 1:
        /*
        Hacer un programa que le pida al usuario una lista de 10 números enteros
        y luego de ingresarlos muestre cuáles de ellos fueron positivos.
        */
        while(bucle_ejercicio == 0){
        int num_positivos[5];
        int contador_positivos = 0;
        int num;
        for(int x = 0; x<5;x++){ //Este ciclo for guarda los numeros en la matriz de positivos
            cout<<"Numero:";
            cin>>num;
            if(num>0){
                num_positivos[contador_positivos] = num;
                contador_positivos++;
            }
        }

        for(int x = 0; x<contador_positivos;x++){ //Este ciclo for muestra todos los numeros positivos
            cout<<num_positivos[x]<<endl;
        }
        bucle_ejercicio++;
        }
        break;

        case 2:
        /*
        Hacer un programa donde se carguen 15 números enteros y
        luego le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.
        */
        while(bucle_ejercicio == 0){
        int num;
        int nums[15];
        for(int x = 0; x<15;x++){
            cout<<"Numero "<<x+1<<" : ";
            cin>>num;
            nums[x] = num;
        }
        cout<<"Ingrese un numero a verificar que este en la lista : ";
        cin>>num;
        for(int x = 0; x<15;x++){
            if(num == nums[x]){
                cout<<"El numero existe en la lista."<<endl;
                break;
            }
        }
        bucle_ejercicio++;
        }
        break;

        case 3:
        /*
        Hacer un programa donde se carguen 15 números enteros y luego muestre por pantalla el mínimo elemento
        del vector y además indique cuántas veces se repite el valor mínimo dentro del vector.
        */
        while(bucle_ejercicio == 0){
        int nums[5];
        int min_num;
        int num;
        int cant_min_num = 0;
        for(int x = 0;x<5;x++){
            cout<<"Numero "<<x+1<<" : ";
            if(x != 0){
                cin>>num;
                nums[x] = num;
                if(num<min_num){
                    min_num = num;
                }
            }
            else{
                cin>>min_num;
                nums[x] = min_num;
            }
        }
        for(int x = 0;x<5;x++){
            if(min_num == nums[x]){
                cant_min_num++;
            }
        }
        cout<<"El minimo numero dentro del vector aparece "<<cant_min_num<<" veces."<<endl;
        bucle_ejercicio++;
        }
        break;

        case 4:
        /*

        */
        while(bucle_ejercicio == 0){

            bucle_ejercicio++;
        }
        break;
    }

    cout<<"Quiere continuar con otro ejercicio? (0 = SI | CUALQUIER OTRO NUMERO = NO)"<<endl;
    cin>>bucle_general;
    }

    return 0;
}
