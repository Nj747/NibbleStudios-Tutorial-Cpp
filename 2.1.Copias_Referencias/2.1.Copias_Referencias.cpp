#include <iostream>
using namespace std;

void Copia(int num1) {

    num1++; //Sumo 1 : el valor es 6
    cout << "Valor dentro de la funcion: " << num1 << endl;
};

void Referencia(int &num2) {
    num2++;
    cout << "Valor dentro de la funcion: " << num2 << endl;
};

int main()
{
    int a = 5;
    
    Copia(a);
    Referencia(a);		
    cout << "Valor de a: " << a << endl;

    return 0;
}