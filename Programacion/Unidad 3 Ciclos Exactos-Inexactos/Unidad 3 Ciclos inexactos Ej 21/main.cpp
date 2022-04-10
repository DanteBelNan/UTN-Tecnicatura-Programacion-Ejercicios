
#include <iostream>

using namespace std;

int main()
{
    int num_cliente = 0;
            int num_sucursal = 1;
            int saldo_cliente;
            //INICIO CONTEO DE CLIENTES
            //Va a contar los clientes de cada sucursal
            float contador_clientes_suc1 = 0;
            float contador_clientes_suc2 = 0;
            float contador_clientes_suc3 = 0;
            float contador_clientes_suc4 = 0;
            //Va a contar los clientes con mas de $20.000 de saldo de cada sucursal
            float contador_clientes_suc1_20k = 0;
            float contador_clientes_suc2_20k = 0;
            float contador_clientes_suc3_20k = 0;
            float contador_clientes_suc4_20k = 0;
            //Valores de los porcentajes
            float porcentaje_clientes_suc1_20k = 0;
            float porcentaje_clientes_suc2_20k = 0;
            float porcentaje_clientes_suc3_20k = 0;
            float porcentaje_clientes_suc4_20k = 0;
            //Mayor porcentaje de sucursal
            float max_porc_suc;
            //FIN CONTEO DE clientes

            //MAXIMO SUELDO clientes
            int num_cliente_max;
            int num_suc_max;
            int max_saldo = -2147483647;
            //FIN MAXIMO SUELDO clientes

            //INICIO SUMA DE CADA sucursal
            int total_suc1 = 0;
            int total_suc2 = 0;
            int total_suc3 = 0;
            int total_suc4 = 0;
            //FIN SUMA DE CADA sucursal

            //INICIO bucle
            while(num_sucursal!=10){
                cout<<"Ingrese el numero de cliente"<<endl;
                cin>>num_cliente;
                cout<<"Ingrese el numero de sucursal"<<endl;
                int verif_check = 0;
                //Este bucle verifica que la sucursal seleccionada sea valida
                while(num_sucursal>=1 && num_sucursal<=4 && verif_check==0){
                    verif_check = 0; //Lo redeclaramos, para que al dar mas vueltas, siempre empiece valiendo 0
                    cin>>num_sucursal;
                    if(num_sucursal==10){
                        cout<<"Usted obtendra los resultados al poner cualquier numero"<<endl;
                        break;
                    }
                    if(num_sucursal<1 || num_sucursal>4){
                        cout<<"Esa sucursal no existe, ingrese una valida"<<endl;
                    }
                    else {
                        verif_check = 1;
                    }
                } // fin bucle verificador
                cout<<"Ingrese el saldo del cliente"<<endl;
                cin>>saldo_cliente;
                //Ejercicio A:
                switch(num_sucursal) {
                    case 1:
                    contador_clientes_suc1++;
                    if(saldo_cliente>=20000){
                        contador_clientes_suc1_20k++;
                    }
                    porcentaje_clientes_suc1_20k = contador_clientes_suc1_20k/contador_clientes_suc1*100;
                    break;

                    case 2:
                    contador_clientes_suc2++;
                    if(saldo_cliente>=20000){
                        contador_clientes_suc2_20k++;
                    }
                    porcentaje_clientes_suc2_20k = contador_clientes_suc2_20k/contador_clientes_suc2*100;
                    break;

                    case 3:
                    contador_clientes_suc3++;
                    if(saldo_cliente>=20000){
                        contador_clientes_suc3_20k++;
                    }
                    porcentaje_clientes_suc3_20k = contador_clientes_suc3_20k/contador_clientes_suc3*100;
                    break;

                    case 4:
                    contador_clientes_suc4++;
                    if(saldo_cliente>=20000){
                        contador_clientes_suc4_20k++;
                    }
                    porcentaje_clientes_suc4_20k = contador_clientes_suc4_20k/contador_clientes_suc4*100;
                    break;
                }
                if(porcentaje_clientes_suc1_20k>porcentaje_clientes_suc2_20k && porcentaje_clientes_suc1_20k>porcentaje_clientes_suc3_20k && porcentaje_clientes_suc1_20k>porcentaje_clientes_suc4_20k){
                    max_porc_suc = porcentaje_clientes_suc1_20k;
                }
                else if(porcentaje_clientes_suc2_20k>porcentaje_clientes_suc1_20k && porcentaje_clientes_suc2_20k>porcentaje_clientes_suc3_20k && porcentaje_clientes_suc2_20k>porcentaje_clientes_suc4_20k){
                    max_porc_suc = porcentaje_clientes_suc2_20k;
                }
                else if(porcentaje_clientes_suc3_20k>porcentaje_clientes_suc1_20k && porcentaje_clientes_suc3_20k>porcentaje_clientes_suc2_20k && porcentaje_clientes_suc3_20k>porcentaje_clientes_suc4_20k){
                    max_porc_suc = porcentaje_clientes_suc3_20k;
                }
                else {
                    max_porc_suc= porcentaje_clientes_suc4_20k;
                }
                //Fin Ejercicio A

                //Ejercicio B:
                if(saldo_cliente>max_saldo){
                    max_saldo = saldo_cliente;
                    num_cliente_max = num_cliente;
                    num_suc_max = num_sucursal;
                }
                //Fin Ejercicio B.

                //Inicio Ejercicio C:
                switch(num_sucursal){
                    case 1:
                    total_suc1 +=saldo_cliente;
                    break;

                    case 2:
                    total_suc2 +=saldo_cliente;
                    break;

                    case 3:
                    total_suc3 +=saldo_cliente;
                    break;

                    case 4:
                    total_suc4 +=saldo_cliente;
                    break;
                }
                //Fin Ejercicio C.
            }
             //FIN bucle
            cout<<endl<<endl;
            //Resultado Ejercicio A:
            cout<<"Ejercicio A:"<<endl;
            if(max_porc_suc == porcentaje_clientes_suc1_20k){
                cout<<"La sucursal con porcentaje de clientes con mas de $20000 de saldo es la N 1, con un porcentaje de "<<max_porc_suc<<endl;
            }
            else if(max_porc_suc == porcentaje_clientes_suc2_20k){
                cout<<"La sucursal con porcentaje de clientes con mas de $20000 de saldo es la N 2, con un porcentaje de "<<max_porc_suc<<endl;
            }
            else if(max_porc_suc == porcentaje_clientes_suc3_20k){
                cout<<"La sucursal con porcentaje de clientes con mas de $20000 de saldo es la N 3, con un porcentaje de "<<max_porc_suc<<endl;
            }
            else {
                cout<<"La sucursal con porcentaje de clientes con mas de $20000 de saldo es la N 4, con un porcentaje de "<<max_porc_suc<<endl;
            }
            //Fin Resultado Ejercicio A

            //Inicio Resultado Ejercicio B
            cout<<"Ejercicio B:"<<endl;
            cout<<"El Cliente con mayor saldo es el N"<<num_cliente_max<<" y esta en la sucursal "<<num_suc_max<<endl;
           //Fin Resultado Ejercicio B

           //Inicio Resultado C
           cout<<"Ejercicio C:"<<endl;
           cout<<"La sumatoria total de saldos de la sucursal 1 es de "<<total_suc1<<endl;
           cout<<"La sumatoria total de saldos de la sucursal 2 es de "<<total_suc2<<endl;
           cout<<"La sumatoria total de saldos de la sucursal 3 es de "<<total_suc3<<endl;
           cout<<"La sumatoria total de saldos de la sucursal 4 es de "<<total_suc4<<endl;
          //Fin Resultado C
    return 0;
}
