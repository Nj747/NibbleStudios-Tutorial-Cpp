#include <iostream>
using namespace std;

int sumar(int a, int b) 
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

// ATENCION: la division que se está haciendo es entre numeros enteros
// por lo tanto el resultado que se mostrara por consola es la parte 
// entera de esa operación
int division(int a, int b)
{
    if (b != 0) 
        return a / b;
    else 
        cout << "No puede dividir por cero" << endl;
}

void Menu(int a, int b) 
{
    int opcion;

    cout << "Elegir la operacion a realizar: " << endl;
    cout << "1. Sumar " << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: cout << "El resultado de la suma es: " << sumar(a, b) << endl;
        break;
    case 2: cout << "El resultado de la resta es: " << restar(a, b) << endl;
        break;
    case 3: cout << "El resultado de la multiplicacion es: " << mult(a, b) << endl;
        break;
    case 4: cout << "El resultado de la division es: " << division(a, b) << endl;
        break;
    default: cout << "Debe ingresar entre los numeros 1 y 4 " << endl;
        break;
    }
}

int main()
{
    int a, b;

    // Ingreso de variables x teclado
    cout << "Ingrese 2 numeros enteros " << endl;
    cout << "a = ";
    cin >> a;
    cout << endl << "b = ";
    cin >> b;

    cout << endl;
    
    // callback del procedimiento
    Menu(a,b);

    return 0;
}
