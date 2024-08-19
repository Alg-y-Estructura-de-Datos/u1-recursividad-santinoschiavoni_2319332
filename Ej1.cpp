/*
Implemente una función para potencias enteras con recursividad. Definición
recursiva para elevar un número a una potencia: Un número elevado a la potencia
cero produce la unidad; la potencia de un número se obtiene multiplicándolo por
sí mismo elevando a la potencia menos uno.
3^2=3*(3^1)=3*[3*(3^0)]=3*(3*1)=9
*/

#include <iostream>
#include <cmath>
using namespace std;

int potencias(int base, int exponente){
    if(exponente == 0){
        return 1;
    } else{
        return base * potencias(base, exponente-1);
    }

}
int main() {
    int base, exponente;
    cout << "Ingrese la base ";cin >> base;
    cout << "Ingrese el exponente "; cin >> exponente;
    cout << "La potencia de " << base << " elevado a " << exponente << " es: " << potencias(base, exponente) << endl;
    return 0;
}
