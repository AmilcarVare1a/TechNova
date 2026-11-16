void menu() {
    int opcion;
    cout << "\n===== MENU PRINCIPAL =====" <<endl;
    cout << "1. Celulares" << endl;
    cout << "2. Laptops" << endl;
    cout << "3. Televisores" << endl;
    cout << "4. Audifonos" << endl;
    cout << "5. Salir" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Seleccionaste Celulares" << endl;
            break;

        case 2:
            cout << "Seleccionaste Laptops" << endl;
            break;

        case 3:
            cout << "Seleccionaste Televisores" << endl;
            break;

        case 4:
            cout << "Seleccionaste Audifonos" << endl;
            break;

        case 5:
            cout << "Saliendo de la tienda..." << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
    }
}