#pragma once
#include "Vehiculo.h"
#include <iostream>

// Clase derivada que representa un coche
class Coche : public Vehiculo {
public:
    // Constructor
    Coche(const std::string& marca, const std::string& modelo, int anio)
        : Vehiculo(marca, modelo, anio) {}

    // Implementaci�n del m�todo describir
    void describir() const override {
        std::cout << "Coche: Marca - " << marca << ", Modelo - " << modelo << ", A�o - " << anio << std::endl;
    }

    // Implementaci�n del m�todo para calcular el costo del seguro para un coche
    float calcularCostoSeguro() const override {
        // L�gica para calcular el costo del seguro de un coche
        return 500.0f; // Supongamos un valor fijo para el ejemplo
    }

    // Implementaci�n del m�todo para calcular el impuesto de circulaci�n para un coche
    float calcularImpuestoCirculacion() const override {
        // L�gica para calcular el impuesto de circulaci�n de un coche
        return 200.0f; // Supongamos un valor fijo para el ejemplo
    }
};

