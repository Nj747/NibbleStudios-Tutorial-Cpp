#include <iostream>
#include <string.h>
using namespace std;

// Definicion de constantes [Variables globales]
const int cantEmpresas = 5;
const int cantAnios = 3;

// Mostrar el nombre de la empresa con mayor ingreso en el año 2019.
void MayorIngreso2019(int matrizIngresos[cantAnios][cantEmpresas], string empresas[])
{
    int mayorIngreso = matrizIngresos[1][0];
    int posEmpresa;

    for (int j = 0; j < cantEmpresas; j++)
    {
        if (matrizIngresos[1][j] > mayorIngreso)
        {
            mayorIngreso = matrizIngresos[1][j];
            posEmpresa = j;
        }
    }

    cout << "La empresa con mayor ingreso del 2019 es: " << empresas[posEmpresa] << endl;
}

// Mostrar el nombre de la empresa y el año con el mayor ingreso de todos.
void MayorIngreso(int matrizIngresos[cantAnios][cantEmpresas], string empresas[], int anios[])
{
    int posEmpresa, posAnio;
    int mayorIngreso = matrizIngresos[0][0];

    for (int i = 0; i < cantAnios; i++)
    {
        for (int j = 0; j < cantEmpresas; j++)
        {
            if (matrizIngresos[i][j] > mayorIngreso)
            {
                mayorIngreso = matrizIngresos[i][j];
                posEmpresa = j;
                posAnio = i;
            }
        }
    }

    cout << "El mayor ingreso fue del año " << anios[posAnio] << " obtenido por la empresa " << empresas[posEmpresa] << endl;
}

// Mostrar el total de los 3 años de ingresos de una empresa que se ingresa por teclado.
void TotalEmpresaDada(int matrizIngresos[cantAnios][cantEmpresas], string empresas[])
{
    string nomEmpresa;
    int posEmpresa;
    int total = 0;

    bool validacion = false;

    while (!validacion) {
        cout << "Ingresar la empresa a buscar: " << endl;
        cin >> nomEmpresa;

        for (int j = 0; j < cantEmpresas; j++) {
            if (nomEmpresa == empresas[j]) {
                posEmpresa = j;
                validacion = true;
                break;
            }
            else {
                validacion = false;
            }
        }

        if (!validacion) {
            cout << "Error: Ingrese un nombre valido" << endl;
        }
    }
    

        for (int i = 0; i < cantAnios; i++)
        {
            total += matrizIngresos[i][posEmpresa];
            cout << matrizIngresos[i][posEmpresa] << endl;
        }

        cout << "El total de los 3 anios de la empresa " << nomEmpresa << " es $" << total << endl;   
}

int main()
{
    // Carga de Datos 
    string empresas[cantEmpresas] = { "Volkswagen", "BMW", "Peugeot", "Ford", "Chevrolet" };
    int anios[cantAnios] = { 2018, 2019, 2020 };

    // Matriz de Ingresos 
    int matrizIngresos[cantAnios][cantEmpresas] =
    {
        {1000, 1500, 1225, 2000, 2500}, 
        {4200, 1800, 4850, 2800, 3750}, 
        {4500, 1700, 1300, 2400, 3950}
    };

    MayorIngreso2019(matrizIngresos, empresas);
    MayorIngreso(matrizIngresos, empresas, anios);
    TotalEmpresaDada(matrizIngresos, empresas);

    return 0;
}
