/*
Crear un programa que pida al usuario un número entero positivo "n" y un dígito
"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Falso y si d= 1 retorna verdadero.
*/

#include <iostream>
using namespace std;

bool contieneDigito(int n, int d){
    if(n==0){
        return false;
    }
    if(n % 10 == d){
        return true;
    }
    return contieneDigito(n/10,d);
}

int main(){
    int n, d;
    cout << "Ingrese un numero entero positivo: "; cin >> n;
    cout << "Ingrese un digito: "; cin >> d;
    if(contieneDigito(n,d)){
        cout << "El digito " << d << " esta en el numero " << n << endl;
    } else {
        cout << "El digito " << d << " no esta en el numero " << n << endl;
    }
    return 0;
}