#include <iostream>
/*
Se ingresa un lote de 24 registros donde se informa para cada provincia el nro. de zona geográfica en donde la misma está ubicada.

Cada registro contiene:
- Nro. de Provincia(1 a 24)
- Nro. de Zona de la provincia(1 a 9)

A partir de este lote se pide que se informe las zonas que abarquen más de 3 provincias distintas y cuales son esas 3 provincias.

*/
using namespace std;
int main() {
    int num_zona[9][25] = {}; //La primer columna se separa para marcar cantidad de elementos dentro
    int zona;
    int check_zona = 0;
    int provincia;

    //Ingreso de Datos:
    for(provincia = 1;provincia<=24;provincia++){
    check_zona = 0;

    cout<<"Ingrese la zona a la que pertenece la provincia "<<provincia<<":";
        while(check_zona==0){
        cin>>zona;
            if(zona>0 && zona<10){
            check_zona++;
            }
            else{
            cout<<"Esa zona no existe, porfavor ingrese una zona existente."<<endl;
            }
        }

    num_zona[zona-1][0]++;
    num_zona[zona-1][num_zona[zona-1][0]] = provincia; //Este valor ademas de ir enumerando arriba de cada variable su contador, me va a servir para ahorrar procesos en la salida de datos.
    }

    //Egreso de Datos:
    for(int x = 0;x<9;x++){
        if(num_zona[x][0]>3){
            cout<<"La zona N"<<x+1<<" tiene mas de 3 provincias, y estas son: "<<endl;
            for(int y = 1; y<=24;y++){
                if(num_zona[x][y]>0){
                    cout<<"La provincia N"<<num_zona[x][y]<<endl;

                }
            }
        }
    }
    return 0;
}
