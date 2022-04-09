#include <iostream>

using namespace std;

int main()
{
    int num_cliente = 1;
    int localidad = 1;
    int kv_a_liquidar = 0;
    float saldo = 100;
    //Variables de Maximo consumo/sucursal
    int max_consumo_loc1 = 0;
    int max_consumo_loc2 = 0;
    int max_consumo_loc3 = 0;
    //Variables de Suma de consumo de cada sucursal
    int total_saldo_loc1 = 0;
    int total_saldo_loc2 = 0;
    int total_saldo_loc3 = 0;
    //Variables Cliente Menor consumo
    int cliente_menor_consumo = 0;
    int num_cliente_menor_consumo;
    int primera_vuelta_menor_consumo = 0;
    //Inicio Bucle
    while(num_cliente != 0){
    cout<<"Ingrese el numero del cliente"<<endl;
    cin>>num_cliente;
    if(num_cliente != 0){ //Para que la ultima vuelta , antes de cerrar el programa, no aplique
    saldo = 100;
    if (num_cliente != 0){ //Para que si quiere cerrar el programa no se ejecute
    cout<<"Ingrese la localidad del cliente"<<endl;
    }

    // Inicio Validacion de Localidad Valida

    while(localidad == localidad){
    cin>>localidad;  //Este condicional aplica para poder cerrar bien el ciclo cuando el numero de clientes sea 0
    if(localidad >0 && localidad<4){
        break;
    }
    else{
        cout<<"Localidad no valida, ingrese otra"<<endl;
    }
    }

    // Fin Validacion de Localidad Valida

    cout<<"Ingrese el consumo de Kv del cliente"<<endl;
    cin>>kv_a_liquidar;

    //Ejercicio A:
    if(kv_a_liquidar > max_consumo_loc1 && localidad == 1) {
        max_consumo_loc1 = kv_a_liquidar;
    }

    else if(kv_a_liquidar > max_consumo_loc2 && localidad == 2) {
        max_consumo_loc2 = kv_a_liquidar;
    }

    else if(kv_a_liquidar > max_consumo_loc3 && localidad == 3) {
        max_consumo_loc3 = kv_a_liquidar;
    }
    //Fin Ejercicio A.

    //Inicio Ejercicio C:
        if (primera_vuelta_menor_consumo == 0){
            cliente_menor_consumo = kv_a_liquidar;
            primera_vuelta_menor_consumo++;
            cout<<"Se detecto cambio de menor numero"<<endl;
        }
        if(kv_a_liquidar<cliente_menor_consumo && kv_a_liquidar > 0){
            cliente_menor_consumo = kv_a_liquidar;
            num_cliente_menor_consumo = num_cliente;
            cout<<"Se detecto  cambio de menor numero"<<endl;
        }
    //Fin Ejercicio C.

    //Inicio Calculo de Saldo
    int kv_300_check = 0;
    if(kv_a_liquidar>100){ //kv consumidos mayor a 100
        kv_a_liquidar -= 100;
        saldo += 1000;
        kv_300_check ++;
    }
    else{
        saldo += kv_a_liquidar * 10;
        kv_a_liquidar = 0;
    }

    if(kv_a_liquidar>100){ //kv consumidos mayor a 200
        kv_a_liquidar -= 100;
        saldo += 1200;
        kv_300_check ++;
    }
    else{
        saldo += kv_a_liquidar * 12;
    }

    if(kv_300_check == 2){
        saldo += kv_a_liquidar*15;
        kv_a_liquidar = 0;
    }
    //Fin Calculo de Saldo

        //Ejercicio B:
    if(localidad == 1){
        total_saldo_loc1 += saldo;
    }
    else if (localidad == 2){
        total_saldo_loc2 += saldo;
    }
    else if (localidad == 3){
        total_saldo_loc3 += saldo;
    }
    //Fin Ejercicio B.

    } // Fin ultima vuelta
    } // Fin Bucle


    //Resultado Ejercicio A:
    cout<<"El mayor consumo de la localidad 1 es de "<<max_consumo_loc1<<endl;
    cout<<"El mayor consumo de la localidad 2 es de "<<max_consumo_loc2<<endl;
    cout<<"El mayor consumo de la localidad 3 es de "<<max_consumo_loc3<<endl;
    cout<<endl;
    //Resultado Ejercicio B:
    cout<<"El consumo total de la localidad 1 es de "<<total_saldo_loc1<<endl;
    cout<<"El consumo total de la localidad 2 es de "<<total_saldo_loc2<<endl;
    cout<<"El consumo total de la localidad 3 es de "<<total_saldo_loc3<<endl;
    cout<<endl;
    //Resultado Ejercicio C:
    cout<<"El cliente que menor consumo tuvo fue el N "<<num_cliente_menor_consumo<<endl;
    return saldo;
}
