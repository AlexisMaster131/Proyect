/*Alexis MAldonado y Alexis Cuevas
Titulo:Arreglo vector
30/08/23
  */
//proyect change 1


#include <iostream>
#include <cstdlib>  // Necesario para generar números aleatorios
#include <ctime>    // Necesario para la semilla del generador aleatorio

using namespace std;

int main() {
    // Definir las dimensiones del arreglo
    const int capas = 4;
    const int renglones = 5;
    const int columnas = 3;

    // Crear el arreglo de 3 dimensiones
    int arreglo[capas][renglones][columnas];

    // Configurar la semilla para el generador aleatorio
    srand(time(0));

    // Llenar el arreglo con valores aleatorios entre 0 y 99
    for (int c = 0; c < capas; ++c) {
        for (int r = 0; r < renglones; ++r) {
            for (int col = 0; col < columnas; ++col) {
                arreglo[c][r][col] = rand() % 100; // Genera números aleatorios entre 0 y 99
            }
        }
    }

    // Calcular las dimensiones usando sizeof()
    int tamano_capa = sizeof(arreglo) / (capas * sizeof(arreglo[0][0][0]));
    int tamano_renglon = sizeof(arreglo[0]) / (renglones * sizeof(arreglo[0][0][0]));
    int tamano_columna = sizeof(arreglo[0][0]) / sizeof(arreglo[0][0][0]);

    // Imprimir los valores y las dimensiones
    for (int c = 0; c < capas; ++c) {
        for (int r = 0; r < renglones; ++r) {
            for (int col = 0; col < columnas; ++col) {
                cout << "arreglo[" << c << "][" << r << "][" << col << "] = " << arreglo[c][r][col] << endl;
            }
        }
    }

    cout << "Dimensiones:" << endl;
    cout << "Capas: " << capas << ", Renglones: " << renglones << ", Columnas: " << columnas << endl;
    cout << "Tamaño de cada capa: " << tamano_capa << endl;
    cout << "Tamaño de cada renglón: " << tamano_renglon << endl;
    cout << "Tamaño de cada columna: " << tamano_columna << endl;

    return 0;
}
