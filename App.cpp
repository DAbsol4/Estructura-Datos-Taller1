#include <iostream>


using namespace std;

void mostrarMenu(){

    int opcion;
    do {
        cout << "\nMenu de opciones:" << endl;
        cout << "1) Crear evento" << endl;
        cout << "2) Registrar asistente" << endl;
        cout << "3) Lista de asistentes" << endl;
        cout << "4) Generar informe" << endl;
        cout << "5) Salir" << endl;
        cout << "\nIngrese la opcion > ";
        
        cin >> opcion;

        switch(opcion) {
            case 1: 
                break;
                
            case 2: 
                break;
                
            case 3:
                
                break;
                
            case 4:
                cout << "Generando informe, esto puede llevar un tiempo..." << endl;
                break;
                
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
                
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 5);
}

int main (){


    mostrarMenu();
    return 0;

}
