#pragma once
#include "Empleado.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class EmpleadoTiempoCompleto : public Empleado {
private:
    double bono = 500;
public:
    EmpleadoTiempoCompleto(const string& nombre, double salario, double bono) : Empleado(nombre, salario), bono(bono) {}

    double calcularSalario() const override {
        return salario + bono;
    }
};

// Subclase EmpleadoTiempoParcial, hereda de Empleado
class EmpleadoTiempoParcial : public Empleado {
private:
    double horasTrabajadas;
    double tarifaPorHora;

public:
    EmpleadoTiempoParcial(const string& nombre, double salario, double horasTrabajadas, double tarifaPorHora) : Empleado(nombre, salario), horasTrabajadas(horasTrabajadas), tarifaPorHora(tarifaPorHora) {}

    double calcularSalario() const override {
        return salario + (horasTrabajadas * tarifaPorHora);
    }
};

// Clase Departamento
class Departamentos {
private:
    string nombre;
    vector<Empleado*> empleados;

public:
    Departamentos(const string& _nombre) : nombre(_nombre) {}

    void agregarEmpleado(Empleado* empleado) {
        empleados.push_back(empleado);
    }

    void mostrarEmpleados() const {
        cout << "Empleados del departamento: " << nombre << endl;
        for (const auto& Empleado : empleados) {
            cout << "Nombre: " << Empleado->obtenerNombre() << ", Salario: " << Empleado->calcularSalario() << endl;
        }
    }

    double calcularSalarioTotal() const {
        double salarioTotal = 0;
        for (const auto& Empleado : empleados) {
            salarioTotal += Empleado->calcularSalario();
        }
        return salarioTotal;
    }
};
