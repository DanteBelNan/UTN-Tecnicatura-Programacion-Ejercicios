#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Ej 2.
void redondear_num(float ej2);

//Ej 3.
void esprimo(int ej3);

//Ej 4.
void vector(int ej4);

//Ej 5.
void mostrar_vector(int ej5);

//Ej 6.
bool buscar_valor(int ej6, int tam);


int main()
{

    //Estructura Principal
    int ejercicio;
    cout<<"Ejercicio a visualizar: ";
    cin>>ejercicio;
    switch(ejercicio){

    case 2:
    //Ej 2.
    //Hacer una funci�n que reciba como par�metro un n�mero float y devuelva un n�mero entero con el redondeo del mismo.
    float ej2;
    cout<<"Ejercicio 2: ";
    cin>>ej2;
    redondear_num(ej2);
    break;

    case 3:
    //Ej 3.
    //Hacer una funci�n que reciba un n�mero entero como par�metro y devuelva verdadero si el mismo es un n�mero primo. De lo contrario debe devolver falso.
    int ej3;
    cout<<"Ejercicio 3: ";
    cin>>ej3;
    esprimo(ej3);
    break;

    case 4:
    //Ej 4.
    //Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y cargue cada uno de los elementos.
    int ej4;
    cout<<"Ejercicio 4: ";
    cin>>ej4;
    vector(ej4);
    break;

    case 5:
    //Ej 5.
    //Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y liste cada uno de los elementos.
    int ej5;
    cout<<"Ejercicio 5: ";
    cin>>ej5;
    mostrar_vector(ej5);
    break;

    case 6:
    //Ej 6.
    //Hacer una funci�n que reciba un n�mero entero llamado valor_buscado, un vector de n�meros enteros y su tama�o y devuelva verdadero si el valor buscado se encuentra dentro del vector. Caso contrario debe devolver falso
    int ej6;
    int tam_ej6;
    cout<<"Ejercicio 6"<<endl;;
    cout<<"Tama�o del vector: ";
    cin>>tam_ej6;
    cout<<"Numero a buscar: ";
    cin>>ej6;
    bool existe_ej6 = buscar_valor(ej6, tam_ej6);
    if(existe_ej6 == true){
        cout<<"El numero se encuentra en el vector"<<endl;
    }
    else{
        cout<<"El numero no se encuentra en el vector"<<endl;
    }
    break;



    }

   return 0;
}

//Ej 2.
void redondear_num(float ej2){
    int redondeo = ej2;
    float lado = ej2-redondeo;
    if(lado>=0.5){
        redondeo++;
    }
    cout<<"El numero redondeado es: "<<redondeo<<endl;;
}

//Ej 3.
void esprimo(int ej3){
    int divisores = 0;
    for(int x = 4 ; x<=ej3/2;x++){
        if(ej3%x == 0){
            divisores++;
        }
    }
    if(divisores == 0){
        cout<<"Es primo"<<endl;
    }
    else{
        cout<<"No es primo"<<endl;
    }
}

//Ej 4.
void vector(int ej4){
    const int tam = ej4;
    int vec[tam];
    for(int x = 0;x<tam;x++){
        cout<<"Valor de la posicion N"<<x<<" del vector: ";
        cin>>vec[x];
    }

}

//Ej 5.
void mostrar_vector(int ej5){
    const int tam = ej5;
    int vec[tam];
    for(int x = 0;x<tam;x++){
        cin>>vec[x];
    }
    for(int x = 0;x<tam;x++){
        cout<<vec[x]<<" ";
    }
}

//Ej 6.
bool buscar_valor(int ej6, int tam){
    //Los valores del vector los hice aleatorios, para no tener que andar ingresando una y otra vez numeros
    srand(time(NULL));
    int vec_6[tam];
    bool existe = false;
    for(int x = 0;x<tam;x++){
        vec_6[x] = rand()%10;
    }
    for(int x = 0;x<tam;x++){
        if(ej6 == vec_6[x]){
            existe = true;
        }
    }
    for(int x = 0;x<tam;x++){
        cout<<vec_6[x]<<" ";
    }
    return existe;

}
