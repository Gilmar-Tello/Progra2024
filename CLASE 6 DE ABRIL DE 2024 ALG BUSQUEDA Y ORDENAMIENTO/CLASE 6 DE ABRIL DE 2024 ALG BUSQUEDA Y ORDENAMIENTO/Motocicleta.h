#pragma once
#include "Vehiculo.h"
#include <iostream>

// Clase derivada que representa una motocicleta
class Motocicleta : public Vehiculo {
public:
    // Constructor
    Motocicleta(const std::string& marca, const std::string& modelo, int anio)
        : Vehiculo(marca, modelo, anio) {}

    // Implementaci�n del m�todo describir
    void describir() const override {
        std::cout << "Motocicleta: Marca - " << marca << ", Modelo - " << modelo << ", A�o - " << anio << std::endl;
    }

    // Implementaci�n del m�todo para calcular el costo del seguro para una motocicleta
    float calcularCostoSeguro() const override {
        // L�gica para calcular el costo del seguro de una motocicleta
        return 300.0f; // Supongamos un valor fijo para el ejemplo
    }

    // Implementaci�n del m�todo para calcular el impuesto de circulaci�n para una motocicleta
    float calcularImpuestoCirculacion() const override {
        // L�gica para calcular el impuesto de circulaci�n de una motocicleta
        return 50.0f; // Supongamos un valor fijo para el ejemplo
    }
};


