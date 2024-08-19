/*
Crear un programa que emplee recursividad para calcular el mayor de los
elementos de un vector de “n” tamaño dado por pantalla por el usuario.
*/

#include <iostream>
#include <vector>
using namespace std;

int encontrarMayorRecursivo(const vector<int>& vec, int n){
    if(n==1){
        return vec[0];
    }
    int maxAnterior = encontrarMayorRecursivo(vec, n-1);
    if(vec[n-1] > maxAnterior){
        return vec[n-1];
    } else {
        return maxAnterior;
    }
}

int main(){
    int n;
    cout << "Ingrese la cantidad de elementos del vector: "; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cout << "Ingrese el elemento " << i+1 << ": "; cin >> vec[i];
    }
    cout << "El mayor elemento del vector es: " << encontrarMayorRecursivo(vec, n) << endl;
    return 0;
}