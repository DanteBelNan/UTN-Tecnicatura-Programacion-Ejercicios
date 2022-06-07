#include <iostream>
using namespace std;
string nombrar_dia(int dia);
int main() {
    int dia;
    string nombre;
    cout<<"Ingrese el numero de dia: (empezando en domingo desde el 0): ";
    cin>>dia;
    nombre = nombrar_dia(dia);
    cout<<nombre;
    return 0;
}

string nombrar_dia(int dia){
    string dias[7] = {"domingo" , "lunes" , "martes" , "miercoles", "jueves", "sabado", "domingo"};
    int x;
    for(x = dia; x<=dia;x++){
        return dias[x];
    }
}
