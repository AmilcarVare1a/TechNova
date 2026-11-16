void menu() {
    int opcion;
    cout << "\n=====MARCAS DE LAPTOPS =====" <<endl;
    cout << "1. Dell" << endl;
    cout << "2. HP" << endl;
    cout << "3. Apple" << endl;
    cout << "4. Asus" << endl;
    cout << "5. Salir" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Seleccionaste Dell" << endl;
            break;

        case 2:
            cout << "Seleccionaste HP" << endl;
            break;

        case 3:
            cout << "Seleccionaste Apple" << endl;
            break;

        case 4:
            cout << "Seleccionaste Asus" << endl;
            break;

        case 5:
            cout << "Saliendo de la tienda..." << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
    }
}