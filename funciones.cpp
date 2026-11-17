
#include <iostream>
#include "Funciones.h"
using namespace std;



void registrarVenta() {

    int subopcion;

    cout << "===== REGISTRAR VENTA =====" << endl;
    cout << "1. Seleccionar producto" << endl;
    cout << "2. Ingresar cantidad" << endl;
    cout << "3. Calcular total" << endl;
    cout << "4. Confirmar venta" << endl;
    cout << "Seleccione una opcion: ";
    cin >> subopcion;

    switch (subopcion) {

        case 1:
            cout << "Seleccionar producto" << endl;
            break;

        case 2:
            cout << "Ingresar cantidad" << endl;
            break;

        case 3:
            cout << "Calcular total" << endl;
            break;

        case 4:
            cout << "Confirmar venta" << endl;
            break;

        default:
            cout << "Opcion incorrecta" << endl;
    }
}

void consultarVentas() {

    int subopcion;

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
}

void mostrarProductos() {

    int subopcion;

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
}

void buscarProducto() {

    int subopcion;

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
}

void actualizarInventario() {

    int subopcion;

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
}

void registrarProducto() {

    int subopcion;

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
}

void reportesVentas() {

    int subopcion;

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
}