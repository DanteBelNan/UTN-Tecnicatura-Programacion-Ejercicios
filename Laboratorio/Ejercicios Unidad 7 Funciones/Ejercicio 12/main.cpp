#include <iostream>
using namespace std;
/*
Hacer una función que reciba un número entero y determine si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.

*/
bool primo_sophiegermain(int x);
int main() {
    int n;
    bool rta;
    cout<<"Ingrese el numero a averiguar: ";
    cin>>n;
    rta = primo_sophiegermain(n);
    if(rta == true){
        cout<<"El numero "<<n<<" es un primo de Sophie Germain"<<endl;
    }
    else{
        cout<<"El numero "<<n<<" no es un primo de Sophie Germain"<<endl;
    }
    return 0;
}

bool primo_sophiegermain(int x){
    bool primo1;
    int cont_primo1 = 0;
    bool primo2;
    int cont_primo2 = 0;
    int x2 = 2*x+1;

    for(int p = 2; p<x; p++){
        if(x%p==0){
            cont_primo1++;
        }
    }
    if(cont_primo1 == 0){
        primo1 = true;
    }

    for(int p = 2; p<x2; p++){
        if(x2%p==0){
            cont_primo2++;
        }
    }
    if(cont_primo2 == 0){
        primo2 = true;
    }

    if(primo1 == true && primo2 == true){
        return true;
    }
    else{
        return false;
    }
}
