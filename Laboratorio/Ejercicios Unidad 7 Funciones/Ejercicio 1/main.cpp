#include <iostream>
/*
Hacer una función que reciba como parámetro dos números enteros y devuelva verdadero si el primero de ellos es múltiplo del segundo. Caso contrario debe devolver falso.
*/
using namespace std;

bool multiplo(int n1,int n2);

int main()
{
    int x, y;
    cout<<"N1: ";
    cin>>x;
    cout<<"N2: ";
    cin>>y;
    bool resultado = multiplo(x, y);
    //cout<<multiplo<<endl;
    if(resultado == true){
        cout<<"Es multiplo"<<endl;
    }
    else {
        cout<<"No es un multiploz"<<endl;
    }
    return 0;
}


///Funcion que descubre si un numero(n1) es multiplo de otro(n2)
bool multiplo(int n1,int n2){
    bool multiplo;
    if(n1%n2 == 0){
        multiplo = true;
    }
    else{
        multiplo = false;
    }
    return multiplo;
}
