#include <iostream>
#include <string>
using namespace std;
void menu() {
    int opcion;
    cout << "===== MENU PRINCIPAL =====" <<endl;
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
void telefonos() {
    int opcion;
    cout << "=====MARCAS DE CELULARES =====" <<endl;
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
void laptops() {
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
void audifonos() {
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
int main() {

    int opcion, subopcion;
    int categoria;
    string usuario;
    string contrasena;

    cout << "========================================" << endl;
    cout << "             TECHNOVA" << endl;
    cout << "         TIENDA DE TECNOLOGIA" << endl;
    cout << "========================================" << endl;
    cout << "          INICIO DE SESION" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Ingrese su nombre de usuario: ";
    cin >> usuario;

    cout << "Ingrese su contrasena: ";
    cin >> contrasena;

    if (usuario == "Nova" && contrasena == "2026") {

        cout << "Acceso autorizado. Bienvenido " << usuario << endl;

        cout << "========================================" << endl;
        cout << "             TECHNOVA" << endl;
        cout << "       TIENDA DE TECNOLOGIA" << endl;
        cout << "========================================" << endl;
        cout << "             MENU PRINCIPAL" << endl;
        cout << "----------------------------------------" << endl;
        cout << "  1. Registrar venta" << endl;
        cout << "  2. Consultar ventas" << endl;
        cout << "  3. Mostrar productos disponibles" << endl;
        cout << "  4. Buscar producto" << endl;
        cout << "  5. Actualizar inventario" << endl;
        cout << "  6. Registrar nuevo producto" << endl;
        cout << "  7. Reportes de ventas" << endl;
        cout << "  9. Salir del sistema" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:

                cout << "===== REGISTRAR VENTA =====" << endl;
                cout << "1. Seleccionar producto" << endl;
                cout << "2. Ingresar cantidad" << endl;
                cout << "3. Calcular total" << endl;
                cout << "4. Confirmar venta" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion) {

                    case 1:

                        cout << "===== SELECCIONAR PRODUCTO =====" << endl;
                        menu();}
                        
                break;

            case 2:

                cout << "===== CONSULTAR VENTAS =====" << endl;
                cout << "1. Ver todas las ventas" << endl;
                cout << "2. Buscar venta por codigo" << endl;
                cout << "3. Regresar al menu principal" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion) {
                    case 1:
                        cout << "Mostrando todas las ventas" << endl;
                        break;
                    case 2:
                        cout << "Buscar venta por codigo" << endl;
                        break;
                    case 3:
                        cout << "Regresando al menu principal" << endl;
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;
                }

                break;

            case 3:

                cout << "===== PRODUCTOS DISPONIBLES =====" << endl;
                cout << "1. Ver todos los productos" << endl;
                cout << "2. Ver productos por categoria" << endl;
                cout << "3. Regresar al menu principal" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion) {
                    case 1:
                        cout << "Mostrando productos" << endl;
                        break;
                    case 2:
                        cout << "Mostrando categorias" << endl;
                        break;
                    case 3:
                        cout << "Regresando al menu principal" << endl;
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;
                }

                break;

            case 4:

                cout << "===== BUSCAR PRODUCTO =====" << endl;
                cout << "1. Buscar por codigo" << endl;
                cout << "2. Buscar por nombre" << endl;
                cout << "3. Regresar al menu principal" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion) {
                    case 1:
                        cout << "Buscar por codigo" << endl;
                        break;
                    case 2:
                        cout << "Buscar por nombre" << endl;
                        break;
                    case 3:
                        cout << "Regresando al menu principal" << endl;
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;
                }

                break;

            case 5:

                cout << "===== ACTUALIZAR INVENTARIO =====" << endl;
                cout << "1. Aumentar existencias" << endl;
                cout << "2. Disminuir existencias" << endl;
                cout << "3. Modificar precio" << endl;
                cout << "4. Regresar al menu principal" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion) {
                    case 1:
                        cout << "Aumentar existencias" << endl;
                        break;
                    case 2:
                        cout << "Disminuir existencias" << endl;
                        break;
                    case 3:
                        cout << "Modificar precio" << endl;
                        break;
                    case 4:
                        cout << "Regresando al menu principal" << endl;
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;
                }

                break;

            case 6:

                cout << "===== REGISTRAR NUEVO PRODUCTO =====" << endl;
                cout << "1. Ingresar codigo" << endl;
                cout << "2. Ingresar nombre" << endl;
                cout << "3. Ingresar precio" << endl;
                cout << "4. Ingresar cantidad" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion) {
                    case 1:
                        cout << "Ingresar codigo" << endl;
                        break;
                    case 2:
                        cout << "Ingresar nombre" << endl;
                        break;
                    case 3:
                        cout << "Ingresar precio" << endl;
                        break;
                    case 4:
                        cout << "Ingresar cantidad" << endl;
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;
                }

                break;

            case 7:

                cout << "===== REPORTES DE VENTAS =====" << endl;
                cout << "1. Total de ventas" << endl;
                cout << "2. Producto mas vendido" << endl;
                cout << "3. Regresar al menu principal" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion) {
                    case 1:
                        cout << "Mostrando total de ventas" << endl;
                        break;
                    case 2:
                        cout << "Mostrando producto mas vendido" << endl;
                        break;
                    case 3:
                        cout << "Regresando al menu principal" << endl;
                        break;
                    default:
                        cout << "Opcion incorrecta" << endl;
                }

                break;

            case 9:

                cout << "Gracias por utilizar TECHNOVA" << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } else {

        cout << "Usuario o contrasena incorrectos." << endl;
        cout << "Acceso denegado." << endl;

    }

    return 0;
}

