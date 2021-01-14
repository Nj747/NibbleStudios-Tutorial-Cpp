/* Teniendo un vector que contiene 5 números enteros(pueden ser positivos o negativos) 
ingresados por teclado, se pide mostrar por consola los siguientes ítems:
a) La suma de TODOS los números.
b) El promedio de los n° negativos. (en caso de no haber mostrar 0)
c) La cantidad de n° positivos.
============================================
Casos y resultados esperados:

#1 - Datos de entrada = [1, 2, 3, 4, 5]
    a) 15; b) 0; c) 5;

#2 - Datos de entrada = [-1, -2, -3, 4, 2]
    a) 0; b) - 2;  c) 3;

#3 - Datos de entrada = [-2, -2, -1, 0, -10]
    a) - 15; b) - 3.75;  c) 1;
============================================ */
#include <iostream>

using namespace std;

int main()
{
    const int n = 5;
    int suma = 0; // inicializamos el valor
    int vector[n] = {1,2,3,4,5};

    cout << "Datos de entrada: ";

    // punto a)
    for (int i = 0; i < n; i++)
    {
        cout << vector[i];
        suma = suma + vector[i];
    }
    cout << endl;
    cout << "a) " << suma << endl;

    // punto b)
    int cantNeg = 0;
    int sumaNeg = 0;
    float promedio;
    for (int i = 0; i < n; i++)
    {
        if (vector[i] < 0)
        {
            sumaNeg = sumaNeg + vector[i]; // es lo mismo que -> sumaNeg+=vector[i]
            cantNeg++;
        }
    }

    if (cantNeg != 0)
    {
        promedio = sumaNeg / cantNeg;
        cout << "b) " << promedio << endl;
    }
    else
    {
        cout << "b) 0" << endl;
    }
    
    // punto c)
    int cantPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (vector[i] >= 0)
        {
            cantPos++;
        }
    }

    cout << "c) " << cantPos << endl;
    

  return 0;    
}
