#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include "Funciones.h"
using namespace std;



void registrarVenta() {


    string codigoBuscado;
    string codigo, categoria, producto, precioTexto;
    string linea;
    float precioUnitario = 0.0, total = 0.0;
    int cantidad = 0;
    int existencia = 0;
    bool encontrado = false;
    bool stockInsuficiente = false;

    cout << "===== REGISTRAR VENTA =====" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigoBuscado;

    ifstream archivoConsulta("productos.txt");

    if (!archivoConsulta.is_open()) {
        cout << "Error al abrir productos.txt" << endl;
        return;
    }

    while (getline(archivoConsulta, codigo, '|') &&
           getline(archivoConsulta, categoria, '|') &&
           getline(archivoConsulta, producto, '|') &&
           getline(archivoConsulta, precioTexto)) {

        if (codigo == codigoBuscado) {
            encontrado = true;
            break;
        }
    }

    archivoConsulta.close();

    if (!encontrado) {
        cout << "Producto no encontrado." << endl;
        return;
    }

    precioUnitario = stof(precioTexto);

    cout << "Producto: " << producto << endl;
    cout << "Precio unitario: $" << precioUnitario << endl;

    cout << "Cantidad vendida: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Cantidad incorrecta." << endl;
        return;
    }

    ifstream inventario("inventario.txt");

    if (!inventario.is_open()) {
        cout << "Error al abrir inventario.txt" << endl;
        return;
    }

   
    ofstream temporal("inventario_temp.txt");

    if (!temporal.is_open()) {
        cout << "Error al crear archivo temporal." << endl;
        inventario.close();
        return;
    }
    

    
   
    while (getline(inventario, linea)) {

        size_t posicion = linea.find('|');

        if (posicion != string::npos) {

            string codigoArchivo = linea.substr(0, posicion);
            string cantidadTexto = linea.substr(posicion + 1);

            if (codigoArchivo == codigoBuscado) {


                existencia = stoi(cantidadTexto);
                encontrado = true;

                if (cantidad > existencia) {
                    stockInsuficiente = true;
                    temporal << linea << endl;
                } else {
                    existencia -= cantidad;
                    temporal << codigoArchivo << "|" << existencia << endl;
                }

            } else {
                temporal << linea << endl;
            }
        }
    }

    inventario.close();
    temporal.close();

    if (!encontrado || stockInsuficiente) {

        remove("inventario_temp.txt");

        if (stockInsuficiente) {
            cout << "No hay suficientes existencias." << endl;
            cout << "Existencias disponibles: " << existencia << endl;
        } else {
            cout << "Producto no encontrado en inventario." << endl;
        }

        return;
    }

    
    if (remove("inventario.txt") != 0 ||
        rename("inventario_temp.txt", "inventario.txt") != 0) {

        cout << "Error al actualizar el inventario." << endl;
        return;
    }

    total = cantidad * precioUnitario;

    cout << endl;
    cout << "========================================" << endl;
    cout << "               TECHNOVA" << endl;
    cout << "             RECIBO DE VENTA" << endl;
    cout << "========================================" << endl;
    cout << "Codigo:             " << codigoBuscado << endl;
    cout << "Producto:           " << producto << endl;
    cout << "Cantidad:           " << cantidad << endl;
    cout << "Precio unitario:    $" << precioUnitario << endl;
    cout << "----------------------------------------" << endl;
    cout << "TOTAL A PAGAR:      $" << total << endl;
    cout << "========================================" << endl;
    cout << "     Gracias por comprar en TECHNOVA" << endl;
    cout << "========================================" << endl;

    ofstream archivo("ventas.txt", ios::out | ios::app);

    if (!archivo.is_open()) {
        cout << "Error al guardar la venta en ventas.txt" << endl;
        return;
    }

    archivo << codigoBuscado << "|"
            << producto << "|"
            << cantidad << "|"
            << precioUnitario << "|"
            << total << endl;

    archivo.close();

    cout << "Inventario actualizado correctamente." << endl;
    cout << "Venta guardada correctamente." << endl;
}


    
void consultarVentas() {

    int subopcion;
    string codigoBuscado;
    string codigo, producto, cantidad, precio, total;
    bool encontrado = false;

    cout << "===== CONSULTAR VENTAS =====" << endl;
    cout << "1. Ver todas las ventas" << endl;
    cout << "2. Buscar venta por codigo" << endl;
    cout << "3. Regresar al menu principal" << endl;
    cout << "Seleccione una opcion: ";
    cin >> subopcion;

    if (subopcion == 3) {
        cout << "Regresando al menu principal" << endl;
        return;
    }

    if (subopcion != 1 && subopcion != 2) {
        cout << "Opcion incorrecta" << endl;
        return;
    }

    if (subopcion == 2) {
        cout << "Ingrese el codigo del producto: ";
        cin >> codigoBuscado;
    }

    ifstream archivo("ventas.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir ventas.txt" << endl;
        return;
    }

    cout << endl;
    cout << "========== REGISTRO DE VENTAS ==========" << endl;

    while (getline(archivo, codigo, '|') &&
           getline(archivo, producto, '|') &&
           getline(archivo, cantidad, '|') &&
           getline(archivo, precio, '|') &&
           getline(archivo, total)) {

        if (subopcion == 1 || codigo == codigoBuscado) {

            cout << "Codigo: " << codigo << endl;
            cout << "Producto: " << producto << endl;
            cout << "Cantidad: " << cantidad << endl;
            cout << "Precio unitario: $" << precio << endl;
            cout << "Total: $" << total << endl;
            cout << "----------------------------------------" << endl;

            encontrado = true;
        }
    }

    archivo.close();

    if (!encontrado) {
        if (subopcion == 1) {
            cout << "No hay ventas registradas." << endl;
        } else {
            cout << "No se encontraron ventas con ese codigo." << endl;
        }
    }
}


