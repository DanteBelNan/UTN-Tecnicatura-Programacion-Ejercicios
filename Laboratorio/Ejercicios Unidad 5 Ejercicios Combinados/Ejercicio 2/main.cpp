#include <iostream>

using namespace std;

/*
Un banco tiene tres sucursales, ubicadas en las siguientes localidades:
- Sucursal 1: Virreyes
- Sucursal 2: San Fernando
- Sucursal 3: Tigre

En cada una de ellas se registra para cada transacción que realiza un cliente, los siguientes datos:
- Nro. de Cliente (100 al 1200)
- Nro. de Sucursal (1, 2 ó 3)
- Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones)
- Monto en pesos de la transacción

El último registro se indica con nro. de cliente igual a cero. Se pide a partir de estos datos, determinar e informar:
a) Cantidad de depósitos por más de $1000.-.
b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
c) El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.
d) Total de pesos depositados en cada una de las sucursales.
e) Cantidad de depósitos en la sucursal de Tigre.
f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos).

*/
int main() {
    //Datos Principales.
    int num_cliente;
    int suc;
    char transaccion;
    int monto;

    //Verificadores.
    int check_suc;
    int check_transaccion;
    //Datos Ej A.
    int monto_1000 = 0;

    //Datos Ej B.
    int bandera = -1;
    int max_monto;
    int suc_max_monto;
    int cliente_max_monto;

    //Datos Ej C.
    float cant_suc1 = 0;
    float cant_suc2 = 0;
    float cant_suc3 = 0;
    float total_clientes;
    float porcentaje_suc1;
    float porcentaje_suc2;
    float porcentaje_suc3;

    //Datos Ej D.
    int total_monto_suc1 = 0;
    int total_monto_suc2 = 0;
    int total_monto_suc3 = 0;

    //Datos Ej E yF
    int depositos_suc1 = 0;
    int depositos_suc2 = 0;
    int depositos_suc3 = 0;
    int suc_max_depositos;

    //Secuencia Principal.
    do{
        if(bandera!=-1){
        check_suc = 0;
        check_transaccion = 0;
        while(check_suc == 0){
        cout<<"Numero de sucursal: ";
        cin>>suc;
        if(suc>0 && suc<4){
            check_suc++;
        }
        else{
            cout<<"Sucursal Inexistente, ingrese otra."<<endl;
        }
        }
        while(check_transaccion == 0){
        cout<<"Codigo de transaccion: ";
        cin>>transaccion;
        if(transaccion=='D' ||transaccion == 'd' || transaccion =='E' ||transaccion == 'e'){
            check_transaccion++;
        }
        else{
            cout<<"Tipo de transaccion no valida, ingrese otra."<<endl;
        }
        }
        cout<<"Monto en pesos: $";
        cin>>monto;
        //Fin Secuencia Principal.

        //Ej A.
        if(monto>1000){
            monto_1000++;
        }

        //Ej B.
        if(bandera == 0){
            max_monto = monto;
            suc_max_monto = suc;
            cliente_max_monto = num_cliente;
        }
        if(monto>max_monto){
            max_monto = monto;
            suc_max_monto = suc;
            cliente_max_monto = num_cliente;
        }

        //Ej C , D, E y F.
        switch(suc){
            case 1:
            cant_suc1++;
            if(transaccion == 'D' || transaccion == 'd'){
            total_monto_suc1+=monto;
            depositos_suc1++;
            }
            break;

            case 2:
            cant_suc2++;
            if(transaccion == 'D' || transaccion == 'd'){
            total_monto_suc2+=monto;
            depositos_suc2++;
            }
            break;

            case 3:
            cant_suc3++;
            if(transaccion == 'D' || transaccion == 'd'){
            total_monto_suc3+=monto;
            depositos_suc3++; //Los de Tigre.
            }
            break;
        }
        total_clientes = cant_suc1+cant_suc2+cant_suc3;
        porcentaje_suc1 = (cant_suc1/total_clientes)*100;
        porcentaje_suc2 = (cant_suc2/total_clientes)*100;
        porcentaje_suc3 = (cant_suc3/total_clientes)*100;
        }
        cout<<"Numero de cliente: ";
        cin>>num_cliente;
        bandera++;
    }while(num_cliente!=0);

        if(depositos_suc1>depositos_suc2 && depositos_suc1>depositos_suc3){
            suc_max_depositos = 1;
        }
        else if(depositos_suc2>depositos_suc1 && depositos_suc2>depositos_suc3){
            suc_max_depositos = 2;
        }
        else{
            suc_max_depositos = 3;
        }
        cout<<endl;

    //Salidas de Ejercicios

    //A.
    cout<<"La cantidad de extracciones mayores a 1000 es de: "<<monto_1000<<endl<<endl;
    //B
    cout<<"El cliente que hizo un movimiento de mayor monto fue el N"<<cliente_max_monto<<" y fue el de la sucursal N "<<suc_max_monto<<endl<<endl;
    //C
    cout<<"El Porcentaje de clientes de la sucursal 1 es de: "<<porcentaje_suc1<<endl;
    cout<<"El Porcentaje de clientes de la sucursal 2 es de: "<<porcentaje_suc2<<endl;
    cout<<"El Porcentaje de clientes de la sucursal 3 es de: "<<porcentaje_suc3<<endl<<endl;
    //D
    cout<<"La cantidad total en $ de Depositos de la sucursla 1 fue de: $"<<total_monto_suc1<<endl;
    cout<<"La cantidad total en $ de Depositos de la sucursla 2 fue de: $"<<total_monto_suc2<<endl;
    cout<<"La cantidad total en $ de Depositos de la sucursla 3 fue de: $"<<total_monto_suc3<<endl<<endl;

    //E
    cout<<"La cantidad de depositos en la sucursal de tigre fue de "<<depositos_suc3<<endl<<endl;
    //F
    cout<<"La sucursal que tuvo mayor cantidad de depositos fue la N "<<suc_max_depositos<<endl<<endl;
    return 0;
}
