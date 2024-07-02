#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Clase base Producto
class Producto {
protected:
    string nombre;
    float precio;
    int cantidad;

public:
    Producto(const string& _nombre, float _precio, int _cantidad) : nombre(_nombre), precio(_precio), cantidad(_cantidad) {}

    virtual float calcularPrecio() const {
        return precio;
    }
    const string obtenerNombre() const {
        return nombre;
    }
    const int obtenerCantidad() const {
        return cantidad;
    }
};

// Subclase ProductoElectronico, hereda de Producto
class ProductoElectronico : public Producto {
private:
    float impuesto;

public:
    ProductoElectronico(const string& _nombre, float _precio, float _impuesto, int _cantidad) : Producto(_nombre, _precio, _cantidad), impuesto(_impuesto) {}

    float calcularPrecio() const override {
        float pretot = precio * cantidad;
        float impueston = pretot * impuesto;
        return pretot + impueston;
    }
};

// Subclase ProductoAlimenticio, hereda de Producto
class ProductoAlimenticio : public Producto {
private:
    float descuento;

public:
    ProductoAlimenticio(const string& _nombre, float _precio, float _descuento, int _cantidad) : Producto(_nombre, _precio, _cantidad), descuento(_descuento) {}

    float calcularPrecio() const override {
        float pretot = precio * cantidad;
        float descuenton = pretot * descuento;
        return pretot - descuenton;
    }
};

class ProductoFerreteria : public Producto {
private:
    float envioAdicional;

public:
    ProductoFerreteria(const string& _nombre, float _precio, float _envioAdicional, int _cantidad) : Producto(_nombre, _precio, _cantidad), envioAdicional(_envioAdicional) {}

    float calcularPrecio() const override {
        return precio * cantidad + envioAdicional;
    }
};

class Cliente {
private:
    string nombreCliente;
    string estadoCliente;

public:
    Cliente(string _nombreCliente, string _estadoCliente) : nombreCliente(_nombreCliente), estadoCliente(_estadoCliente) {}

    void DatosCliente() const {
        cout << "Cliente: " << nombreCliente << "   Estado: " << estadoCliente << endl;
    }
};

// Clase Carrito
class Carrito {
private:
    vector<Producto*> productos;
    Cliente cliente;

public:
    Carrito(const Cliente& _cliente) : cliente(_cliente) {}

    void agregarProducto(Producto* producto) {
        productos.push_back(producto);
    }

    float calcularPrecioTotal() const {
        float precioTotal = 0;
        for (const auto& producto : productos) {
            precioTotal += producto->calcularPrecio();
        }
        return precioTotal;
    }

    void mostrarCarrito() const {
        cout << "Total Carrito: " << endl;
        cliente.DatosCliente();
        for (const auto& Producto : productos) {
            cout << "Nombre: " << Producto->obtenerNombre() << endl;
            cout << "Cantidad: " << Producto->obtenerCantidad() << endl;
            cout << "Precio: " << Producto->calcularPrecio() << endl << endl;
        }
    }
};
