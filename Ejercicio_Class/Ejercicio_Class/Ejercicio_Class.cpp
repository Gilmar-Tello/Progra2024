#include <iostream>
#include <string> 
#include "Rectangulo.h"
#include "Persona.h"
#include "Circulo.h"
#include "Animal.h"
#include "CuentaBancaria.h"
#include "Fecha.h"
#include "Vehiculo.h"
#include "Triangulo.h"
#include "Estudiante.h"
#include "Libro.h"
#include "Fraccion.h"
#include "Rectangulo2.h"
#include "Empleado.h" 
#include "Punto.h"
#include "Caja.h"
#include "Poligono.h"
#include "Correo.h"
#include "FiguraGeometrica.h"
#include "Producto.h"
#include "TerjetaCredito.h"
#include "EmpleadoM.h"
#include "FraccionM.h"
#include "CuentaBancariaM.h"
#include "EstudianteM.h"
#include "ProductoM.h"

using namespace std;

// Funcion para agregar un nuevo estudiante al vector de estudiantes
extern void agregarEstudiante(vector<EstudianteM>& estudiantes) {
	string nombre, carrera;
	int edad;
	float promedio;

	cout << "\nIngrese el nombre del estudiante: ";
	cin.ignore(); // Ignorar el salto de linea pendiente
	getline(cin, nombre);

	cout << "Ingrese la edad del estudiante: ";
	cin >> edad;

	cout << "Ingrese la carrera del estudiante: ";
	cin.ignore(); // Ignorar el salto de linea pendiente
	getline(cin, carrera);

	cout << "Ingrese el promedio del estudiante: ";
	cin >> promedio;

	// Crear un nuevo objeto EstudianteM y agregarlo al vector
	estudiantes.push_back(EstudianteM(nombre, edad, carrera, promedio));
	cout << "Estudiante agregado exitosamente." << endl;
}

// Funcion para mostrar la lista de estudiantes registrados
void mostrarEstudiantes(vector<EstudianteM>& estudiantes) {
	cout << "\nLista de estudiantes registrados:" << endl;
	for (EstudianteM& estudiante : estudiantes) {
		cout << "Nombre: " << estudiante.obtenerNombre() << ", Edad: " << estudiante.obtenerEdad()
			<< ", Carrera: " << estudiante.obtenerCarrera() << ", Promedio: " << estudiante.obtenerPromedio() << endl;
	}
}

// Funcion para buscar un estudiante por nombre
void buscarPorNombre(vector<EstudianteM>& estudiantes, const string& nombreBuscado) {
	cout << "\nResultados de la busqueda por nombre '" << nombreBuscado << "':" << endl;
	bool encontrado = false;
	for (EstudianteM& estudiante : estudiantes) {
		if (estudiante.obtenerNombre() == nombreBuscado) {
			cout << "Nombre: " << estudiante.obtenerNombre() << ", Edad: " << estudiante.obtenerEdad()
				<< ", Carrera: " << estudiante.obtenerCarrera() << ", Promedio: " << estudiante.obtenerPromedio() << endl;
			encontrado = true;
		}
	}
	if (!encontrado) {
		cout << "No se encontraron estudiantes con ese nombre." << endl;
	}
}

// Funcion para buscar estudiantes por carrera
void buscarPorCarrera(vector<EstudianteM>& estudiantes, const string& carreraBuscada) {
	cout << "\nResultados de la busqueda por carrera '" << carreraBuscada << "':" << endl;
	bool encontrado = false;
	for (EstudianteM& estudiante : estudiantes) {
		if (estudiante.obtenerCarrera() == carreraBuscada) {
			cout << "Nombre: " << estudiante.obtenerNombre() << ", Edad: " << estudiante.obtenerEdad()
				<< ", Carrera: " << estudiante.obtenerCarrera() << ", Promedio: " << estudiante.obtenerPromedio() << endl;
			encontrado = true;
		}
	}
	if (!encontrado) {
		cout << "No se encontraron estudiantes en esa carrera." << endl;
	}
}



