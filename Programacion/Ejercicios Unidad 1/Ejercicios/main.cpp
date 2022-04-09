#include <iostream>

using namespace std;

int main()
{
    bool menu = true;
    int ejercicio;
    while(menu == true){
    cout << "Que ejercicio quiere hacer? (ingrese el numero correspondiente)"<<endl;
    cin>> ejercicio;

    if (ejercicio==1){
    cout << "Ingrese las horas trabajadas en este mes" << endl;
    double horas;
    cin>>horas;
    cout << "Ingrese su salario por hora"<<endl;
    double sal_hora;
    cin>>sal_hora;
    double sal_mes = sal_hora*horas;
    cout<<"Su salario por mes, es de $"<<sal_mes<<endl;
    }
    else if(ejercicio==2){
        cout<<"Ingrese dos numeros"<<endl;
        int num1;
        int num2;
        int respaldo;
        cin>>num1;
        cin>>num2;
        respaldo = num1;
        num1 = num2;
        num2 = respaldo;
        cout<<num1<<endl<<num2<<endl;
    }
    else if(ejercicio==3){
        int sueldo_fijo = 15000;
        int bono_auto = 2000;
        int auto_vendido;
        int total_bono;
        int sueldo_final;
        cout<<"Cuantos autos vendio el vendedor?"<<endl;
        cin>>auto_vendido;
        total_bono = auto_vendido*bono_auto;
        sueldo_final = sueldo_fijo + total_bono;
        cout<<"Si el vendedor vendio "<<auto_vendido<<" cantidad de autos, cobrara $"<<sueldo_final << endl;
    }

    else if(ejercicio==4){
        int pasajes_disponibles;
        int pasajes_comprados;
        int pasajes_totales;
        float ocupacion;
        float espacio_libre;
        cout<<"Ingrese cuantos asientos disponibles hay"<<endl;
        cin>>pasajes_disponibles;
        cout<<"Ingrese cuantos pasajes se compraron"<<endl;
        cin>>pasajes_comprados;
        pasajes_totales = pasajes_comprados+pasajes_disponibles;
        ocupacion = (float)pasajes_comprados/pasajes_totales*100;
        espacio_libre = 100-ocupacion;
        cout<<"La ocupacion es de "<<ocupacion<<"%"<<endl;
        cout<<"El espacio libre es de "<<espacio_libre<<"%"<<endl;
    }

    else if(ejercicio==5){
        float alfajor_a;
        float alfajor_b;
        float alfajor_c;
        cout<<"Ingrese cuantos alfajores A vendio"<<endl;
        cin>>alfajor_a;
        cout<<"Ingrese cuantos alfajores B vendio"<<endl;
        cin>>alfajor_b;
        cout<<"Ingrese cuantos alfajores C vendio"<<endl;
        cin>>alfajor_c;
        float venta_total = alfajor_c+alfajor_b+alfajor_a;
        float porcentaje_a = alfajor_a/venta_total*100;
        float porcentaje_b = alfajor_b/venta_total*100;
        float porcentaje_c = alfajor_c/venta_total*100;
        cout<<"El porcentaje de ventas del alfajor A fue de "<<porcentaje_a<<"%"<<endl;
        cout<<"El porcentaje de ventas del alfajor B fue de "<<porcentaje_b<<"%"<<endl;
        cout<<"El porcentaje de ventas del alfajor C fue de "<<porcentaje_c<<"%"<<endl;

    }

    else if(ejercicio==6){
        float sem_1;
        float sem_2;
        float sem_3;
        float sem_4;
        float promedio;
        float total_recaudado;
        float porcentaje1;
        float porcentaje2;
        float porcentaje3;
        float porcentaje4;
        cout<<"Ingrese uno a uno, lo recaudado en cada semana"<<endl;
        cin>>sem_1;
        cin>>sem_2;
        cin>>sem_3;
        cin>>sem_4;
        total_recaudado = sem_1+sem_2+sem_3+sem_4;
        promedio = total_recaudado/4;
        porcentaje1 = sem_1/total_recaudado*100;
        porcentaje2 = sem_2/total_recaudado*100;
        porcentaje3 = sem_3/total_recaudado*100;
        porcentaje4 = sem_4/total_recaudado*100;
        cout<<"El promedio recaudado por semana fue de "<<promedio<<endl;
        cout<<"Y el porcentaje semana a semana fue de"<<endl;
        cout<<porcentaje1<<"%"<<endl;
        cout<<porcentaje2<<"%"<<endl;
        cout<<porcentaje3<<"%"<<endl;
        cout<<porcentaje4<<"%"<<endl;
    }
    else if(ejercicio==7){
        float importe_venta;
        float descuento;
        float a_descontar;
        float precio_neto;

        cout<<"Ingrese el importe de la venta y luego el descuento correspondiente"<<endl;
        cin>>importe_venta;
        cin>>descuento;
        a_descontar = importe_venta*descuento/100;
        precio_neto = importe_venta-a_descontar;
        cout<<"El importe a pagar final es de $"<<precio_neto<<endl;
    }
    else if(ejercicio==8){
        /*
        DESPEJO LA INCOGNITA PARA SABER LA FORMULA CORRECTA

        descuento aplicado = producto sin descuento * descuento/100
        descento aplicado*100/producto sin descuento = descuento
        descuento = descuento aplicado*100/producto sin descuento

        Luego a 100 le resto el descuento, para que me de el porcentaje que de desconto realmente
        */
        float producto_bruto ;
        float producto_neto ;
        cout<<"Ingrese el valor del producto sin descuento, y luego el valor del producto con descuento"<<endl;
        cin>>producto_bruto;
        cin>>producto_neto;
        float descuento = 100-(producto_neto*100/producto_bruto);
        cout<<"El descuento es de "<<descuento<<"%"<<endl;
    }
    else if(ejercicio==9){
        //para explicacion, mirar el ejercicio 11
        int minutos_totales;
        int horas;
        int minutos;
        cout<<"Ingrese los minutos que quiere convertir a hora y minutos"<<endl;
        cin>>minutos_totales;
        horas = minutos_totales/60;
        minutos = minutos_totales%60;
        cout<<horas<<" horas y "<<minutos<<" minutos "<<endl;
    }
    else if(ejercicio==10){
        //para explicacion, mirar el ejercicio 11
        int horas_totales;
        int dias;
        int horas;
        cout<<"Ingrese los dias que quiere convertir a dias y horas"<<endl;
        cin>>horas_totales;
        dias = horas_totales/24;
        horas = horas_totales%24;
        cout<<dias<<" dias y "<<horas<<" horas "<<endl;
    }
    else if(ejercicio==11){
        int minutos_totales;
        int dias;
        int horas;
        int minutos;
        cout<<"Ingrese los minutos que quiere convertir a dias, horas y minutos"<<endl;
        cin>>minutos_totales;
        minutos = minutos_totales%60; //calcula cuantos minutos sobran (no estan en ninguna hora entera)
        horas = minutos_totales/60; //calcula la cantidad total de horas, para asi conseguir los dias
        dias = horas/24;
        horas = horas%24; /*utiliza la cantidad total de horas obtenida antes
        para asi obtener el valor de horas sobrantes (que no estan en ningun dia entero) */
        cout<<dias<<" dias, "<<horas<<" horas y "<<minutos<<" minutos "<<endl;

    }
    else if(ejercicio==12){
        int docena_huevos ;
        int huevos ;
        int compra_huevos;
        int total_pagar;
        cout<<"Ingrese cuantos huevos se compraron"<<endl;
        cin>>compra_huevos;

        docena_huevos = (compra_huevos/12)*100; //calcula $ por docena
        huevos = (compra_huevos%12)*12; //calcula $ por unidad que no entro en docena
        total_pagar = docena_huevos+huevos;
        cout<<"En total se pagan $"<<total_pagar<<endl;


    }
    else if(ejercicio==13){
        int importe_retirar; // el valor total que se retira
        int cantidad_1000; //cantidad de billetes de 1000
        int cantidad_500; // cantidad de billetes de 500
        int cantidad_200; // cantidad de billetes de 200
        int cantidad_100; // cantidad de billetes de 100
        bool bucle_importe = true;
        cout<<"Cuanto dinero quiere retirar? (debe ser multiplo de 100)"<<endl;
        while(bucle_importe == true){ //todo este while esta para
        cin>>importe_retirar;       //asegurarme de que el usuario
        if(importe_retirar%100 == 0){ //ingrese numeros multiplos de 100
            bucle_importe = false;
        }
        else if(importe_retirar%100 != 0){
            cout<<"El valor no es multiplo de 100, por favor ingrese otro"<<endl;
        }
        }

        cantidad_1000 = importe_retirar/1000;
        importe_retirar = importe_retirar%1000;
        if(cantidad_1000>0){
        cout<<cantidad_1000<<" billetes de 1000"<<endl;
        }// estos if se encargan de mostrar texto solo si hay billetes de este valor

        cantidad_500 = importe_retirar/500;
        importe_retirar = importe_retirar%500;
        if(cantidad_500>0){
        cout<<cantidad_500<<" billetes de 500"<<endl;
        }

        cantidad_200 = importe_retirar/200;
        importe_retirar = importe_retirar%200;
        if(cantidad_200>0){
        cout<<cantidad_200<<" billetes de 200"<<endl;
        }

        cantidad_100 = importe_retirar/100;
        importe_retirar = importe_retirar%100;
        if(cantidad_100>0){
        cout<<cantidad_100<<" billetes de 100"<<endl;
        }

    }
    else if(ejercicio>13){
        cout<<"No hay tal ejercicio, porfavor ingresar un valor menor"<<endl;
    }

    cout<<"Quiere ver otro ejercicio? (numero par = si | numero inpar = no)"<<endl;
    int terminar_programa;
    cin>> terminar_programa;
    if (terminar_programa%2 != 0)
    {
        menu = false;
    }
    }
    return 0;
}
