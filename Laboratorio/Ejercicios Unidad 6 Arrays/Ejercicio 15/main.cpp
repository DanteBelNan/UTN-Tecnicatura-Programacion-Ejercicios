#include <iostream>
/*
    Hacer un programa que permita cargar un vector de 5 números enteros todos distintos entre sí y otro vector de 10 números todos distintos entre sí. Luego de cargarlos, generar un tercer vector llamado v_interseccion que contenga los valores en común entre los dos vectores.
*/
using namespace std;
int main() {
    int vector1[5] = {} ;
    int vector2[10] = {} ;
    int vector_union[5] = {} ;

    int num_vector;
    int vector;
    int elementos = 5;
    int check_repetir = 0;

    for(vector = 0;vector<2;vector++){
        if(vector == 1){
        elementos = 10;
        }
        for(num_vector = 0; num_vector<elementos;num_vector++){
            cout<<"Elemento N "<<num_vector+1;
            switch (vector){
                case 0:
                cout<<" del primer vector: ";
                do{
                check_repetir = 0;
                    cin>>vector1[num_vector];
                for(int x = 0;x<elementos;x++){
                    if(vector1[num_vector] == vector1[x] && x!=num_vector){
                        check_repetir++;
                    }
                }
                if(check_repetir !=0){
                    cout<<"Ese numero ya se uso en este vector, ingrese otro: ";
                }
                }while(check_repetir != 0);


                break;

                case 1:
                cout<<" del segundo vector: ";
                do{
                check_repetir = 0;
                    cin>>vector2[num_vector];
                for(int x = 0;x<elementos;x++){
                    if(vector2[num_vector] == vector2[x] && x!=num_vector){
                        check_repetir++;
                    }
                }
                if(check_repetir !=0){
                    cout<<"Ese numero ya se uso en este vector, ingrese otro: ";
                }
                }while(check_repetir != 0);
                break;
            }
        }
    }

    cout<<endl<<" "<<endl<<" "<<endl;
    int contador = 0;
        for(int x = 0; x<5;x++){
            for(int y = 0;y<10;y++){
                if(vector1[x] == vector2[y]){
                    vector_union[contador] = vector1[x];
                    contador++;
                }
            }
        }

        //SALIDA de vector union
        cout<<"Vector Union: ";
        for(int x = 0;x<contador;x++){
            cout<<vector_union[x]<<" ";
        }
    return 0;
}
