#pragma once
#include "Vehiculo.h"
#include <iostream>

// Clase derivada que representa una motocicleta
class Motocicleta : public Vehiculo {
public:
    // Constructor
    Motocicleta(const std::string& marca, const std::string& modelo, int anio)
        : Vehiculo(marca, modelo, anio) {}

    // Implementación del método describir
    void describir() const override {
        std::cout << "Motocicleta: Marca - " << marca << ", Modelo - " << modelo << ", Año - " << anio << std::endl;
    }

    // Implementación del método para calcular el costo del seguro para una motocicleta
    float calcularCostoSeguro() const override {
        // Lógica para calcular el costo del seguro de una motocicleta
        return 300.0f; // Supongamos un valor fijo para el ejemplo
    }

    // Implementación del método para calcular el impuesto de circulación para una motocicleta
    float calcularImpuestoCirculacion() const override {
        // Lógica para calcular el impuesto de circulación de una motocicleta
        return 50.0f; // Supongamos un valor fijo para el ejemplo
    }
};


