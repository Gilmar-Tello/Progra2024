#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Figura.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Empleado.h"
#include "Gerente.h"
#include "Programador.h"
#include "Analista.h"
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Vehiculo.h"
#include "Automovil.h"
#include "Camioneta.h"
#include "Autobus.h"
#include "Material.h"
#include "Libro.h"
#include "LibroDigital.h"
#include "LibroFisico.h"
#include "Carta.h"
#include "Departamentos.h"
#include "Producto.h"
#include "Pasajero.h"
#include "Personaje.h"


using namespace std;
int main()

{
    /*ejercicio 1
    Triangulo triangulo1(8, 8);
    cout << "el area del triangulo es: " << triangulo1.Area() << endl;
    cout << "el perimetro es: " << triangulo1.Perimetro() << endl;
    Rectangulo rectangulo1(7, 10);
    cout << "el area del rectangulo es: " << rectangulo1.Area() << endl;
    cout << "el perimetro es: " << rectangulo1.Perimetro() << endl;
    */

    /*ejercicio 2
    Gerente gerente1("Juan", 8000);
    cout << "El Gerente " << gerente1.obtenerNombre() << " gana Q. " << gerente1.calcularSalario() << endl;
    Programador programador1("Josue", 5000);
    cout << "El Programador " << programador1.obtenerNombre() << " gana Q. " << programador1.calcularSalario() << endl;
    Analista analista1("Fredy", 3500);
    cout << "El Analista " << analista1.obtenerNombre() << " gana Q. " << analista1.calcularSalario() << endl;
    */

    /*ejercicio 3
    Perro miPerro;
    cout << "Firulays" << endl;
    miPerro.hacerSonido();
    miPerro.moverse();
    cout << endl;
    Gato miGato;
    cout << "Pelusa" << endl;
    miGato.hacerSonido();
    miGato.moverse();
    */

    /*ejercicio 4
    Automovil auto1(120, 5);
    cout << "Informacion: " << endl;
    auto1.mostrarInfo();
    cout << endl;
    Camioneta camioneta1(100, 8);
    cout << "informacion: " << endl;
    camioneta1.mostrarInfo();
    cout << endl;
    Autobus bus1(80, 50, 40);
    cout << "informacion: " << endl;
    bus1.mostrarInfo();
    */

    /*ejercicio 5
    LibroDigital libroDigital1("Guatemala", "Gaabriel Marcos", 1995, "PDF");
    libroDigital1.mostrarInfo();
    cout << endl;
    LibroFisico libroFisico1("1985", "George Orwell", 1949, 328);
    libroFisico1.mostrarInfo();
    */

    /*ejercicio 6
    Baraja baraja;
    baraja.mezclar();

    // Crear jugadores
    Jugador jugador1("Juan");
    Jugador jugador2("Pedro");

    // Repartir cartas a los jugadores
    for (int i = 0; i < 5; ++i) {
        jugador1.recibirCarta(baraja.sacarCarta());
        jugador2.recibirCarta(baraja.sacarCarta());
    }

    // Mostrar la mano de cada jugador
    jugador1.mostrarMano();
    jugador2.mostrarMano();
    */

    /* ejercicio 7
    EmpleadoTiempoCompleto empleado1("Juan", 2000, 500);
    EmpleadoTiempoParcial empleado2("María", 1200, 25, 20);

    // Crear departamento
    Departamentos departamento("Ventas");
    departamento.agregarEmpleado(&empleado1);
    departamento.agregarEmpleado(&empleado2);

    // Calcular y mostrar salario total del departamento
    cout << "Salario total del departamento " << departamento.calcularSalarioTotal() << endl;
    */

    /*ejercicio 8
    ProductoElectronico producto1("Celular", 1000, 0.01, 5);
    ProductoAlimenticio producto2("Candela", 5, 0.05, 3);
    ProductoFerreteria producto3("Azucar", 5, 50, 100);
    Cliente cliente("Leonel", "Activo");
    // Crear carrito
    Carrito carrito(cliente);
    carrito.agregarProducto(&producto1);
    carrito.agregarProducto(&producto2);
    carrito.agregarProducto(&producto3);
    carrito.mostrarCarrito();
    cout << "Total Carrito: " << carrito.calcularPrecioTotal() << endl;
    */

    /*ejercicio 9
    // Crear pasajeros
    Pasajero pasajero1("Leonel", "987654321");
    Pasajero pasajero2("Rosa", "123456789");

    // Crear aviones
    AvionComercial avionComercial(150, 5000.0f);
    AvionPrivado avionPrivado(8, 2000.0f);

    // Reservar asientos en los aviones
    avionComercial.reservarAsiento(pasajero1);
    avionComercial.reservarAsiento(pasajero2);

    avionPrivado.reservarAsiento(pasajero1);
    avionPrivado.reservarAsiento(pasajero2);

    // Calcular y mostrar el costo del vuelo para cada avión
    cout << "Costo del vuelo comercial: Q. " << avionComercial.calcularCostoVuelo() << endl;
    cout << "Costo del vuelo privado: Q. " << avionPrivado.calcularCostoVuelo() << endl;
    */

//ejercicio 10
cout << "Juego: " << endl;
Guerrero guerrero("Guerrero", 100);
Mago mago("Mago", 80);
Enemigo enemigo("Enemigo", 50);

guerrero.atacar(enemigo, 100);
mago.atacar(enemigo, 5);
//enemigo.defender(100);
guerrero.atacar(mago, 67);






    return 0;
}