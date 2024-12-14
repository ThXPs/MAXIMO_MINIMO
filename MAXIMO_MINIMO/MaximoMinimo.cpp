#include <iostream>
using namespace std;

int main() {
    const int TAM = 15;
    
    // Ingresar array de 15 posiciones
    int arr[TAM];
    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> arr[i];
    }
    
    // Encontrar el máximo y el mínimo
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < TAM; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    cout << "Valor maximo: " << max << endl;
    cout << "Valor minimo: " << min << endl;
    
    return 0;
}
