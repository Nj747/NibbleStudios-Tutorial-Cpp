#include <iostream>
using namespace std;

#pragma region Enunciado Ej. 1
/// Ejercicio 1
/// 1. Imprimir por consola un triangulo con el caracter asterisco (*) que tenga solamente como dato de entrada un
/// número N (entero).
/// -Por ejemplo para N = 5 mostraría por consola lo siguiente :
/// *
/// **
/// ***
/// ****
/// *****
#pragma endregion

#pragma region Resolucion Ej. 1
/*
int N;
cout << "Ingrese la cantidad de filas" << endl;
cin >> N;

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < i + 1; j++)
    {
        cout << "*";
    }

    cout << endl;
}
*/
#pragma endregion

#pragma region Enunciado Ej 2
/*
2. Imprimir por consola la tabla de multiplicar que desee.
- Por ejemplo si es la tabla del 3 deberá mostrar lo siguiente :
3 x 0 = 0
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
*/
#pragma endregion

int main()
{
    int N = 9;
    int num;

    cout << "Ingrese el numero del que cuya tabla desea saber" << endl;
    cin >> num;

    for (int i = 0; i < N+1; i++)
    {
        cout << num << " x " << i << " = " << num*i << endl;
    }
}