int main() {
	/*ejercicio 1
	Rectangulo miRectangulo(5.5, 3.5);
	cout << "El area del rectangulo es: " << miRectangulo.obtenerArea() << endl;
	cout << "El perimetro del rectangulo es: " << miRectangulo.obtenerPerimetro() << endl;*/

	/*ejercicio 2
	Persona persona1("Gilmar", 29, "Masculino");
	cout << "Nombre: " << persona1.obtenerNombre() << endl;
	cout << "Edad: " << persona1.obtenerEdad() << endl;
	cout << "Sexo: " << persona1.obtenerSexo() << endl;
	cout << endl;
	nuevos valores
	persona1.establecerNombre("Rosario");
	persona1.establecerEdad(24);
	persona1.establecerSexo("Femenino");
	cout << "Nombre: " << persona1.obtenerNombre() << endl;
	cout << "Edad: " << persona1.obtenerEdad() << endl;
	cout << "Sexo: " << persona1.obtenerSexo() << endl;*/

	/*ejecicio 3
	Circulo miCirculo(5, 3, 3.1416, 6.5);
	cout << "El area del ciruclo es: " << miCirculo.obtenerArea() << endl;
	cout << "El perimetro del circulo es: " << miCirculo.obtenerPerimetro() << endl;*/

	/*ejercicio 4
	Perro perro1;
	perro1.hacerSonido();
	gato miGato;
	miGato.hacerSonido();
	vaca miVaca;
	miVaca.hacerSonido();*/

	/*ejercicio 5
	CuentaBancaria cuenta(42561960, 1500);
	cout << "Saldo Inicial: Q. " << cuenta.obtenerSaldo() << endl;
	cuenta.depositar(4500);
	cuenta.retirar(3000);
	cuenta.depositar(500);
	cout << "Su saldo final es de: Q. " << cuenta.obtenerSaldo() << endl;*/

	/*ejercicio 6
	Fecha fechaActual(04, 04, 2024);
	cout << "Dia: " << fechaActual.obtenerDia() << endl; 
	cout << "Mes: " << fechaActual.obtenerMes() << endl;
	cout << "Anio: " << fechaActual.obtenerAnio() << endl; */

	//ejercicio 7
	/*Vehiculo consultaVehiculo("Toyota", "Hilux", 150000);
	cout << "Marca: " << consultaVehiculo.obtenerMarca() << endl;
	cout << "Modelo: " << consultaVehiculo.obtenerModelo() << endl;
	cout << "Precio: Q. " << consultaVehiculo.obtenerPrecio() << endl;*/

	//ejercicio 8
	/*Triangulo miTriangulo(5, 5, 5); // Triangulo equilátero
	cout << "Perimetro del triangulo: " << miTriangulo.obtenerPerimetro() << endl;
	cout << "Tipo de triangulo: " << miTriangulo.obtenerTipo() << endl;
	*/

	//ejercicio 9
	/*Estudiante estudiante1("Juan", 20, "Ingenieria Sistemas", 8.5);
	cout << "Nombre del estudiante: " << estudiante1.obtenerNombre() << endl;
	cout << "Edad del estudiante: " << estudiante1.obtenerEdad() << endl;
	cout << "Carrera del estudiante: " << estudiante1.obtenerCarrera() << endl;
	cout << "Promedio del estudiante: " << estudiante1.obtenerPromedio() << endl;

	// Cambiar el promedio del estudiante
	estudiante1.establecerPromedio(9.2);
	cout << "Nuevo promedio del estudiante: " << estudiante1.obtenerPromedio() << endl;
	*/

	//ejercicio 10
	/*Libro libro1("Los tres tigres", "Dan Meza", 2002);
	cout << "Titulo del libro: " << libro1.obtenerTitulo() << endl;
	cout << "Autor del libro: " << libro1.obtenerAutor() << endl;
	cout << "Anio de publicacion del libro: " << libro1.obtenerAnioPublicacion() << endl;

	// Cambiar el anio de publicacion del libro
	libro1.establecerAnioPublicacion(2005);
	cout << "Nuevo anio de publicacion del libro: " << libro1.obtenerAnioPublicacion() << endl;
	*/

	//ejercicio 11
	/*Fraccion fraccion1(3, 4);
	Fraccion fraccion2(1, 2);

	Fraccion resultadoSuma = fraccion1.sumar(fraccion2);
	cout << "Suma: ";
	resultadoSuma.simplificar();
	resultadoSuma.imprimir();

	Fraccion resultadoResta = fraccion1.restar(fraccion2);
	cout << "Resta: ";
	resultadoResta.simplificar();
	resultadoResta.imprimir();

	Fraccion resultadoMultiplicacion = fraccion1.multiplicar(fraccion2);
	cout << "Multiplicacion: ";
	resultadoMultiplicacion.simplificar();
	resultadoMultiplicacion.imprimir();

	Fraccion resultadoDivision = fraccion1.dividir(fraccion2);
	cout << "Division: ";
	resultadoDivision.simplificar();
	resultadoDivision.imprimir();
	*/

	//ejercicio 12
	/*Cuadrado cuadrado(5);
	cout << "Area del cuadrado: " << cuadrado.obtenerArea() << endl;
	cout << "Perimetro del cuadrado: " << cuadrado.obtenerPerimetro() << endl;
	*/
	
	//ejercicio 13
	/*Empleado empleado1("Juan Perez", 2500.0, "Desarrollador");
	cout << "Nombre del empleado: " << empleado1.obtenerNombre() << endl;
	cout << "Salario del empleado: " << empleado1.obtenerSalario() << endl;
	cout << "Cargo del empleado: " << empleado1.obtenerCargo() << endl;

	// Cambiar el salario del empleado
	empleado1.establecerSalario(2800.0);
	cout << "Nuevo salario del empleado: " << empleado1.obtenerSalario() << endl;
	*/
	//ejercicio 14
	/*Punto punto1(3.5, 2.0);
	cout << "Coordenadas del punto: (" << punto1.obtenerX() << ", " << punto1.obtenerY() << ")" << endl;

	// Cambiar las coordenadas del punto
	punto1.establecerX(5.0);
	punto1.establecerY(4.5);
	cout << "Nuevas coordenadas del punto: (" << punto1.obtenerX() << ", " << punto1.obtenerY() << ")" << endl;
	*/

	//ejercicio 15
	/*Caja caja1(3, 4, 5);
	cout << "Volumen de la caja: " << caja1.obtenerVolumen() << endl;
	cout << "Area superficial de la caja: " << caja1.obtenerAreaSuperficial() << endl;
	*/

	//ejercicio 16
	/*vector<float> ladosTriangulo = {3, 4, 5}; // Longitudes de los lados de un triángulo
	Poligono triangulo(3, ladosTriangulo);
	cout << "Perimetro del triangulo: " << triangulo.obtenerPerimetro() << endl;
	cout << "Area del triangulo: " << triangulo.obtenerArea() << endl;

	vector<float> ladosCuadrilatero = { 4, 4, 4, 4 }; // Longitudes de los lados de un cuadrado
	Poligono cuadrado(4, ladosCuadrilatero);
	cout << "Perimetro del cuadrado: " << cuadrado.obtenerPerimetro() << endl;
	cout << "Area del cuadrado: " << cuadrado.obtenerArea() << endl;
	*/
	
	//ejercicio 17
	/*Correo correo("leomeza@gmail.com", "salazar2@gmail.com", "Saludo", "Hola que hace");
	cout << "Remitente: " << correo.obtenerRemitente() << endl;
	cout << "Destinatario: " << correo.obtenerDestinatario() << endl;
	cout << "Asunto: " << correo.obtenerAsunto() << endl;
	cout << "Mensaje: " << correo.obtenerMensaje() << endl;

	// Cambiar el asunto del correo
	correo.establecerAsunto("Nuevo asunto");
	cout << "Nuevo asunto: " << correo.obtenerAsunto() << endl;
	*/

	//ejercicio 18
	/*FCuadrado cuadrado(4);
	FCirculo circulo(3);
	FTriangulo triangulo(5, 2);

	cout << "Area del cuadrado: " << cuadrado.calcularArea() << endl;
	cout << "Area del circulo: " << circulo.calcularArea() << endl;
	cout << "Area del triangulo: " << triangulo.calcularArea() << endl;
	*/

	//ejercicio 19
	/*Producto producto("Laptop", 1200, 5);
	cout << "Nombre del producto: " << producto.obtenerNombre() << endl;
	cout << "Precio del producto: Q." << producto.obtenerPrecio() << endl;
	cout << "Cantidad del producto: " << producto.obtenerCantidad() << endl;

	// Cambiar el precio del producto
	producto.establecerPrecio(1300);
	cout << "Nuevo precio del producto: Q." << producto.obtenerPrecio() << endl;
	*/

	//ejercicio 20
	/*TerjetaCredito tarjeta("1234567890123456", 2000);
	cout << "Saldo inicial: Q." << tarjeta.consultarSaldo() << endl;

	// Realizar un pago
	tarjeta.realizarPago(1500);
	cout << "Saldo despues del pago: Q." << tarjeta.consultarSaldo() << endl;

	// Intentar realizar un pago que excede el saldo disponible y el límite de credito
	tarjeta.realizarPago(800);
	cout << "Saldo despues del segundo pago: Q." << tarjeta.consultarSaldo() << endl;
	*/

	//ejercicio 21
	/*vector<EmpleadoM> empleados; // Vector para almacenar varios empleados

	int numEmpleados;
	cout << "Ingrese el numero de empleados a registrar: ";
	cin >> numEmpleados;

	// Solicitar informacion para cada empleado
	for (int i = 0; i < numEmpleados; ++i) {
	cout << "\nEmpleado " << i + 1 << ":" << endl;
	EmpleadoM empleado;

	string nombre;
	cout << "Nombre: ";
	cin.ignore(); // Ignorar el salto de linea pendiente
	getline(cin, nombre);
	empleado.establecerNombre(nombre);

	float salario;
	cout << "Salario: ";
	cin >> salario;
	empleado.establecerSalario(salario);

	string cargo;
	cout << "Cargo: ";
	cin.ignore(); // Ignorar el salto de linea pendiente
	getline(cin, cargo);
	empleado.establecerCargo(cargo);

	// Agregar el empleado al vector
	empleados.push_back(empleado);
	}

	// Mostrar un resumen con los detalles de cada empleado registrado
	cout << "\nResumen de empleados registrados:" << endl;
	for (int i = 0; i < empleados.size(); ++i) {
	cout << "Empleado " << i + 1 << ":" << endl;
	cout << "Nombre: " << empleados[i].obtenerNombre() << endl;
	cout << "Salario: Q." << empleados[i].obtenerSalario() << endl;
	cout << "Cargo: " << empleados[i].obtenerCargo() << endl << endl;
	}
	*/

	//ejercicio 22
	/*int num1, den1, num2, den2;

	cout << "Ingrese la primera fraccion (numerador denominador): ";
	cin >> num1 >> den1;

	cout << "Ingrese la segunda fraccion (numerador denominador): ";
	cin >> num2 >> den2;

	FraccionM fraccion1(num1, den1);
	FraccionM fraccion2(num2, den2);

	cout << "Seleccione la operacion:\n";
	cout << "1. Suma\n";
	cout << "2. Resta\n";
	cout << "3. Multiplicacion\n";
	cout << "4. Division\n";

	int opcion;
	cin >> opcion;

	FraccionM resultado(0, 1);

	switch (opcion) {
	case 1:
		resultado = fraccion1.sumar(fraccion2);
		break;
	case 2:
		resultado = fraccion1.restar(fraccion2);
		break;
	case 3:
		resultado = fraccion1.multiplicar(fraccion2);
		break;
	case 4:
		resultado = fraccion1.dividir(fraccion2);
		break;
	default:
		cout << "Opcion invalida\n";
		return 1;
	}

	cout << "El resultado es: ";
	resultado.imprimir();
	*/
	
	//ejercicio 23 
	/*vector<CuentaBancariaM> cuentas; // Vector para almacenar varias cuentas bancarias

	int numCuentas;
	cout << "Ingrese el numero de cuentas bancarias a registrar: ";
	cin >> numCuentas;

	// Solicitar informacion para cada cuenta bancaria
	for (int i = 0; i < numCuentas; ++i) {
		cout << "\nCuenta Bancaria " << i + 1 << ":" << endl;
		int numCuenta;
		cout << "Numero de cuenta: ";
		cin >> numCuenta;

		float saldoInicial;
		cout << "Saldo inicial: Q. ";
		cin >> saldoInicial;

		// Crear una nueva cuenta bancaria y agregarla al vector
		CuentaBancariaM cuenta(numCuenta, saldoInicial);
		cuentas.push_back(cuenta);
	}

	// Realizar transacciones en las cuentas bancarias
	int opcion;
	do {
		cout << "\nSeleccione una cuenta bancaria (1 - " << numCuentas << ") o ingrese 0 para salir: ";
		cin >> opcion;

		if (opcion >= 1 && opcion <= numCuentas) {
			int indiceCuenta = opcion - 1;
			float cantidad;
			cout << "Ingrese la cantidad a depositar (+) o retirar (-): ";
			cin >> cantidad;

			if (cantidad >= 0) {
				cuentas[indiceCuenta].depositar(cantidad);
			}
			else {
				cuentas[indiceCuenta].retirar(-cantidad);
			}
		}
		else if (opcion != 0) {
			cout << "Opcion invalida. Intentelo de nuevo." << endl;
		}
	} while (opcion != 0);
	*/

	//ejercicio 24
	/*vector<EstudianteM> estudiantes;

	int opcion;
	do {
		cout << "\nMenu:" << endl;
		cout << "1. Agregar nuevo estudiante" << endl;
		cout << "2. Mostrar lista de estudiantes registrados" << endl;
		cout << "3. Buscar estudiante por nombre" << endl;
		cout << "4. Buscar estudiantes por carrera" << endl;
		cout << "0. Salir" << endl;
		cout << "Ingrese su opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			agregarEstudiante(estudiantes);
			break;
		case 2:
			mostrarEstudiantes(estudiantes);
			break;
		case 3:
		{
			string nombre;
			cout << "\nIngrese el nombre del estudiante a buscar: ";
			cin.ignore(); // Ignorar el salto de linea pendiente
			getline(cin, nombre);
			buscarPorNombre(estudiantes, nombre);
		}
		break;
		case 4:
		{
			string carrera;
			cout << "\nIngrese la carrera de los estudiantes a buscar: ";
			cin.ignore(); // Ignorar el salto de linea pendiente
			getline(cin, carrera);
			buscarPorCarrera(estudiantes, carrera);
		}
		break;
		case 0:
			cout << "¡Hasta luego!" << endl;
			break;
		default:
			cout << "Opcion invalida. Intentelo de nuevo." << endl;
		}
	} while (opcion != 0);
	*/

	//ejercicio 25
vector<ProductoM> inventario;

// Ingresar informacion para varios productos
int numProductos;
cout << "Ingrese el numero de productos en el inventario: ";
cin >> numProductos;

for (int i = 0; i < numProductos; ++i) {
	string nombre;
	float precio;
	int cantidadInventario;

	cout << "\nIngrese el nombre del producto " << i + 1 << ": ";
	cin.ignore(); // Ignorar el salto de linea pendiente
	getline(cin, nombre);

	cout << "Ingrese el precio del producto " << i + 1 << ": $";
	cin >> precio;

	cout << "Ingrese la cantidad en inventario del producto " << i + 1 << ": ";
	cin >> cantidadInventario;

	inventario.push_back(ProductoM(nombre, precio, cantidadInventario)); 
}

// Carrito de compras
vector<ProductoM> carrito;

// Mostrar los productos disponibles en el inventario
cout << "\nProductos disponibles en el inventario:" << endl;
for (int i = 0; i < inventario.size(); ++i) {
	cout << i + 1 << ". " << inventario[i].obtenerNombre() << " - $" << inventario[i].obtenerPrecio()
		<< " - Cantidad en inventario: " << inventario[i].obtenerCantidadInventario() << endl;
}

// Realizar compras
int opcion;
do {
	cout << "\nSeleccione un producto para agregar al carrito (1 - " << inventario.size()
		<< ") o ingrese 0 para finalizar la compra: ";
	cin >> opcion;

	if (opcion >= 1 && opcion <= inventario.size()) {
		int indiceProducto = opcion - 1;
		if (inventario[indiceProducto].obtenerCantidadInventario() > 0) {
			carrito.push_back(inventario[indiceProducto]);
			inventario[indiceProducto].actualizarInventario(1); // Actualizar el inventario después de agregar al carrito
			cout << "Producto agregado al carrito." << endl;
		}
		else {
			cout << "Lo sentimos, el producto seleccionado esta agotado." << endl;
		}
	}
	else if (opcion != 0) {
		cout << "Opcion invalida. Intentelo de nuevo." << endl;
	}
} while (opcion != 0);

// Mostrar el total de la compra
float totalCompra = 0;
cout << "\nDetalle de la compra:" << endl;
for ( ProductoM& producto : carrito) { 
	cout << producto.obtenerNombre() << " - Q." << producto.obtenerPrecio() << endl;
	totalCompra += producto.obtenerPrecio();
}
cout << "Total de la compra: Q." << totalCompra << endl;

	return 0;
}