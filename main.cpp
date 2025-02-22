#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

bool esPrimo(int nu) {
    if(nu  < 2) return false;
    for(int i = 2; i <= sqrt(nu); i++){
        if(nu % i == 0)
            return false;
    }
    return true;
}

//Función para determinar si un numero  ingresado es positivo o negativo o cero
int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero > 0) {
        cout << "El numero es positivo."<<endl;
    } else if (numero < 0) {
        cout << "El numero es negativo."<<endl;
    } else {
        cout << "El numero es cero."<<endl;
    }
    //Si el numero ingresado es par o impar
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if(num % 2 == 0)
        cout << "El numero es par." << endl;
    else
        cout << "El numero es impar." << endl;
    //Determinar de tres numeros cual es el mayor
    int main;{
        double a;
        double b;
        double c;
        cout << "Ingrese tres numeros (separados por espacio): " ;
        cin >> a;
        cin >> b;
        cin >> c;
        double mayor = a;
        if(b > mayor)
            mayor = b;
        if(c > mayor)
            mayor = c;
        cout << "El mayor es: " << mayor << endl;
    }
    //determinar un año ingresado es bisiesto o no
    int anio;
    {
        cout << "Ingrese un anio: ";
        cin >> anio;
        if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
            cout << anio << " es un anio bisiesto." << endl;
        else
            cout << anio << " no es un anio bisiesto." << endl;
    }
    //Determinar si es letra ingresada por el usuario es vocal o consonante
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    letra = tolower(letra);
    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
        cout << "La letra es una vocal." << endl;
    else if(isalpha(letra))
        cout << "La letra es una consonante." << endl;
    else
        cout << "El caracter ingresado no es una letra." << endl;
    //Verificar si es un numero primo o no
    int nu;
    cout << "Ingrese un numero entero: ";
    cin >> nu;
    if(esPrimo(nu))
        cout << nu << " es primo." << endl;
    else
        cout << nu << " no es primo." << endl;

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.