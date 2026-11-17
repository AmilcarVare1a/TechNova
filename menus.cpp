#include <iostream>
#include <string>
using namespace std; 

int main(){


   int opcion;
   int subopcion;
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

                switch (subopcion){
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

                break;

            case 2:

                cout << "===== CONSULTAR VENTAS =====" << endl;
                cout << "1. Ver todas las ventas" << endl;
                cout << "2. Buscar venta por codigo" << endl;
                cout << "3. Regresar al menu principal" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion){
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

                switch (subopcion){
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

                cout << "==== BUSCAR PRODUCTO =====" << endl;
                cout << "1. Buscar por codigo" << endl;
                cout << "2. Buscar por nombre" << endl;
                cout << "3. Regresar al menu principal" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subopcion;

                switch (subopcion){
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

                switch (subopcion){
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

                switch (subopcion){
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

                switch (subopcion){
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

    }else{

        cout << "Usuario o contrasena incorrectos." << endl;
        cout << "Acceso denegado." << endl;

    }



    return 0;
}