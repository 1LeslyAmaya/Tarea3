#include <iostream>
#include <cmath>
#include <ctime>
#include <cctype>
#include <string>
using namespace std;

// Función auxiliar para determinar si un número es primo.
bool esPrimo(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Bienvenido, " << nombre << "!" << endl;

    int opcion;
    do {
        // Menú principal
        cout << "\n==== MENU PRINCIPAL ====" << endl;
        cout << "1. Estructuras if-else" << endl;
        cout << "2. Bucles while" << endl;
        cout << "3. Bucles for" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                // Submenú de estructuras if-else
                int opcion_if;
                do {
                    cout << "\n--- MENU IF-ELSE ---" << endl;
                    cout << "1. Determinar si un numero es positivo, negativo o cero." << endl;
                    cout << "2. Verificar si un numero es par o impar." << endl;
                    cout << "3. Mostrar el mayor de tres numeros." << endl;
                    cout << "4. Determinar si un anio es bisiesto." << endl;
                    cout << "5. Determinar si una letra es vocal o consonante." << endl;
                    cout << "6. Verificar si un numero es primo." << endl;
                    cout << "7. Verificar si un anio de nacimiento es valido (mayor que 1900 y menor que el anio actual)." << endl;
                    cout << "8. Verificar si un numero es multiplo de 5 y de 7." << endl;
                    cout << "9. Calificacion numerica de un estudiante." << endl;
                    cout << "10. Calcular precio con descuento." << endl;
                    cout << "11. Volver al menu principal." << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcion_if;

                    switch(opcion_if) {
                        case 1: {
                            double num;
                            cout << "Ingrese un numero: ";
                            cin >> num;
                            if(num > 0)
                                cout << "El numero es positivo." << endl;
                            else if(num < 0)
                                cout << "El numero es negativo." << endl;
                            else
                                cout << "El numero es cero." << endl;
                            break;
                        }
                        case 2: {
                            int num;
                            cout << "Ingrese un numero entero: ";
                            cin >> num;
                            if(num % 2 == 0)
                                cout << "El numero es par." << endl;
                            else
                                cout << "El numero es impar." << endl;
                            break;
                        }
                        case 3: {
                            double a, b, c;
                            cout << "Ingrese tres numeros (separados por espacio): ";
                            cin >> a >> b >> c;
                            double mayor = a;
                            if(b > mayor)
                                mayor = b;
                            if(c > mayor)
                                mayor = c;
                            cout << "El mayor es: " << mayor << endl;
                            break;
                        }
                        case 4: {
                            int anio;
                            cout << "Ingrese un anio: ";
                            cin >> anio;
                            if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
                                cout << anio << " es un anio bisiesto." << endl;
                            else
                                cout << anio << " no es un anio bisiesto." << endl;
                            break;
                        }
                        case 5: {
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
                            break;
                        }
                        case 6: {
                            int num;
                            cout << "Ingrese un numero entero: ";
                            cin >> num;
                            if(esPrimo(num))
                                cout << num << " es primo." << endl;
                            else
                                cout << num << " no es primo." << endl;
                            break;
                        }
                        case 7: {
                            int anio;
                            cout << "Ingrese su anio de nacimiento: ";
                            cin >> anio;
                            // Obtener el anio actual
                            time_t t = time(0);
                            tm * now = localtime(&t);
                            int currentYear = now->tm_year + 1900;
                            if(anio > 1900 && anio < currentYear)
                                cout << "Anio de nacimiento valido." << endl;
                            else
                                cout << "Anio de nacimiento no valido." << endl;
                            break;
                        }
                        case 8: {
                            int num;
                            cout << "Ingrese un numero: ";
                            cin >> num;
                            if(num % 5 == 0 && num % 7 == 0)
                                cout << num << " es multiplo de 5 y de 7." << endl;
                            else
                                cout << num << " no es multiplo de 5 y de 7." << endl;
                            break;
                        }
                        case 9: {
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
                                break;
                            }
                            cout << "La calificacion es: " << letraCal << endl;
                            break;
                        }
                        case 10: {
                            double precio, descuento;
                            cout << "Ingrese el precio del articulo: ";
                            cin >> precio;
                            cout << "Ingrese el porcentaje de descuento: ";
                            cin >> descuento;
                            double precioFinal = precio * (1 - descuento / 100);
                            cout << "El precio despues del descuento es: " << precioFinal << endl;
                            break;
                        }
                        case 11: {
                            cout << "Volviendo al menu principal..." << endl;
                            break;
                        }
                        default:
                            cout << "Opcion invalida." << endl;
                    }
                    // Preguntar si se desea continuar en el submenú (excepto si se eligió volver)
                    if(opcion_if != 11) {
                        char cont;
                        cout << "\n¿Desea continuar en el menú if-else? (s/n): ";
                        cin >> cont;
                        if(cont == 'n' || cont == 'N')
                            break;
                    }
                } while(opcion_if != 11);
                break;
            }
            case 2: {
                // Submenú de bucles while
                int opcion_while;
                do {
                    cout << "\n--- MENU BUCLES WHILE ---" << endl;
                    cout << "1. Imprimir numeros del 1 al 20." << endl;
                    cout << "2. Imprimir numeros desde 1 hasta n." << endl;
                    cout << "3. Sumar numeros positivos (termina con numero negativo)." << endl;
                    cout << "4. Secuencia de Fibonacci hasta un numero." << endl;
                    cout << "5. Ingresar numeros hasta que la suma sea mayor a 100." << endl;
                    cout << "6. Imprimir numeros pares hasta n." << endl;
                    cout << "7. Calcular la media de numeros ingresados (finalice con 0)." << endl;
                    cout << "8. Ingresar numeros hasta que se ingrese 0." << endl;
                    cout << "9. Imprimir los primeros 10 numeros naturales y su cuadrado." << endl;
                    cout << "10. Calcular el producto de los primeros 10 numeros naturales." << endl;
                    cout << "11. Volver al menu principal." << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcion_while;

                    switch(opcion_while) {
                        case 1: {
                            int i = 1;
                            while(i <= 20) {
                                cout << i << " ";
                                i++;
                            }
                            cout << endl;
                            break;
                        }
                        case 2: {
                            int n;
                            cout << "Ingrese un numero: ";
                            cin >> n;
                            int i = 1;
                            while(i <= n) {
                                cout << i << " ";
                                i++;
                            }
                            cout << endl;
                            break;
                        }
                        case 3: {
                            int num, suma = 0;
                            cout << "Ingrese numeros positivos (ingrese un numero negativo para terminar):" << endl;
                            while(true) {
                                cin >> num;
                                if(num < 0)
                                    break;
                                suma += num;
                            }
                            cout << "La suma es: " << suma << endl;
                            break;
                        }
                        case 4: {
                            int limite;
                            cout << "Ingrese un numero limite para la secuencia Fibonacci: ";
                            cin >> limite;
                            int a = 0, b = 1;
                            cout << "Fibonacci: " << a << " " << b << " ";
                            while(true) {
                                int siguiente = a + b;
                                if(siguiente > limite)
                                    break;
                                cout << siguiente << " ";
                                a = b;
                                b = siguiente;
                            }
                            cout << endl;
                            break;
                        }
                        case 5: {
                            int num, suma = 0;
                            cout << "Ingrese numeros (se termina cuando la suma supera 100):" << endl;
                            while(suma <= 100) {
                                cin >> num;
                                suma += num;
                            }
                            cout << "La suma final es: " << suma << endl;
                            break;
                        }
                        case 6: {
                            int n;
                            cout << "Ingrese un numero: ";
                            cin >> n;
                            int i = 1;
                            while(i <= n) {
                                if(i % 2 == 0)
                                    cout << i << " ";
                                i++;
                            }
                            cout << endl;
                            break;
                        }
                        case 7: {
                            int num, suma = 0, count = 0;
                            cout << "Ingrese numeros para calcular la media (finalice con 0):" << endl;
                            while(true) {
                                cin >> num;
                                if(num == 0)
                                    break;
                                suma += num;
                                count++;
                            }
                            if(count > 0)
                                cout << "La media es: " << static_cast<double>(suma) / count << endl;
                            else
                                cout << "No se ingresaron numeros." << endl;
                            break;
                        }
                        case 8: {
                            int num;
                            cout << "Ingrese numeros (se termina al ingresar 0):" << endl;
                            while(true) {
                                cin >> num;
                                if(num == 0)
                                    break;
                                // No se muestra el número ingresado
                            }
                            cout << "Fin de ingreso." << endl;
                            break;
                        }
                        case 9: {
                            int i = 1;
                            while(i <= 10) {
                                cout << i << " al cuadrado es " << i * i << endl;
                                i++;
                            }
                            break;
                        }
                        case 10: {
                            int i = 1;
                            long long producto = 1;
                            while(i <= 10) {
                                producto *= i;
                                i++;
                            }
                            cout << "El producto de los primeros 10 numeros naturales es: " << producto << endl;
                            break;
                        }
                        case 11: {
                            cout << "Volviendo al menu principal..." << endl;
                            break;
                        }
                        default:
                            cout << "Opcion invalida." << endl;
                    }
                    // Preguntar si se desea continuar en este submenú
                    if(opcion_while != 11) {
                        char cont;
                        cout << "\n¿Desea continuar en el menú while? (s/n): ";
                        cin >> cont;
                        if(cont == 'n' || cont == 'N')
                            break;
                    }
                } while(opcion_while != 11);
                break;
            }
            case 3: {
                // Submenú de bucles for
                int opcion_for;
                do {
                    cout << "\n--- MENU BUCLES FOR ---" << endl;
                    cout << "1. Imprimir numeros pares del 2 al 20." << endl;
                    cout << "2. Tabla de multiplicar de un numero." << endl;
                    cout << "3. Sumar numeros pares desde 1 hasta n." << endl;
                    cout << "4. Calcular factorial de un numero." << endl;
                    cout << "5. Imprimir serie de numeros primos del 1 al 50." << endl;
                    cout << "6. Imprimir la serie: 1, 3, 6, 10, 15, ... (serie triangular)." << endl;
                    cout << "7. Imprimir los primeros 10 terminos de Fibonacci." << endl;
                    cout << "8. Sumar los primeros 100 numeros naturales." << endl;
                    cout << "9. Imprimir los divisores de un numero." << endl;
                    cout << "10. Imprimir los primeros 10 numeros primos." << endl;
                    cout << "11. Volver al menu principal." << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcion_for;

                    switch(opcion_for) {
                        case 1: {
                            for(int i = 2; i <= 20; i += 2)
                                cout << i << " ";
                            cout << endl;
                            break;
                        }
                        case 2: {
                            int n;
                            cout << "Ingrese un numero para ver su tabla de multiplicar: ";
                            cin >> n;
                            for(int i = 1; i <= 10; i++){
                                cout << n << " x " << i << " = " << n * i << endl;
                            }
                            break;
                        }
                        case 3: {
                            int n, suma = 0;
                            cout << "Ingrese un numero: ";
                            cin >> n;
                            for(int i = 1; i <= n; i++){
                                if(i % 2 == 0)
                                    suma += i;
                            }
                            cout << "La suma de los numeros pares es: " << suma << endl;
                            break;
                        }
                        case 4: {
                            int n;
                            cout << "Ingrese un numero para calcular su factorial: ";
                            cin >> n;
                            long long factorial = 1;
                            for(int i = 1; i <= n; i++){
                                factorial *= i;
                            }
                            cout << "El factorial de " << n << " es: " << factorial << endl;
                            break;
                        }
                        case 5: {
                            cout << "Numeros primos del 1 al 50: ";
                            for(int i = 1; i <= 50; i++){
                                if(esPrimo(i))
                                    cout << i << " ";
                            }
                            cout << endl;
                            break;
                        }
                        case 6: {
                            int terminos;
                            cout << "Ingrese la cantidad de terminos para la serie triangular: ";
                            cin >> terminos;
                            int suma = 0;
                            for(int i = 1; i <= terminos; i++){
                                suma += i;
                                cout << suma << " ";
                            }
                            cout << endl;
                            break;
                        }
                        case 7: {
                            int a = 0, b = 1;
                            cout << "Primeros 10 terminos de Fibonacci: " << a << " " << b << " ";
                            for(int i = 3; i <= 10; i++){
                                int c = a + b;
                                cout << c << " ";
                                a = b;
                                b = c;
                            }
                            cout << endl;
                            break;
                        }
                        case 8: {
                            int suma = 0;
                            for(int i = 1; i <= 100; i++){
                                suma += i;
                            }
                            cout << "La suma de los primeros 100 numeros naturales es: " << suma << endl;
                            break;
                        }
                        case 9: {
                            int n;
                            cout << "Ingrese un numero para ver sus divisores: ";
                            cin >> n;
                            cout << "Divisores de " << n << ": ";
                            for(int i = 1; i <= n; i++){
                                if(n % i == 0)
                                    cout << i << " ";
                            }
                            cout << endl;
                            break;
                        }
                        case 10: {
                            cout << "Primeros 10 numeros primos: ";
                            int count = 0, num = 2;
                            while(count < 10) {
                                if(esPrimo(num)) {
                                    cout << num << " ";
                                    count++;
                                }
                                num++;
                            }
                            cout << endl;
                            break;
                        }
                        case 11: {
                            cout << "Volviendo al menu principal..." << endl;
                            break;
                        }
                        default:
                            cout << "Opcion invalida." << endl;
                    }
                    // Preguntar si se desea continuar en este submenú
                    if(opcion_for != 11) {
                        char cont;
                        cout << "\n¿Desea continuar en el menú for? (s/n): ";
                        cin >> cont;
                        if(cont == 'n' || cont == 'N')
                            break;
                    }
                } while(opcion_for != 11);
                break;
            }
            case 4: {
                cout << "\nGracias por utilizar el programa, " << nombre << ". Hasta luego" << endl;
                break;
            }
            default:
                cout << "Opcion invalida." << endl;
        }
        cout << endl;
    } while(opcion != 4);

    return 0;
}
