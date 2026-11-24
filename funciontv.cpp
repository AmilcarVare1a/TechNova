#include <iostream>
using namespace std;
void tv() {
    int opcion;
    cout << "=====MARCAS DE TELEVISORES =====" <<endl;
    cout << "1. Sony" << endl;
    cout << "2. LG" << endl;
    cout << "3. Samsung" << endl;
    cout << "4. TCL" << endl;
    cout << "5. Salir" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Seleccionaste Sony" << endl;
            break;

        case 2:
            cout << "Seleccionaste LG" << endl;
            break;

        case 3:
            cout << "Seleccionaste Samsung" << endl;
            break;

        case 4:
            cout << "Seleccionaste TCL" << endl;
            break;

        case 5:
            cout << "Saliendo de la tienda..." << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
    }
}