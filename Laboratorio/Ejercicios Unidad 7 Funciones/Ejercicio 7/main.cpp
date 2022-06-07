#include <iostream>
using namespace std;
void pos_vector(int vec[],int tam);
int main() {
    // Hacer una función que reciba un vector de números enteros y su tamaño y devuelva la posición en donde se encuentra el valor máximo del vector.
    int tam;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>tam;
    const int vec_tam = tam;
    int vector[vec_tam];
    for(int x = 0;x<vec_tam;x++){
        cout<<"Ingrese el elemento N "<<x<<" del vector: ";
        cin>>vector[x];
    }
    pos_vector(vector , tam);
    return 0;
}

void pos_vector(int vec[], int tam){
    int max_pos = 0;
    for(int x = 1;x<tam;x++){
        if(vec[x]>vec[max_pos]){
            max_pos = x;
        }
    }
    cout<<"La posicion en la que esta el valor mas alto es la N "<<max_pos<<endl;
}
