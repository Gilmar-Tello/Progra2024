#pragma once
#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int anio;

public:
    // Constructor
    Vehiculo(const std::string& marca, const std::string& modelo, int anio)
        : marca(marca), modelo(modelo), anio(anio) {}

    // M�todo virtual puro para describir el veh�culo
    virtual void describir() const = 0;

    // M�todo para obtener la marca del veh�culo
    std::string obtenerMarca() const {
        return marca;
    }

    // M�todo para obtener el modelo del veh�culo
    std::string obtenerModelo() const {
        return modelo;
    }

    // M�todo para obtener el a�o del veh�culo
    int obtenerAnio() const {
        return anio;
    }

    // M�todo virtual para calcular el costo del seguro
    virtual float calcularCostoSeguro() const = 0;

    // M�todo virtual para calcular el impuesto de circulaci�n
    virtual float calcularImpuestoCirculacion() const = 0;
};


