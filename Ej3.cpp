/*
Implementar una función recursiva que dado un número entero lo muestre de
forma invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de
números negativos y mostrar primero el número a invertir y después el número
invertido.
*/

#include <iostream>
using namespace std;

int invertirNumero(int num){
    if(num<10){
        return num;
    } else {
        cout << num%10;
        return invertirNumero(num/10);
    }
}

int main() {
    int num;
    cout << "Ingrese un numero: "; cin >> num;
    cout << "El numero invertido es: " << invertirNumero(num) << endl;
    return 0;
}
