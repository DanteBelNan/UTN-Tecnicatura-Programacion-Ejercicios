#include <iostream>

using namespace std;

int main()
{
    int ejercicio;
    cin>>ejercicio;

    if(ejercicio == 1) {
        int x;
        for (x = 1; x<=10 ; x++ ){
            cout<<x<<endl;
        }
    }

    else if (ejercicio == 2){
        int x;
        for (x = 1; x<=20 ; x = x + 3 ){
            cout<<x<<endl;
        }
    }

    else if (ejercicio == 3){
        int x;
        for (x = 20; x>=1 ; x = x = x - 1 ){
            cout<<x<<endl;
        }
    }

    else if (ejercicio == 4) {
        int x;
        cin>>x;
        for (int y = 2;y<x ; y++){
            cout<<y<<endl;
        }

    }

    else if (ejercicio == 5){
        int n1, n2;
        cin>>n1>>n2;
        if (n1>n2){
            for (n2 ; n2<n1 - 1 ; n2++){
            cout<<n2 + 1<<endl;
        }
        }
        else {
            for (n1 ; n1<n2 - 1 ; n1++){
            cout<<n1 + 1<<endl;
        }
        }
    }

    else if (ejercicio == 6){
        int cant_num;
        int n;
        int contador = 0;
        cin>>cant_num;
        for(int x = 0; x<cant_num; x++){
            cin>>n;
            if (n>0){
                contador++;
            }
        }
        cout<<contador<<endl;
    }

    else if (ejercicio == 7){
        int n;
        int contador_positivos = 0;
        int contador_negativos = 0;
        int contador_0 = 0;
        for(int x = 0; x<10; x++){
            cin>>n;
            if (n>0){
                contador_positivos++;
            }
            if (n<0){
                contador_negativos++;
            }
            if (n==0){
                contador_0++;
            }
        }
        cout<<"hay "<<contador_positivos<<" positivos"<<endl;
        cout<<"hay "<<contador_negativos<<" negativos"<<endl;
        cout<<"hay "<<contador_0<<" ceros"<<endl;
    }

    else if (ejercicio == 8){
        int n = 0;
        int maxn = 0;
        for(int x = 0; x<10 ; x++){
            cin>>n;
            if (n>maxn){
                maxn = n;
            }
        }
        cout<<maxn<<endl;
    }

    else if (ejercicio == 9) {
        int n = 0;
        int maxn = 0;
        int position = 0;
        for(int x = 1; x<=5 ; x++){
            cin>>n;
            if (n>maxn){
                maxn = n;
                position = x;
            }
        }
        cout<<"El mayor numero fue "<<maxn<<endl;
        cout<<"y fue en la posicion Nª "<<position<<endl;
    }

    else if (ejercicio == 10){
        int n = 0;
        int maxn = 0;
        int minn = 0;
        for(int x = 0; x<10 ; x++){
            cin>>n;
            if (n>maxn){
                maxn = n;
            }
            if (n<minn){
                minn = n;
            }
        }
        cout<<"El mayor numero fue "<<maxn<<endl;
        cout<<"El menor numero fue "<<minn<<endl;
    }

    else if (ejercicio == 11){
        int n = 0;
        int maxn_neg = -2147483647;
        int minn_pos = 2147483647;
        for(int x = 0; x<10 ; x++){
            cin>>n;
            if (n<0){
            if (n>maxn_neg){
                maxn_neg = n;
            }
            }
            if (n>0){
            if (n<minn_pos){
                minn_pos = n;
            }
            }
        }
        cout<<"El mayor numero fue negativo "<<maxn_neg<<endl;
        cout<<"El menor numero fue positivo "<<minn_pos<<endl;
    }

    else if(ejercicio == 12) {
        int n = 0;
        int contador= 1;
        int impar1 = 0;
        int impar2 = 0;
        for(int x = 0;x<7; x++){
            cin>>n;
            if (n%2==1 && contador == 2){
                impar2 = n;
            }
            if (n%2==1 && contador == 1){
                impar1 = n;
                contador++;
            }

        }
        if (impar1>0 && impar2>0) {
        cout<<"El primer impar ingresado fue "<<impar1<<" Y el segundo fue "<<impar2<<endl;
        }
        if (impar1>0 && impar2==0) {
            cout<<"Solo se ingreso un impar, y este fue "<<impar1<<endl;
        }
    }

    else if (ejercicio == 13){
        int n = 0;
        int contador= 1;
        int impar1 = 0;
        int impar_ult = 0;
        for(int x = 0;x<7; x++){
            cin>>n;
            if (n%2==1){
                impar_ult = n;
            }
            if (n%2==1 && contador == 1){
                impar1 = n;
                contador++;
            }
            if (impar1>0 && impar_ult>0) {
        }
        }
        if (impar1>0 && impar_ult>0) {
        cout<<"El primer impar ingresado fue "<<impar1<<" Y el ultimo fue "<<impar_ult<<endl;
        }
        if (impar1>0 && impar_ult==0) {
            cout<<"Solo se ingreso un impar, y este fue "<<impar1<<endl;
        }
    }

    else if(ejercicio == 14){
        int n;
        int n_orden = -2147483647;
        bool ordenado = true;
        for (int x = 0; x<8 ; x++){
            cin>>n;
            if (n_orden>n){
                ordenado = false;
            }
            n_orden = n;

        }
        if (ordenado==true){
            cout<<"Conjunto Ordenado"<<endl;
        }
        else {
            cout<<"Conjunto Desordenado"<<endl;
        }
        }

    else if (ejercicio ==15){

  int n;
  int maxn = -2147483646;
  int maxn2 = -2147483647;
  for (int x = 0; x < 5; x++)
    {
      cin >> n;
      if (n>maxn2){
          if (n>maxn){
            maxn2 = maxn;
            maxn = n;
          }
          else {
              maxn2 = n;
          }
      }

    }
  cout << "El mayor numero es " << maxn << " y el segundo mayor es " << maxn2
    << endl;
}

else if (ejercicio == 16){
    int n;
    cin>>n;
    for (int x = n; x>0 ; x = x - 1){
        if(n%x==0){
            cout<<x<<endl;
        }
    }
}

else if (ejercicio == 17) {
    int n;
    cin>>n;
    for (int x = n; x>0 ; x = x - 1){
        if(n%x==0 && x%2==0){
            cout<<x<<endl;
        }
    }
}

else if (ejercicio == 18){
    int n;
    cin>>n;
    int contador = 0;
    for (int x = n; x>0 ; x = x - 1){
        if(n%x==0){
            contador++;
        }
    }
    cout<<"El numero "<<n<<" tiene "<<contador<<" divisores"<<endl;
}

else if (ejercicio == 19){
    int n;
    cin>>n;
    int contador = 0;
    for (int x = n; x>0 ; x = x - 1){
        if(n%x==0){
            contador++;
        }
    }
    if(contador == 2 || n == 1){
        cout<<"El numero "<<n<<" es primo"<<endl;
    }
    else {
        cout<<"El numero "<<n<<" no es primo"<<endl;
    }
}

else if (ejercicio == 20){
    int n;
    cin>>n;
    int suma = 0;
    for (int x = n - 1; x>0 ; x = x - 1){
        if(n%x==0){
            suma = suma + x;
        }
    }
    if (suma==n){
        cout<<"El numero es perfecto"<<endl;
    }
    else {
        cout<<"El numero no es perfecto"<<endl;
    }
}

else if (ejercicio==21){
    int n;
    int num_par = 0;
    int contador_par = 1;
    int last_prim;
    int contador_prim = 1;
    int contador_def_prim = 0;
    for (int x = 1; x<=7 ; x++){
        contador_def_prim = 0;
        cin>>n;
        if (n%2==0 && num_par==0){
            num_par = n;
        }
        if (num_par == 0){
            contador_par++;
        }
        for (int y = n; y>0 ; y = y - 1){
        if (n%y==0){
            contador_def_prim++;
        }
        }
        if(contador_def_prim == 2 || n == 1) {
            last_prim = n;
            contador_prim = x;
        }
    }
    cout<<"El primer numero par fue "<<num_par<<" Y en la posicion N"<<contador_par<<endl;
    cout<<"El ultimo numero primo fue "<<last_prim<<" Y en la posicion N"<<contador_prim<<endl;
}

else if (ejercicio == 22){
    int n;
    int dupla = 0;
    cin>>n;
    int contador_duplas = 0;
    for(int x = 0; x<9 ; x++){
        dupla = n;
        cin>>n;
        if(n<0){
            n = n * -1;
        }
        if(dupla<0){
            dupla = dupla * -1;
        }
        if(n%2==1 && dupla%2==1){
            contador_duplas++;
            cout<<"dupla"<<endl;
        }
    }
    cout<<"La cantidad de duplas impares consecutivas es de "<<contador_duplas<<endl;
}

  return 0;
}
