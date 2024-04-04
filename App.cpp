#include <iostream>
#include <fstream>

using namespace std;

void mostrarMenu(){

    int opcion;
    do {
        cout << "Menu de opciones:" << endl;
        cout << "1) Crear evento" << endl;
        cout << "2) Registrar nueva persona" << endl;
        cout << "3) Registrar asistente" << endl;
        cout << "4) Lista de asistentes" << endl;
        cout << "5) Generar informe" << endl;
        cout << "6) Salir" << endl;
        cout << "\nIngrese la opcion > ";
        
        cin >> opcion;
    }while (opcion != 6);
}