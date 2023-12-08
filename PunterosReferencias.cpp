/*Alexis Cuevas & Alexis Maldonado
Ejemplo de punteros y referencias en estructuras
21/09/2023*/
#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    Persona persona1;
    Persona* punteroPersona = &persona1;
    Persona& referenciaPersona = persona1;

    punteroPersona->nombre = "Alexis";
    punteroPersona->edad = 20;

    referenciaPersona.nombre = "Claudia";
    referenciaPersona.edad = 19;

    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << " años" << endl;

  cout << "Nombre: " << &persona1.nombre << endl;
    cout << "Edad: " << &persona1.edad << endl;

    return 0;
}
