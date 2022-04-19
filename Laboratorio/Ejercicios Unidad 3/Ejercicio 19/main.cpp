#include <iostream>

using namespace std;

int main(){
    //Dada una lista de 10 números enteros. Calcular e informar el primer número par, el primer número primo.
    int n;
    int primo;
    int contador = 0;
    int flag_primo = 0;
    int par;
    int flag_par = 0;
    for(int vuelta = 0;vuelta<5;vuelta++){
        cout<<"Numero: ";
        cin>>n;
        contador = 0;
        for(int divisor = 1; divisor<=n;divisor++){
            if(n%divisor==0){
                contador++;
            }
        }
        if(contador == 2 && flag_primo == 0){
            primo = n;
            flag_primo++;
        }
        if(n%2 == 0 && flag_par == 0){
            par = n;
            flag_par++;
        }

    }
    cout<<"El primer primo es "<<primo<<endl;
    cout<<"El primer par es "<<par<<endl;

    return 0;
}
