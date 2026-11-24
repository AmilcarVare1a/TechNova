#include <iostream>
#include <string>
#include "Funciones.h"
#include <thread>
#include <chrono>
using namespace std; 



//Esto es para que el texto se escriba lento, mas estetico, para eso es esta funcion,
//no la vayan a borrar//


void escribirlento(string mensaje){

    for (int i = 0; i < mensaje.length(); i++){

         cout << mensaje[i] << flush;
          this_thread::sleep_for(chrono::milliseconds(50));

    }

    cout << endl;
}

int main(){


   int opcion = 0;
   string usuario = "", contrasena = "";
  
  

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

        escribirlento("Acceso autorizado. Bienvenido " + usuario);

     
        do{

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
                    escribirlento("Gracias por utilizar TECHNOVA.");
                    break;

        }

    } while (opcion != 9);


    }else{

        escribirlento("Usuario o contrasena incorrectos.");
        escribirlento("Acceso denegado.");

    }



    return 0;
}




