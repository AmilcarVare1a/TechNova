#include <iostream>
using namespace std;
void menu() {
    int opcion;
    cout << "\n=====MARCAS DE AUDIFONOS =====" <<endl;
    cout << "1. Sony" << endl;
    cout << "2. Bose" << endl;
    cout << "3. Apple" << endl;
    cout << "4. JBL" << endl;
    cout << "5. Salir" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Seleccionaste Sony" << endl;
            break;

        case 2:
            cout << "Seleccionaste Bose" << endl;
            break;

        case 3:
            cout << "Seleccionaste Apple" << endl;
            break;

        case 4:
            cout << "Seleccionaste JBL" << endl;
            break;

        case 5:
            cout << "Saliendo de la tienda..." << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
    }
}