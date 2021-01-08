#include <iostream>

using namespace std;

int main()
{
#pragma region Vector Ejemplo
    // Supongamos un vector de 4 elementos con n° enteros
    const int N = 4;
    int vector[N] = { 1,2,3,4 };

    // ¿Cómo muestro c/u de los elementos?
    for (int i = 0; i < N; i++)
    {
        cout << "Elemento : " << vector[i] << " en la posicion " << i << endl;
    }
#pragma endregion

#pragma region Matriz Ejemplo
    const int filas = 3, columnas = 4;

    int matriz[filas][columnas];

    // cargo la matriz con numero enteros desde el 1 al 12
    int num = 1;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = num;
            num++;
        }
    }

    //muestro cada uno de los elementos en forma de matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
#pragma endregion
  
    return 0;
}