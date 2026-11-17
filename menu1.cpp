#include <iostream>
#include <string>
#include "Funciones.h"
using namespace std; 

int main(){


   int opcion;
   string usuario, contrasena;

  

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
                    
                registrarVenta();
                    break;

            case 2:
                    
                consultarVentas();
                    break;

            case 3:
                    
                mostrarProductos();
                    break;

            case 4:
                    
                buscarProducto();
                    break;

            case 5:
                    
                actualizarInventario();
                    break;

            case 6:
                    
                registrarProducto();
                    break;

            case 7:
                    
                reportesVentas();
                    break;

            case 9:
                    cout << "Gracias por utilizar TECHNOVA." << endl;
                    break;

    } while (opcion != 9);


    }else{

        cout << "Usuario o contrasena incorrectos." << endl;
        cout << "Acceso denegado." << endl;

    }



    return 0;
}