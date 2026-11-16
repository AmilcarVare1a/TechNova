void menu() {
    int opcion;
    cout << "\n=====MARCAS DE CELULARES =====" <<endl;
    cout << "1. Apple" << endl;
    cout << "2. Samsung" << endl;
    cout << "3. Xiaomi" << endl;
    cout << "4. Huawei" << endl;
    cout << "5. Salir" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Seleccionaste Apple" << endl;
            break;

        case 2:
            cout << "Seleccionaste Samsung" << endl;
            break;

        case 3:
            cout << "Seleccionaste Xiaomi" << endl;
            break;

        case 4:
            cout << "Seleccionaste Huawei" << endl;
            break;

        case 5:
            cout << "Saliendo de la tienda..." << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
    }
}