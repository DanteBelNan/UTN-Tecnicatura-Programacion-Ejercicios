#include <iostream>

using namespace std;
/*
    Publicar en la cafeter�a del Campus Virtual cu�l es el quinientos veinteavo n�mero Simon�rico.
*/
int main() {
    int n;
    int checker = 0;
    int num_sinc = 0;
    //Empiezo con 15, ya que es el primer Simonirico, asi ahorro pasos y rendimiento
    for(n = 15; n<18000; n++){
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
            num_sinc++;
            cout<<num_sinc<<": "<<n<<endl;
        }
        if(num_sinc == 520){
            cout<<num_sinc;
        }
    }

    return 0;
}
