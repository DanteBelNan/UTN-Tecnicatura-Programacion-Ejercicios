#include <iostream>

using namespace std;
/*
Un número Simonírico es un número positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000 números Simoníricos. El usuario no debe ingresar nada.
*/
int main() {
    int n;
    int checker = 0;
    //Empiezo con 15, ya que es el primer Simonirico, asi ahorro pasos y rendimiento
    for(n = 15; n<1000; n++){
        checker = 0;
        if(n%3==0){
            checker++;
        }
        if(n%15==0){
            checker++;
        }
        if(n%6!=0){
            checker++;
        }
        if(checker == 3){
            cout<<n<<" ";
        }
    }

    return 0;
}