void mostrarProductos() {

    int subopcion, marca;
    string categoriaNombre = "";
    string marcaNombre = "";

    cout << "===== PRODUCTOS DISPONIBLES =====" << endl;
    cout << "1. Ver todos los productos" << endl;
    cout << "2. Ver productos por categoria" << endl;
    cout << "3. Regresar al menu principal" << endl;
    cout << "Seleccione una opcion: ";
    cin >> subopcion;

    switch (subopcion) {

        case 1:
            verTodosProductos();
            break;

        case 2:

            cout << "===== CATEGORIAS =====" << endl;
            cout << "1. Celulares" << endl;
            cout << "2. Laptops" << endl;
            cout << "3. Televisores" << endl;
            cout << "4. Audifonos" << endl;
            cout << "5. Regresar" << endl;
            cout << "Seleccione una categoria: ";
            cin >> subopcion;

            switch (subopcion) {
                case 1:
                    categoriaNombre = "Celulares";
                    cout << "===== MARCAS DE CELULARES =====" << endl;
                    cout << "1. Apple" << endl;
                    cout << "2. Samsung" << endl;
                    cout << "3. Xiaomi" << endl;
                    cout << "4. Huawei" << endl;
                    break;

                case 2:
                    categoriaNombre = "Laptops";
                    cout << "===== MARCAS DE LAPTOPS =====" << endl;
                    cout << "1. Dell" << endl;
                    cout << "2. HP" << endl;
                    cout << "3. Apple" << endl;
                    cout << "4. Asus" << endl;
                    break;

                case 3:
                    categoriaNombre = "Televisores";
                    cout << "===== MARCAS DE TELEVISORES =====" << endl;
                    cout << "1. Sony" << endl;
                    cout << "2. LG" << endl;
                    cout << "3. Samsung" << endl;
                    cout << "4. TCL" << endl;
                    break;

                case 4:
                    categoriaNombre = "Audifonos";
                    cout << "===== MARCAS DE AUDIFONOS =====" << endl;
                    cout << "1. Sony" << endl;
                    cout << "2. Bose" << endl;
                    cout << "3. Apple" << endl;
                    cout << "4. JBL" << endl;
                    break;

                case 5:
                    cout << "Regresando al menu principal" << endl;
                    return;

                default:
                    cout << "Opcion incorrecta" << endl;
                    return;
            }

            cout << "5. Regresar" << endl;
            cout << "Seleccione una marca: ";
            cin >> marca;

            switch (subopcion) {

                case 1:
                    if (marca == 1) marcaNombre = "Apple";
                    else if (marca == 2) marcaNombre = "Samsung";
                    else if (marca == 3) marcaNombre = "Xiaomi";
                    else if (marca == 4) marcaNombre = "Huawei";
                    break;

                case 2:
                    if (marca == 1) marcaNombre = "Dell";
                    else if (marca == 2) marcaNombre = "HP";
                    else if (marca == 3) marcaNombre = "Apple";
                    else if (marca == 4) marcaNombre = "Asus";
                    break;

                case 3:
                    if (marca == 1) marcaNombre = "Sony";
                    else if (marca == 2) marcaNombre = "LG";
                    else if (marca == 3) marcaNombre = "Samsung";
                    else if (marca == 4) marcaNombre = "TCL";
                    break;

                case 4:
                    if (marca == 1) marcaNombre = "Sony";
                    else if (marca == 2) marcaNombre = "Bose";
                    else if (marca == 3) marcaNombre = "Apple";
                    else if (marca == 4) marcaNombre = "JBL";
                    break;
            }

            if (marca == 5) {
                cout << "Regresando..." << endl;
                return;
            }

            if (marcaNombre == "") {
                cout << "Opcion incorrecta" << endl;
                return;
            }

            {
                string codigo, categoria, nombre, precio;
                bool encontrado = false;

                ifstream archivo("productos.txt");

                if (!archivo.is_open()) {
                    cout << "Error al abrir productos.txt" << endl;
                    return;
                }

                cout << endl;
                cout << "===== PRODUCTOS " << marcaNombre << " =====" << endl;

                while (getline(archivo, codigo, '|') &&
                       getline(archivo, categoria, '|') &&
                       getline(archivo, nombre, '|') &&
                       getline(archivo, precio)) {

                    if (categoria == categoriaNombre &&
                        nombre.find(marcaNombre) == 0) {

                        cout << "Codigo: " << codigo << endl;
                        cout << "Producto: " << nombre << endl;
                        cout << "Precio: $" << precio << endl;
                        cout << "------------------------" << endl;

                        encontrado = true;
                    }
                }

                if (!encontrado) {
                    cout << "No se encontraron productos." << endl;
                }

                archivo.close();
            }

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
    string codigoBuscado, nombreBuscado;
    string codigo, categoria, nombre, precio;
    bool encontrado = false;

    cout << "===== BUSCAR PRODUCTO =====" << endl;
    cout << "1. Buscar por codigo" << endl;
    cout << "2. Buscar por nombre" << endl;
    cout << "3. Regresar al menu principal" << endl;
    cout << "Seleccione una opcion: ";
    cin >> subopcion;

    if (subopcion == 1) {

        cout << "Ingrese el codigo del producto: ";
        cin >> codigoBuscado;

    }
    else if (subopcion == 2) {

        cout << "Ingrese el nombre del producto: ";
        cin.ignore();
        getline(cin, nombreBuscado);

    }
    else if (subopcion == 3) {

        cout << "Regresando al menu principal" << endl;
        return;

    }
    else {

        cout << "Opcion incorrecta" << endl;
        return;
    }

    ifstream archivo("productos.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir productos.txt" << endl;
        return;
    }

    while (getline(archivo, codigo, '|') &&
           getline(archivo, categoria, '|') &&
           getline(archivo, nombre, '|') &&
           getline(archivo, precio)) {

        if ((subopcion == 1 && codigo == codigoBuscado) ||
            (subopcion == 2 && nombre.find(nombreBuscado) != string::npos)) {

            cout << endl;
            cout << "===== PRODUCTO ENCONTRADO =====" << endl;
            cout << "Codigo: " << codigo << endl;
            cout << "Categoria: " << categoria << endl;
            cout << "Producto: " << nombre << endl;
            cout << "Precio: $" << precio << endl;

            encontrado = true;
        }
    }

    archivo.close();

    if (!encontrado) {
        cout << "No se encontro el producto." << endl;
    }
}


void actualizarInventario() {

      int subopcion;
    string codigoBuscado;
    string codigo, categoria, nombre, precio;
    int existencia;
    bool encontrado = false;

    cout << "===== ACTUALIZAR INVENTARIO =====" << endl;
    cout << "1. Aumentar existencias" << endl;
    cout << "2. Disminuir existencias" << endl;
    cout << "3. Modificar precio" << endl;
    cout << "4. Regresar al menu principal" << endl;
    cout << "Seleccione una opcion: ";
    cin >> subopcion;

    if (subopcion == 4) {
        cout << "Regresando al menu principal" << endl;
        return;
    }

    if (subopcion < 1 || subopcion > 4) {
        cout << "Opcion incorrecta" << endl;
        return;
    }

    cout << "Ingrese el codigo del producto: ";
    cin >> codigoBuscado;

    ifstream archivoProductos("productos.txt");

    if (!archivoProductos.is_open()) {
        cout << "Error al abrir productos.txt" << endl;
        return;
    }

    while (getline(archivoProductos, codigo, '|') &&
           getline(archivoProductos, categoria, '|') &&
           getline(archivoProductos, nombre, '|') &&
           getline(archivoProductos, precio)) {

        if (codigo == codigoBuscado) {
            encontrado = true;
            break;
        }
    }

    archivoProductos.close();

    if (!encontrado) {
        cout << "Producto no encontrado." << endl;
        return;
    }

    ifstream archivoInventario("inventario.txt");

    if (!archivoInventario.is_open()) {
        cout << "Error al abrir inventario.txt" << endl;
        return;
    }

    encontrado = false;

    while (getline(archivoInventario, codigo, '|') &&
           (archivoInventario >> existencia)) {

        archivoInventario.ignore();

        if (codigo == codigoBuscado) {
            encontrado = true;
            break;
        }
    }

    archivoInventario.close();

    if (!encontrado) {
        cout << "No se encontro el producto en inventario." << endl;
        return;
    }

    cout << "Producto: " << nombre << endl;
    cout << "Existencias actuales: " << existencia << endl;

    if (subopcion == 1 || subopcion == 2) {

        int cantidad;

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        if (cantidad <= 0) {
            cout << "Cantidad incorrecta." << endl;
            return;
        }

        if (subopcion == 1) {
            existencia += cantidad;
        } else {
            if (cantidad > existencia) {
                cout << "No hay suficientes existencias." << endl;
                return;
            }

            existencia -= cantidad;
        }

    } else if (subopcion == 3) {

        float nuevoPrecio;

        cout << "Ingrese el nuevo precio: ";
        cin >> nuevoPrecio;

        if (nuevoPrecio <= 0) {
            cout << "Precio incorrecto." << endl;
            return;
        }

        ifstream entrada("productos.txt");
        ofstream salida("productos_temp.txt");

        if (!entrada.is_open() || !salida.is_open()) {
            cout << "Error al modificar productos." << endl;
            return;
        }

        while (getline(entrada, codigo, '|') &&
               getline(entrada, categoria, '|') &&
               getline(entrada, nombre, '|') &&
               getline(entrada, precio)) {

            if (codigo == codigoBuscado) {
                salida << codigo << "|" << categoria << "|"
                       << nombre << "|" << nuevoPrecio << endl;
            } else {
                salida << codigo << "|" << categoria << "|"
                       << nombre << "|" << precio << endl;
            }
        }

        entrada.close();
        salida.close();

        remove("productos.txt");
        rename("productos_temp.txt", "productos.txt");

        cout << "Precio actualizado correctamente." << endl;
        return;
    }

    
    ifstream entrada("inventario.txt");
    ofstream salida("inventario_temp.txt");

    if (!entrada.is_open() || !salida.is_open()) {
        cout << "Error al actualizar inventario." << endl;
        return;
    }

    string linea;

    while (getline(entrada, linea)) {

        size_t posicion = linea.find('|');

        if (posicion != string::npos) {

            string codigoArchivo = linea.substr(0, posicion);
            string cantidadTexto = linea.substr(posicion + 1);

            if (codigoArchivo == codigoBuscado) {
                salida << codigoArchivo << "|" << existencia << endl;
            } else {
                salida << linea << endl;
            }
        }
    }

    entrada.close();
    salida.close();

    if (remove("inventario.txt") != 0 ||
        rename("inventario_temp.txt", "inventario.txt") != 0) {

        cout << "Error al guardar los cambios." << endl;
        return;
    }

    cout << "Inventario actualizado correctamente." << endl;

}


void registrarProducto() {

    int codigo, categoria, existencia;
    string nombre, categoriaNombre;
    float precio;

    cout << "===== REGISTRAR NUEVO PRODUCTO =====" << endl;

    cout << "Codigo del producto: ";
    cin >> codigo;

    if (codigo <= 0) {
        cout << "Codigo incorrecto." << endl;
        return;
    }

    string codigoExistente, categoriaExistente;
    string nombreExistente, precioExistente;
    bool encontrado = false;

    ifstream archivoConsulta("productos.txt");

    if (!archivoConsulta.is_open()) {
        cout << "Error al abrir productos.txt" << endl;
        return;
    }

    while (getline(archivoConsulta, codigoExistente, '|')) {

        if (codigoExistente.empty()) {
            continue;
        }

        getline(archivoConsulta, categoriaExistente, '|');
        getline(archivoConsulta, nombreExistente, '|');
        getline(archivoConsulta, precioExistente);

        if (codigoExistente == to_string(codigo)) {
            encontrado = true;
            break;
        }
    }

    archivoConsulta.close();

    if (encontrado) {
        cout << "ERROR: Ese codigo ya existe." << endl;
        return;
    }

    cout << endl;
    cout << "Seleccione una categoria:" << endl;
    cout << "1. Celulares" << endl;
    cout << "2. Laptops" << endl;
    cout << "3. Televisores" << endl;
    cout << "4. Audifonos" << endl;
    cout << "Seleccione una opcion: ";
    cin >> categoria;

    switch (categoria) {
        case 1:
            categoriaNombre = "Celulares";
            break;

        case 2:
            categoriaNombre = "Laptops";
            break;

        case 3:
            categoriaNombre = "Televisores";
            break;

        case 4:
            categoriaNombre = "Audifonos";
            break;

        default:
            cout << "Opcion incorrecta." << endl;
            return;
    }

    cin.ignore();

    cout << "Nombre del producto: ";
    getline(cin, nombre);

    if (nombre.empty()) {
        cout << "El nombre no puede estar vacio." << endl;
        return;
    }

    cout << "Precio del producto: $";
    cin >> precio;

    if (precio <= 0) {
        cout << "Precio incorrecto." << endl;
        return;
    }

    cout << "Existencias iniciales: ";
    cin >> existencia;

    if (existencia < 0) {
        cout << "Existencias incorrectas." << endl;
        return;
    }

    ofstream archivo("productos.txt", ios::app);
    ofstream archivoInventario("inventario.txt", ios::app);

    if (!archivo.is_open() || !archivoInventario.is_open()) {
        cout << "Error al abrir los archivos." << endl;
        return;
    }

    archivo << codigo << "|"
            << categoriaNombre << "|"
            << nombre << "|"
            << precio << endl;

    archivoInventario << codigo << "|"
                      << existencia << endl;

    archivo.close();
    archivoInventario.close();

    cout << endl;
    cout << "Producto guardado correctamente." << endl;
    cout << "Existencias registradas correctamente." << endl;
}


void reportesVentas() {

    int subopcion;

    cout << "===== REPORTES DE VENTAS =====" << endl;
    cout << "1. Total de ventas" << endl;
    cout << "2. Producto mas vendido" << endl;
    cout << "3. Regresar al menu principal" << endl;
    cout << "Seleccione una opcion: ";
    cin >> subopcion;

    if (subopcion == 3) {
        cout << "Regresando al menu principal" << endl;
        return;
    }

    if (subopcion != 1 && subopcion != 2) {
        cout << "Opcion incorrecta" << endl;
        return;
    }

    ifstream archivo("ventas.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir ventas.txt" << endl;
        return;
    }

    string codigo, producto, cantidadTexto, precioTexto, totalTexto;
    string productoMasVendido = "";
    string productoActual;

    int cantidad, totalUnidades = 0;
    int mayorCantidad = 0;

    float totalVentas = 0;

    while (getline(archivo, codigo, '|') &&
           getline(archivo, producto, '|') &&
           getline(archivo, cantidadTexto, '|') &&
           getline(archivo, precioTexto, '|') &&
           getline(archivo, totalTexto)) {

        cantidad = stoi(cantidadTexto);

        if (subopcion == 1) {

            totalVentas += stof(totalTexto);
            totalUnidades += cantidad;

        } else {

            if (cantidad > mayorCantidad) {
                mayorCantidad = cantidad;
                productoMasVendido = producto;
            }
        }
    }

    archivo.close();

    cout << endl;

    if (subopcion == 1) {

        cout << "===== TOTAL DE VENTAS =====" << endl;
        cout << "Dinero generado: $" << totalVentas << endl;
        cout << "Unidades vendidas: " << totalUnidades << endl;

    } else {

        cout << "===== PRODUCTO MAS VENDIDO =====" << endl;

        if (mayorCantidad > 0) {
            cout << "Producto: " << productoMasVendido << endl;
            cout << "Unidades vendidas: " << mayorCantidad << endl;
        } else {
            cout << "No hay ventas registradas." << endl;
        }
    }
}



void verTodosProductos() {

    string codigo, categoria, nombre, precio;
    ifstream archivo("productos.txt");

    if (archivo.fail()) {
        cout << "Error al abrir productos.txt" << endl;
        return;
    }

    string categoriaActual = "";

    cout << "========================================" << endl;
    cout << "                TECHNOVA" << endl;
    cout << "          CATALOGO DE PRODUCTOS" << endl;
    cout << "========================================" << endl;

    while (getline(archivo, codigo, '|') &&
           getline(archivo, categoria, '|') &&
           getline(archivo, nombre, '|') &&
           getline(archivo, precio)) {

        if (categoria != categoriaActual) {

            categoriaActual = categoria;

            cout << "========== " << categoria << " ==========" << endl;
            cout << "CODIGO     PRODUCTO          PRECIO" << endl;
            cout << "=========================================" << endl;
        }

        cout << codigo << "       "
             << nombre << "       $"
             << precio << endl;
    }

    cout << "========================================" << endl;
    cout << "             FIN DEL CATALOGO" << endl;
    cout << "========================================" << endl;

    archivo.close();
}
