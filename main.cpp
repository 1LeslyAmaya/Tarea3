#include <iostream>
using namespace std;
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





    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.