#include <iostream>

using namespace std;

int main()
{
            for (int primo = 1; primo<=10000; primo++){ //Valor a chequear que sea primo
               int contador = 0;
               for(int divisor = 1; divisor<=primo; divisor++){ //Codigo que chequea que lo sea
                    if (primo%divisor==0){
                        contador++;
                    }
                    }
                    if(contador==2){
                        cout<<primo<<" ";
                    }
               }






    return 0;
}
