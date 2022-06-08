#include <iostream>
/*
Una empresa comercializa 15 artículos y por cada venta realizada genera un registro con los siguientes datos:
Nro. de Artículo (1 a 15)
Cantidad Vendida
Nro. de Sucursal (1 a 4)
A este lote se le precede otro lote ordenado por número de artículo con la siguiente información:
Nro de artículo
Stock

Puede haber varios registros de venta para el mismo artículo y el fin de la carga de datos se indica con número de artículo igual a cero.

Se pide determinar e informar:
Por cada artículo, la cantidad de unidades vendidas.
Por cada sucursal, los números de artículos que vendieron más de 10 unidades.
Por cada artículo, la sucursal donde más se comercializó.
Los artículos cuyo stock quedaron en cero.
Los artículos cuyo stock disminuyó más de la mitad.

*/
using namespace std;
int main() {
    //Primer Lote Stock de Articulos
    int articulo;
    int stock[16] = {}; //Le pongo 16 espacios, porque despues va a ser un lio guiarse con tanto x+1 para que salgan bien los datos, la posicion de stock[0] no va a ser usada
    int stock_ej5[16] = {};
    for(articulo = 1; articulo<=15;articulo++){
        cout<<"Ingrese el stock del articulo N "<<articulo<<" : ";
        cin>>stock[articulo];
        stock_ej5[articulo] = stock[articulo];
            suc[user_suc][articulo] += cant_vendida;
        }
        cout<<endl<<"Ingrese el articulo vendido: ";
            while(check_articulo == 0){
            cin>>articulo;
            if(articulo>=0 && articulo<=15){
                check_articulo++;
            }
            else{
                cout<<"Numero de articulo no existente... ingrese uno valido."<<endl;
            }
        }
    }while(articulo!=0);


    //Salida de Datos.

    //Ej 1.
    cout<<endl<<endl;
    cout<<endl<<endl<<"Ej 1:"<<endl;
    for(int x = 1;x<=15;x++){
        cout<<"Los cantidad de unidades vendidas del articulo "<<x<<" es de "<<cant_vendidas[x]<<endl;
    }

    //Ej 2
    cout<<endl<<endl<<"Ej 2:"<<endl;
    for(int sucu = 1; sucu<=4;sucu++){
        cout<<endl<<"En la sucursal N"<<sucu<<" los productos que tuvieron mas de 10 unidades vendidas fueron los siguientes: "<<endl<<endl;
        for(articulo = 1; articulo<=15;articulo++){
        if(suc[sucu][articulo]>10){
            cout<<articulo<<endl;
        }
        }
    }

    //Ej 3
    cout<<endl<<endl<<"Ej 3:"<<endl;
    for(int sucu = 1; sucu<=4; sucu++){
        cout<<endl<<"Los articulos que se vendieron mas en la sucursal "<<sucu<<" que en las otras sucursales fueron los siguientes: "<<endl;
        for(articulo = 1;articulo<=15;articulo++){
            if(suc[sucu][articulo]>= suc[1][articulo] && suc[sucu][articulo]>= suc[2][articulo] && suc[sucu][articulo]>= suc[3][articulo] && suc[sucu][articulo]>= suc[4][articulo] && suc[sucu][articulo]!=0){
                cout<<articulo<<endl;
            }
        }
    }

    //Ej 4
    cout<<endl<<endl<<"Ej 4:"<<endl;
    for(articulo = 1; articulo<=15;articulo++){
        if(stock[articulo] == 0){
            cout<<"El articulo "<<articulo<<" no tiene mas stock."<<endl;
        }
    }

    //Ej 5
    cout<<endl<<endl<<"Ej 5:"<<endl;
    for(int articulo = 1; articulo<=15; articulo++){
        if(stock_ej5[articulo]>stock[articulo]*2){
            cout<<"El articulo "<<articulo<<" se disminuyo en stock mas de la mitad"<<endl;
        }
    }
    return 0;
}
