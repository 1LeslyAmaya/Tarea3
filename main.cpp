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
//Si el año de nacimiento es valido mayor que 1900 y menor que el año actual
    int aniio;
    cout << "Ingrese su anio de nacimiento: ";
    cin >> aniio;
    // Obtener el anio actual
    time_t t = time(0);
    tm * now = localtime(&t);
    int currentYear = now->tm_year + 1900;
    if(aniio > 1900 && aniio < currentYear)
        cout << "Anio de nacimiento valido." << endl;
    else
        cout << "Anio de nacimiento no valido." << endl;
//Numero es multiplo de 5 y de 7
    int nm;
    cout << "Ingrese un numero: ";
    cin >> nm;
    if(nm % 5 == 0 && nm % 7 == 0)
        cout << nm << " es multiplo de 5 y de 7." << endl;
    else
        cout << nm << " no es multiplo de 5 y de 7." << endl;
//generar una calificacion
    int calificacion;
    cout << "Ingrese la calificacion numerica (0-100): ";
    cin >> calificacion;
    char letraCal;
    if(calificacion >= 90 && calificacion <= 100)
        letraCal = 'A';
    else if(calificacion >= 80 && calificacion <= 89)
        letraCal = 'B';
    else if(calificacion >= 70 && calificacion <= 79)
        letraCal = 'C';
    else if(calificacion >= 60 && calificacion <= 69)
        letraCal = 'D';
    else if(calificacion >= 0 && calificacion <= 59)
        letraCal = 'F';
    else {
        cout << "Calificacion invalida." << endl;

    }
    cout << "La calificacion es: " << letraCal << endl;

//calcular precio despues del descuento
    double precio, descuento;
    cout << "Ingrese el precio del articulo: ";
    cin >> precio;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> descuento;
    double precioFinal = precio * (1 - descuento / 100);
    cout << "El precio despues del descuento es: " << precioFinal << endl;




    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.