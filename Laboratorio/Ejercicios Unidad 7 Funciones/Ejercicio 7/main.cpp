#include <iostream>
using namespace std;
void pos_vector(int vec[],int tam);
int main() {
    // Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y devuelva la posici�n en donde se encuentra el valor m�ximo del vector.
    int tam;
    cout<<"Ingrese el tama�o del vector: ";
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
