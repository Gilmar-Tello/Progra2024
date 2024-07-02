#pragma once
#include "Vehiculo.h"
#include <iostream>

// Clase derivada que representa un coche
class Coche : public Vehiculo {
public:
    // Constructor
    Coche(const std::string& marca, const std::string& modelo, int anio)
        : Vehiculo(marca, modelo, anio) {}

    // Implementación del método describir
    void describir() const override {
        std::cout << "Coche: Marca - " << marca << ", Modelo - " << modelo << ", Año - " << anio << std::endl;
    }

    // Implementación del método para calcular el costo del seguro para un coche
    float calcularCostoSeguro() const override {
        // Lógica para calcular el costo del seguro de un coche
        return 500.0f; // Supongamos un valor fijo para el ejemplo
    }

    // Implementación del método para calcular el impuesto de circulación para un coche
    float calcularImpuestoCirculacion() const override {
        // Lógica para calcular el impuesto de circulación de un coche
        return 200.0f; // Supongamos un valor fijo para el ejemplo
    }
};

