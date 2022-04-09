#include <iostream>

using namespace std;

int main()
{
    bool menu = true;
    int ejercicio;              //ESTAS LINEAS IGNORARLAS, SON SIMPLEMENTE PARA QUE EL PROGRAMA FUNCIONE COMO UN MENU DE EJERCICIOS
    while(menu == true){
    cout << "Que ejercicio quiere hacer? (ingrese el numero correspondiente)"<<endl;
    cin>> ejercicio;
    if (ejercicio==1){
        //Ingresar un numero y decir si es positivo, negativo o cero
        int numero;
        cout<<"Ingrese un numero"<<endl;
        cin>>numero;
        if(numero==0){
            cout<<"El numero es 0";
        }
        else if (numero<0){
            cout<<"El numero es negativo";
        }
        else{
            cout<<"El numero es positivo";
        }
    }

    else if (ejercicio==2){
        //Ingresar dos numeros e indicar si el primero es multiplo del segundo
        int n1, n2;
        cout<<"Ingrese los dos numeros"<<endl;
        cin>>n1>>n2;
        if(n1%n2==0){
            cout<<n2<<" es multiplo de "<<n1;
        }
    }

    else if (ejercicio==3){
        //Determinar si un numero ingresado es par o inpar
        cout<<"Ingrese el numero a determinar"<<endl;
        int n1;
        cin>>n1;
        if(n1%2==0){
            cout<<n1<<" es par";
        }
        else {
            cout<<n1<<" es inpar";
        }
    }

    else if (ejercicio==4){
        //Indicar la diferencia absoluta entre dos numeros ingresados
        int num_mayor;
        int num_menor;  //ya que para sacar la diferencia absoluta, hay que restarle al mayor numero el numero mas chico, primero voy a identificar cual es cual
        int respaldo;
        int diff_absoluta;
        cout<<"Ingrese los dos numeros"<<endl;
        cin>>num_mayor>>num_menor;
        if (num_menor>num_mayor){
            respaldo = num_mayor;
            num_mayor = num_menor;  //ahora ordeno el valor de las variables
            num_menor = respaldo;
        }
        diff_absoluta = num_mayor-num_menor;
        cout<<"La diferencia absoluta entre "<<num_mayor<<" y "<<num_menor<<" es de "<<diff_absoluta;
    }

    else if(ejercicio==5) {
        float importe_venta;
        float precio_final;
        const float descuento_c = 0.95;
        const float descuento_m = 0.90;  //estas constantes las deje para acostumbrarme, son el resultado que quedara al valor cuando se aplique el descuento
        const float descuento_g = 0.85; // ej (descuento del 5% es igual a 0.05, por lo tanto, al descontar, queda del total, que es un 100%, un 0.95)
        cout<<"Ingrese el importe realizado"<<endl;
        cin>>importe_venta;
        if (importe_venta<100){
            precio_final = importe_venta*descuento_c;
        }
        else if (importe_venta>=100 && importe_venta<=500){
            precio_final = importe_venta*descuento_m;
        }
        else {
            precio_final = importe_venta*descuento_g;
        }
        cout<<"El precio del producto con descuento aplicado es de $"<<precio_final<<endl;
    }

    else if(ejercicio==6){
        float n1, n2, n3;
        cout<<"Ingrese tres numeros"<<endl;
        cin>>n1>>n2>>n3;
        int equidad = 0; //este valor va a sumarse en uno cada vez que dos numeros sean iguales
        if (n1 == n2){ // y si dos numeros son iguales, por consecuencia el tercero tambien lo sera
            equidad++;
        }
        if (n2 == n3) {
            equidad++;
        }

        if (equidad==2){  //aca dice que si los tres numeros son iguales, calculando los valores que se van a sumar en equidad
            cout<<"Los tres numeros son iguales"<<endl;
        }
        else {
            cout<<"Los tres numeros no son iguales"<<endl;
        }
    }

    else if (ejercicio == 7){
        float n1, n2, n3;
        cout<<"Ingrese los tres numeros"<<endl;
        cin>>n1>>n2>>n3;
        int inequidad = 0;
        if (n1 != n2){
            inequidad++;
        }
        if (n1 != n3) {
            inequidad++;
        }
        if (n2 != n3) {
            inequidad++;
        }
        if(inequidad==3){
            cout<<"Los tres numeros son diferentes"<<endl;
        }
    }

    else if (ejercicio == 8) {
        float lado1, lado2, lado3;
        cout<<"Ingrese los valores de cada lado del trianguilo"<<endl;
        cin>>lado1>>lado2>>lado3;
        int equidad = 0;
        if (lado1 == lado2){
            equidad++;
        }                   //aqui calculo cuantos lados son iguales
        if (lado1 == lado3){
            equidad++;
        }


        if (equidad == 0){
            cout<<"Es un triangulo escaleno"<<endl;
        }
        else if (equidad == 1){
            cout<<"Es un triangulo isosceles"<<endl;  //aqui defino para que me diga segun el valor de equidad, que triangulo es
        }
        else {
            cout<<"Es un triangulo equilatero"<<endl;
        }
    }

    else if (ejercicio == 9){
        float n1, n2, n3, maxn;
        cout<<"Ingrese tres numeros"<<endl;
        cin>>n1>>n2>>n3;
        if(n1>n2){
            if(n1>n3){
                maxn = n1;
            }
            else {
                maxn = n3;
            }
        }
        else {
            if (n2>n3){   //simplemente aca anido los if / else para que me de el valor que quiero (es mas facil de leer en diagrama de flujo)
                maxn = n2;
            }
            else {
                maxn = n3;
            }
        }
        cout<<"El numero mayor es "<<maxn<<endl;
    }

    else if (ejercicio == 10){
        float n1, n2, n3, n4, n5;
        float maxn, maxn2;  //este programa lo voy a resolver dividiendo los numeros en burbujas, y asi no hacer un anidado de if muy largo
        cout<<"Ingrese cinco numeros"<<endl;
        cin>>n1>>n2>>n3>>n4>>n5;
        if (n1>n2){
            maxn = n1;
        }
        else {
            maxn = n2;
        }
        if (n4>n5){
            maxn2 = n4;
        }
        else {
            maxn2 = n5;
        }
        if(maxn2>maxn){
            maxn = maxn2;
        }

        if(n3>maxn){
            maxn = n3; //este ultimo numero ni lo tuve que guardar en burbuja ya que estaba solo directamente
        }
        cout<<"El numero mayor es "<<maxn<<endl;
    }

    else if (ejercicio == 11){
        float n1, n2, n3, n4, n5;
        int positivos = 0;
        cout<<"Ingrese cinco numeros"<<endl;
        cin>>n1>>n2>>n3>>n4>>n5;
        if (n1>0) {
            positivos++;
        }

        if (n2>0) {
            positivos++;
        }

        if (n3>0) {
            positivos++;
        }

        if (n4>0) {
            positivos++;
        }

        if (n5>0) {
            positivos++;
        }
        cout<<"La cantidad de numeros positivos es de "<<positivos<<endl;
    }

    else if (ejercicio == 12) {
        float n1, n2, n3;
        float mediumn;
        cout<<"Ingrese tres numeros"<<endl;
        cin>>n1>>n2>>n3;
        if (n1>n2 && n1<n3){
            mediumn = n1;
        }
        else if (n2>n1 && n2<n3) {
            mediumn = n2;
        }
        else {
            mediumn = n3;
        }
        cout<<"El numero del medio es "<<mediumn<<endl;
    }

    else if (ejercicio == 13){
        int edad;
        int dia, mes, year;
        cout<<"Ingrese su fecha de nacimiento"<<endl;
        cin>>dia>>mes>>year;
        int adia, ames, ayear;
        cout<<"Ahora ingrese la fecha de hoy"<<endl;
        cin>>adia>>ames>>ayear;
        if (ames>mes){
            edad = ayear-year;
        }
        else if (ames<mes){
            edad = ayear-year-1;
        }
        else if (ames == mes && adia>=dia){
            edad = ayear-year;
        }
        if (ames == mes && adia == dia){
            cout<<"Hoy cumplis una vuelta al sol mas <3, felicidades"<<endl;  //aca una linea plus para detectar si la persona cumple años
        }
        cout<<"Tu edad es de "<<edad<<" years old"<<endl;
    }

    else if (ejercicio == 14){
        int year;
        cout<<"Ingrese un year"<<endl;
        cin>>year;
        int condicion = 0; //esto va a servir de marcapasos, para detectar si ya se determino si fue bisiesto
        if (year%4==0){
                if (year%100==0){
                    if(year%400==0){
                        cout<<"Ese fue year bisiesto"<<endl;
                        condicion++;
                    }
                    else {
                        cout<<"Ese year no fue bisiesto"<<endl;
                        condicion++;
                    }                       //quedaron un poco anidados los ifs, pero basicamente, detecta que el numero sea multiplo de 4
                }                           //luego que sea multiplo de 100, y si es de 100 y 400, marca que es bisiesto, si no es de 400 pero si 100, marca que no es bisiesto
                if (condicion == 0){        //luego por ultimo, si con los multiplos de 400 y 100, no marco nada, el sistema lo detecta, y ahi marca segun si es multiplo de 4 es bisiesto
                    cout<<"Ese year fue bisiesto"<<endl;
                }
        }
        else {
            cout<<"Ese year no fue bisiesto"<<endl;
        }

    }

    else if(ejercicio == 15){
        float nota1, nota2, nota3, nota4;
        int cuenta7 = 0, cuenta4 = 0;
        cout<<"Ingrese sus 4 notas"<<endl;
        cin>>nota1>>nota2>>nota3>>nota4;
        if (nota1>=7){
            cuenta7++;
        }
        else if (nota1>=4){
            cuenta4++;
        }

        if (nota2>=7){
            cuenta7++;
        }
        else if (nota2>=4){
            cuenta4++;
        }

        if (nota3>=7){
            cuenta7++;
        }
        else if (nota3>=4){
            cuenta4++;
        }

        if (nota4>=7){
            cuenta7++;
        }
        else if (nota4>=4){
            cuenta4++;
        }
        if (cuenta7 == 4){
            cout<<"El alumno promociona"<<endl;
        }
        else if (cuenta4 >= 3){
            cout<<"El alumno rinde examen final"<<endl;
        }
        else if (cuenta4 >= 1) {
            cout<<"El alumno recupera parciales"<<endl;
        }
        else {
            cout<<"El alumno recursa"<<endl;
        }
    }

    else if(ejercicio == 16){
        float n1, n2, n3, n4;
        cout<<"Ingrese 4 numeros"<<endl;
        cin>>n1>>n2>>n3>>n4;
        if (n4>=n3 && n3>=n2 && n2>=n1){
            cout<<"Conjunto Ordenado"<<endl;
        }
        else {
            cout<<"Conjunto Desordenado"<<endl;
        }
    }

    else if (ejercicio ==17){
         float kv;
    float pago;
    cout<<"Ingrese el consumo de kilovatios"<<endl;
    cin>>kv;
        if(kv<=100){ // Kilovatios menor a 101
        pago=kv*10;
    }
    if (kv>100){
    kv=kv-100;  //calcula Kilovatios que se gastan cuando vale menos que 101
    pago=1000;
    if(kv<100){
        pago=pago+(kv*12); //calcula Kilovatios que se gastan cuando vale entre 101 y 200
    }
    if (kv>100){
        kv=kv-100; //calcula Kilovatios que se gastan cuando vale mas de 200
        pago=pago+1200;
        pago=pago+(kv*15);
    }

    }

    cout<<"$"<<pago<<endl;
    }

    else if(ejercicio>17 || ejercicio<1){
        cout<<"No hay tal ejercicio, porfavor ingresar un valor menor"<<endl;
    }


    cout<<endl;
    cout<<"Quiere ver otro ejercicio? (numero par = si | numero inpar = no)"<<endl;
    int terminar_programa;
    cin>> terminar_programa;                // ESTAS LINEAS IGNORARLAS, SON PARA QUE EL PROGRAMA FUNCIONE COMO UN MENU DE EJERCICIOS
    if (terminar_programa%2 != 0)
    {
        menu = false;
    }
    }
    return 0;
}
