#include <iostream>

using namespace std;

int main() {
    int ejercicios;
    cin>>ejercicios;
    if(ejercicios == 1) {
    char lang;
    float hs;
    bool urgente = false;
    int urgente_int;
    float precio = 0;
    cout<<"Ingrese el lenguaje en el que quiere hacer el programa, las horas que requerira y si es urgente (par = si/impar = no)"<<endl;
    cin>>lang>>hs>>urgente_int;
    if (urgente_int % 2 == 0){
        urgente = true;
    }
    switch(lang) {
        case 'C':
        precio=hs*2500;

        break;

        case 'c':
        precio=hs*2500;
        break;

        case '#':
        precio=hs*2100;
        break;

        case 'P':
        precio=hs*1400;
        break;

        case 'p':
        precio=hs*1400;
        break;

        case 'G':
        precio=hs*1400;
        break;

        case 'g':
        precio=hs*1400;
        break;

        default:
         cout<<"Ese lenguaje no existe"<<endl;
        break;
    }
    if (urgente == true){
        precio = precio*2.2;
    }

    if (precio>0){
    cout<<"El precio es de $"<<precio<<endl;
    }

  }
    else if (ejercicios == 2) {
    float alt_pers1, alt_pers2, alt_pers3, alt_pers4, alt_pers5;
    int edad_pers1, edad_pers2, edad_pers3, edad_pers4, edad_pers5;
    cout<<"Ingrese la edad y altura de la persona 1 (en metros)"<<endl;
    cin>>edad_pers1>>alt_pers1;
    cout<<"Ahora ingrese la edad y altura de la persona 2 (en metros)"<<endl;
    cin>>edad_pers2>>alt_pers2;
    cout<<"Ahora ingrese la edad y altura de la persona 3(en metros)"<<endl;
    cin>>edad_pers3>>alt_pers3;
    cout<<"Ahora ingrese la edad y altura de la persona 4(en metros)"<<endl;
    cin>>edad_pers4>>alt_pers4;
    cout<<"Ahora ingrese la edad y altura de la persona 5(en metros)"<<endl;
    cin>>edad_pers5>>alt_pers5;
    int edad_altura = 0;
    float promedio_altura = 0;
  float conteo_promedio_altura;
    int altura_17_18 = 0;
    int edad_20_30_40 = 0;


    if (alt_pers1 > 1.8  && edad_pers1 > 30) {
        edad_altura++;
        }
    if (alt_pers2 > 1.8  && edad_pers2 > 30) {
        edad_altura++;
        }
    if (alt_pers3 > 1.8  && edad_pers3 > 30) {
        edad_altura++;
        }
    if (alt_pers4 > 1.8  && edad_pers4 > 30) {
        edad_altura++;
        }
    if (alt_pers5 > 1.8  && edad_pers5 > 30) {
        edad_altura++;
        }

    if (edad_pers1>30){
        promedio_altura = promedio_altura + alt_pers1;
     conteo_promedio_altura++;
    }
    if (edad_pers2>30){
        promedio_altura = promedio_altura + alt_pers2;
     conteo_promedio_altura++;
    }
    if (edad_pers3>30){
        promedio_altura = promedio_altura + alt_pers3;
     conteo_promedio_altura++;
    }
    if (edad_pers4>30){
        promedio_altura = promedio_altura + alt_pers4;
     conteo_promedio_altura++;
    }
    if (edad_pers5>30){
        promedio_altura = promedio_altura + alt_pers5;
     conteo_promedio_altura++;
    }

    promedio_altura = promedio_altura/conteo_promedio_altura;

    if (alt_pers1 >= 1.7 && alt_pers1 >= 1.8){
        altura_17_18++;
    }
    if (alt_pers2 >= 1.7 && alt_pers2 >= 1.8){
        altura_17_18++;
    }
    if (alt_pers3 >= 1.7 && alt_pers3 >= 1.8){
        altura_17_18++;
    }
    if (alt_pers4 >= 1.7 && alt_pers4 >= 1.8){
        altura_17_18++;
    }
    if (alt_pers5 >= 1.7 && alt_pers5 >= 1.8){
        altura_17_18++;
    }

    if (edad_pers1 == 20 || edad_pers1 == 30 || edad_pers1 == 40){
        edad_20_30_40++;
    }
    if (edad_pers2 == 20 || edad_pers2 == 30 || edad_pers2 == 40){
        edad_20_30_40++;
    }
    if (edad_pers3 == 20 || edad_pers3 == 30 || edad_pers3 == 40){
        edad_20_30_40++;
    }
    if (edad_pers4 == 20 || edad_pers4 == 30 || edad_pers4 == 40){
        edad_20_30_40++;
    }
    if (edad_pers5 == 20 || edad_pers5 == 30 || edad_pers5 == 40){
        edad_20_30_40++;
    }

    cout<<"La cantidad de personas mayor a 30 y mas altas que 1.8 metros es de "<<edad_altura<<endl;
    cout<<"El promedio de altura de las personas mayores a 30 años es de "<<promedio_altura<<endl;
    cout<<"La cantidad de personas que miden entre 1.7 y 1.8 metros es de "<<altura_17_18<<endl;
    cout<<"La cantidad de personas que tienen exactamente 20, 30 o 40 años es de "<<edad_20_30_40;

    }

    else if(ejercicios==3){
        int conejos_blancos = 45;
        int conejos_negros = 50;
        int conejos_marrones = 40;
        int conejos_grises = 49;
        int venta_conejos;
        int tipo_conejo;
        int total_vendido = 0;
        cout<<"para la primera compra ingrese cuantos conejos quiere comprar y luego su tipo (1= blancos, 2= negros, 3= marrones, 4= grises"<<endl;
        cin>>venta_conejos>>tipo_conejo;
        if(venta_conejos>10){
            cout<<"Lo siento, pero no se pueden comprar mas de 10 conejos, intente con una cantidad menor"<<endl;;
            cin>>venta_conejos;
        }
        switch(tipo_conejo){
            case 1:
            conejos_blancos = conejos_blancos-venta_conejos;
            break;

            case 2:
            conejos_negros = conejos_negros-venta_conejos;
            break;

            case 3:
            conejos_marrones = conejos_marrones - venta_conejos;
            break;

            case 4:
            conejos_grises = conejos_grises - venta_conejos;
            break;

            default:
            cout<<"No existe ese tipo de conejo"<<endl;
            break;

        }
        total_vendido = total_vendido+venta_conejos;
        //FIN PRIMER COMPRA E INICIO SEGUNDA
        cout<<"para la segunda compra ingrese cuantos conejos quiere comprar y luego su tipo (1= blancos, 2= negros, 3= marrones, 4= grises"<<endl;
        cin>>venta_conejos>>tipo_conejo;
        if(venta_conejos>10){
            cout<<"Lo siento, pero no se pueden comprar mas de 10 conejos, intente con una cantidad menor"<<endl;
            cin>>venta_conejos;
        }
        switch(tipo_conejo){
            case 1:
            conejos_blancos = conejos_blancos-venta_conejos;
            break;

            case 2:
            conejos_negros = conejos_negros-venta_conejos;
            break;

            case 3:
            conejos_marrones = conejos_marrones - venta_conejos;
            break;

            case 4:
            conejos_grises = conejos_grises - venta_conejos;
            break;

            default:
            cout<<"No existe ese tipo de conejo"<<endl;
            break;
        }
        total_vendido = total_vendido+venta_conejos;
        //FIN SEGUNDA COMPRA E INICIO TERCERA
        cout<<"para la tercera compra ingrese cuantos conejos quiere comprar y luego su tipo (1= blancos, 2= negros, 3= marrones, 4= grises"<<endl;
        cin>>venta_conejos>>tipo_conejo;
        if(venta_conejos>10){
            cout<<"Lo siento, pero no se pueden comprar mas de 10 conejos, intente con una cantidad menor"<<endl;
            cin>>venta_conejos;
        }
        switch(tipo_conejo){
            case 1:
            conejos_blancos = conejos_blancos-venta_conejos;
            break;

            case 2:
            conejos_negros = conejos_negros-venta_conejos;
            break;

            case 3:
            conejos_marrones = conejos_marrones - venta_conejos;
            break;

            case 4:
            conejos_grises = conejos_grises - venta_conejos;
            break;

            default:
            cout<<"No existe ese tipo de conejo"<<endl;
            break;
        }
        total_vendido = total_vendido+venta_conejos;
        //FIN TERCERA COMPRA
        cout<<"En total se vendieron "<<total_vendido<<" conejos"<<endl;
        cout<<"En total quedaron "<<conejos_blancos<<" conejos blancos, "<<conejos_negros<<" conejos negros, "<<conejos_marrones<<" conejos marrones, y "<<conejos_grises<<" conejos grises"<<endl;
        if(conejos_blancos==45){
            cout<<"No se vendieron conejos blancos"<<endl;
        }
        if(conejos_negros==50){
            cout<<"No se vendieron conejos negros"<<endl;
        }
        if(conejos_marrones==40){
            cout<<"No se vendieron conejos marrones"<<endl;
        }
        if(conejos_grises==49){
            cout<<"No se vendieron conejos grises"<<endl;
        }
    }

    return 0;
}








