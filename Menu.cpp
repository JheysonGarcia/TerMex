/*Diagrama de clase: https://miro.com/welcomeonboard/Z1JIaDNnRHFGa2NUSUdBajVJVnRjY1UzUTEwaHJ3NjFqbHE2Q1NjTlF4QVlTVWMwZ09GNFkwcGlQOW9MQ0NsYnwzNDU4NzY0NjAyOTc0NDUxNjY4fDI=?share_link_id=341001597443*/
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
class Red_De_Suministro
{
private:

public:
    int Cantidad_Estaciones;
    string Regiones;

};

class Estacion
{
private:
    float cantidad_combustible;
    float precio_combustible;
public:
    string Nombre;
    string Codigo;
    string Gerente;
    string Coordenadas;
    string region;
    string islas;
    int surtidores;

};

class venta
{
private:
    
    float cantidad;
    
public:
    string tipo_pago;
    string tipo_documento;
    string fecha;
    string hora;
    string estacion;
    string surtidor;
    string documento;
    string tipo_combustible;
    float monto;

};

void definir_red_de_suministro()
{
    Red_De_Suministro red_de_suministro;
    cout << "Cantidad de estaciones: ";
    cin >> red_de_suministro.Cantidad_Estaciones;
    cout << "Regiones: ";
    cin >> red_de_suministro.Regiones;
}

void definir_estacion()
{
    Estacion estacion;
    cout << "Nombre de la Estacion: ";
    cin >> estacion.Nombre;
    cout << "Código de la Estacion: ";
    cin >> estacion.Codigo;
    cout << "Gerente de la Estacion: ";
    cin >> estacion.Gerente;
    cout << "Coordenadas de la Estacion: ";
    cin >> estacion.Coordenadas;
    cout << "Región de la Estacion: ";
    cin >> estacion.region;
    cout << "Islas de la Estacion: ";
    cin >> estacion.islas;
    cout << "Cantidad de surtidores: ";
    cin >> estacion.surtidores;
}

void definir_venta()
{
    venta venta;
    cout << "Tipo de pago: ";
    cin >> venta.tipo_pago;
    cout << "Tipo de documento: ";
    cin >> venta.tipo_documento;

    
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    tm *ltm = localtime(&now_time);

    
    char fecha[20];
    strftime(fecha, sizeof(fecha), "%Y-%m-%d", ltm);
    char hora[10];
    strftime(hora, sizeof(hora), "%H:%M:%S", ltm);

    
    venta.fecha = fecha;
    venta.hora = hora;

    cout << "Fecha: " << venta.fecha << endl;
    cout << "Hora: " << venta.hora << endl;
    cout << "Estacion: ";
    cin >> venta.estacion;
    cout << "Surtidor: ";
    cin >> venta.surtidor;
}

void gestionar_estacion()
{
    char a;
    try
    {
    cout << "1. Ingresar una nueva Estacion" << endl;
    cout << "2. Modificar una Estacion" << endl;
    cout << "3. Eliminar una Estacion" << endl;
    cout << "4. Mostrar todas las estaciones" << endl;
    cout << "0. Salir" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
        cout << "Ingresar una nueva Estacion" << endl;
        break;
    case '2':
        cout << "Modificar una Estacion" << endl;
        break;
    case '3':
        cout << "Eliminar una Estacion" << endl;
        break;
    case '4':
        cout << "Mostrar todas las estaciones" << endl;
        break;
    case '0':
        cout << "Salir" << endl;
        break;
}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void ingresar_nueva_venta()
{
    char a;
    try
    {
    cout << "1. Ingresar una nueva venta" << endl;
    cout << "2. Mostrar todas las ventas" << endl;
    cout << "0. Salir" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
        cout << "Ingresar una nueva venta" << endl;
        definir_venta();
        break;

    case '2':
        cout << "Mostrar todas las ventas" << endl;
        break;
    case '0':
        cout << "Salir" << endl;
        break;
}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void mostrar_todas_las_ventas()
{
    char a;
    try
    {
    cout << "1. Mostrar todas las ventas" << endl;
    cout << "0. Salir" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
        cout << "Mostrar todas las ventas" << endl;
        break;
    case '0':
        cout << "Salir" << endl;
        break;
}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void mostrar_todas_las_estaciones()
{
    char a;
    try
    {
    cout << "1. Mostrar todas las estaciones" << endl;
    cout << "0. Salir" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
        cout << "Mostrar todas las estaciones" << endl;
        break;
    case '0':
        cout << "Salir" << endl;
        break;
}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void mostrar_todas_las_ventas_de_una_estacion()
{
    char a;
    try
    {
    cout << "1. Mostrar todas las ventas de una Estacion" << endl;
    cout << "0. Salir" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
        cout << "Mostrar todas las ventas de una Estacion" << endl;
        break;
    case '0':
        cout << "Salir" << endl;
        break;
}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void mostrar_todas_las_ventas_de_una_region()
{
    char a;
    try
    {
    cout << "1. Mostrar todas las ventas de una región" << endl;
    cout << "0. Salir" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
        cout << "Mostrar todas las ventas de una región" << endl;
        break;
    case '0':
        cout << "Salir" << endl;
        break;
}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void mostrar_todas_las_ventas_de_una_isla()
{
    char a;
    try
    {
    cout << "1. Mostrar todas las ventas de una isla" << endl;
    cout << "0. Salir" << endl;
    cin >> a;
    switch (a)
    {
    case '1':
        cout << "Mostrar todas las ventas de una isla" << endl;
        break;
    case '0':
        cout << "Salir" << endl;
        break;
}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void salir()
{
    cout << "Salir" << endl;
}

int main() {
    int a;
    try
    {
    cout << "1. Gestionar Estacion de servicio" << endl;
    cout << "2. Ingresar una nueva venta" << endl;
    cout << "3. Mostrar todas las ventas" << endl;
    cout << "4. Mostrar todas las estaciones" << endl;
    cout << "5. Mostrar todas las ventas de una Estacion" << endl;
    cout << "6. Mostrar todas las ventas de una región" << endl;
    cout << "7. Mostrar todas las ventas de una isla" << endl;
    cout << "0. Salir" << endl;

    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Gestionar Estacion de servicio" << endl;
        gestionar_estacion();
        break;
    case 2:
        cout << "Ingresar una nueva venta" << endl;
        ingresar_nueva_venta();
        break;
    case 3:
        cout << "Mostrar todas las ventas" << endl;
        mostrar_todas_las_ventas();
        break;
    case 4:
        cout << "Mostrar todas las estaciones" << endl;
        mostrar_todas_las_estaciones();
        break;
    case 5:
        cout << "Mostrar todas las ventas de una Estacion" << endl;
        mostrar_todas_las_ventas_de_una_estacion();
        break;
    case 6:
        cout << "Mostrar todas las ventas de una región" << endl;
        mostrar_todas_las_ventas_de_una_region();
        break;
    case 7:
        cout << "Mostrar todas las ventas de una isla" << endl;
        mostrar_todas_las_ventas_de_una_isla();
        break;
    case 0:
        cout << "Salir" << endl;
        break;
    default:
        cout << "Opción no válida" << endl;
        break;
    }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    
  
    }

    return 0;
}