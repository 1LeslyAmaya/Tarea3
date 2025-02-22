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
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if(num % 2 == 0)
        cout << "El numero es par." << endl;
    else
        cout << "El numero es impar." << endl;
    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.