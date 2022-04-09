#include <iostream>

using namespace std;

int main()
{
    int ejercicio;
    cin>>ejercicio;
    int variables = 1; //aca aprovecho este valor para poner un scope en cada caso del switch, y asi poder declarar
    switch (ejercicio){ // muchas variables con nombres iguales
        case 1:
        if(variables==1){
            int n=1;
            while (n<=10){
                cout<<n<<endl;
                n++;
            }
        }
        break;

        case 2:
        if (variables==1){
           int n=1;
            while (n<=20){
                cout<<n<<endl;
                n+=3;
            }
        }
        break;

        case 3:
        if (variables==1){
           int n=20;
            while (n>=1){
                cout<<n<<endl;
                n--;
            }
        }
        break;

        case 4:
        if(variables==1){
            int n;
            cin>>n;
            int cant_num = 2;
            cout<<endl;
            while(cant_num<n){
                cout<<cant_num<<endl;
                cant_num++;
            }
        }
        break;

        case 5:
        if(variables==1){
           int n1, n2, reserva;
           cin>>n1>>n2;
           cout<<endl;
           if(n2>n1){
               reserva = n1;
               n1 = n2;
               n2 = reserva;
           }
           while(n2<n1-1){
                n2++;
                cout<<n2<<endl;
            }
        }
        break;

        case 6:
        if(variables==1){
            int n = 1;
            int positivos = 0;
            int negativos = 0;
            while(n!=0){
                cin>>n;
                if(n>0){
                    positivos++;
                }
                if(n<0){
                    negativos++;
                }
            }
            cout<<endl;
            cout<<"Hay "<<positivos<<" positivos"<<endl;
            cout<<"Y "<<negativos<<" negativos"<<endl;
        }
        break;

        case 7:
        if(variables==1){
            int n = 1;
            int maxn = 0;
            while (n!=0){
                cin>>n;
                if(n>maxn){
                    maxn = n;
                }
            }
            cout<<maxn<<endl;
        }
        break;

        case 8:
        if(variables==1){
            int n = 1;
            int maxn = 0;
            int contador = 0;
            int contador_save;
            while (n!=0){
                cin>>n;
                contador++;
                if(n>maxn){
                    maxn = n;
                    contador_save = contador;
                }
            }
            cout<<"El mayor numero fue "<<maxn<<endl;
            cout<<"En la posicion N "<<contador_save<<endl;
        }
        break;

        case 9:
        if(variables==1){
          int n = 1;
            int maxn = -2147483647;
            int minn = 2147483647;
            while (n!=0){
                cin>>n;
                if(n>maxn){
                    maxn = n;
                }
                if(n<minn){
                    minn = n;
                }
            }
            cout<<"El mayor numero fue "<<maxn<<endl;
            cout<<"El menor numero fue "<<minn<<endl;
        }
        break;

        case 10:
        if(variables==1){
            int n = 1;
            int maxn = -2147483647;
            int minn = 2147483647;
            while (n!=0){
                cin>>n;
                if(n>maxn && n<0){
                    maxn = n;
                }
                if(n<minn && n>0){
                    minn = n;
                }
            }
            cout<<"El mayor numero negativo fue "<<maxn<<endl;
            cout<<"El menor numero positivo fue "<<minn<<endl;
        }
        break;

        case 11:
        if(variables==1){
            int n;
            int impar1;
            int impar2;
            int contador=0;
            bool negativo;
            while (n!=0){
                cin>>n;
                if (n<0){
                    negativo = true;
                }
                if (negativo==true){
                    n = n * -1;
                }
                if(n%2==1 && contador==1){
                    if (negativo==true){
                    n = n * -1;
                }
                    impar2 = n;
                    contador++;
                }
                if(n%2==1 && contador==0){
                    if (negativo==true){
                    n = n * -1;
                }
                    impar1 = n;
                    contador = 1;
                }

                negativo = false;

            }
            cout<<"Los primeros dos impares fueron "<<impar1<<" y "<<impar2<<endl;
        }
        break;

        case 12:
        if(variables==1){
            int n;
            int impar1;
            int impar2;
            int contador=0;
            bool negativo;
            while (n!=0){
                cin>>n;
                if (n<0){
                    negativo = true;
                }
                if (negativo==true){
                    n = n * -1;
                }
                if(n%2==1){
                    if (negativo==true){
                    n = n * -1;
                }
                    impar2 = n;
                }
                if(n%2==1 && contador==0){
                    if (negativo==true){
                    n = n * -1;
                }
                    impar1 = n;
                    contador = 1;
                }

                negativo = false;

            }
            cout<<"El primer numero impar fue "<<impar1<<" y el ultimo fue "<<impar2<<endl;
        }
        break;

        case 13:
        if(variables==1){
           int n;
           int n2 = -2147483647;
           bool ordenado = true;
           while (n!=0){
               cin>>n;
               if (n<n2 && n!=0){
                   ordenado = false;
               }
               n2 = n;
           }
           if(ordenado==true){
               cout<<"Conjunto Ordenado"<<endl;
           }
           else{
               cout<<"Conjunto Desordenado"<<endl;
           }
        }
        break;

        case 14:
        if(variables==1){
            int n;
            int maxn = -2147483647;
            int maxn2 = -2147483647;
            while(n!=0){
                cin>>n;
                if (n>maxn){
                    maxn = n;
                }
                if (n>maxn2 && n<maxn){
                    maxn2 = n;
                }
            }
            cout<<"El mayor numero es "<<maxn<<" y el segundo mayor es "<<maxn2;
        }
        break;

        case 15:
        if(variables==1){
            int n;
            int n1, n1_save;
            cin>>n;
            n1_save = n;
            int maxn = n;
            while(n!=n1){
            n1_save = n;
            cin>>n;
            if (n>maxn){
                maxn = n;
            }
            n1 = n1_save;
            }
            cout<<maxn<<endl;
        }
        break;

        case 16:
        if(variables==1){
            int n;
            int n1, n1_save;
            cin>>n;
            n1_save = n;
            int maxn = n;
            bool positivos = true;
            while(positivos == true){
            n1_save = n;
            cin>>n;
            n1 = n1_save;
            if(n1>0 && n>0){
                positivos = false;
            }
            if (n>maxn && positivos==true){
                maxn = n;
            }
            }
            cout<<maxn<<endl;

        }
        break;

        case 17:
        if(variables==1){
         int n;
         int primo = 1;
         int contador = 0;
         cin>>n;
         if(n<0){
             n = n *-1;
         }
         if(n==0){
             primo = n;
         }
         while (primo<=n){
             if(n%primo==0){
                 contador++;
             }
             primo++;
         }
         if(contador==2){
            cout<<"El numero es primo"<<endl;
         }
        }
        break;

        case 18:
        if(variables==1){
            int n;
            int suma = 0;
            int bucle = 1;
            cin>>n;
            while(bucle<n){
                if(n%bucle==0){
                    suma = bucle + suma;
                }
            bucle++;
            }
            if (suma==n){
                cout<<"Numero perfecto"<<endl;
            }
            else {
                cout<<"No es un numero perfecto"<<endl;
            }

        }
        break;

        case 19:
        if(variables==1){
            int n;
            int contador = 0;
            int par = 0;
            int posicion_par = 0;
            int primo;
            int contador_primo = 0;
            int posicion_primo;


            while(n!=0){
            cin>>n;
            contador_primo = 0;
            contador++;
            for(int x = 1; x<=n; x++){
                if (n%x==0){
                    contador_primo++;
                }
            }
            if(contador_primo==2){
                primo = n;
                posicion_primo = contador;
            }
            if(n%2==0 && posicion_par == 0){
                posicion_par = contador;
                par = n;
            }
            }

            cout<<"El primer numero par es "<<par<<" en la posicion numero "<<posicion_par<<endl;
            cout<<"El ultimo numero primo es "<<primo<<" en la posicion numero "<<posicion_primo<<endl;
        }
        break;





        default:
        cout<<"Ese ejercicio no existe"<<endl;
        break;
    }
}
