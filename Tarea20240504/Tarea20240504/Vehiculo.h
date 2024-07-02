#pragma once
using namespace System;

#include <iostream>
#include <string>



// Enumeración para los tipos de vehículos
public enum class TipoVehiculo {
    Acuatico,
    Terrestre,
    Aereo
};

// Enumeración para los tipos de motores
public enum class TipoMotor {
    Diesel,
    Gasolina,
    Electrico,
    Hidrogeno
};

// Clase que representa un vehículo
public ref class Vehiculo {
private:
    int idVehiculo;
    System::String^ linea;
    int anio;
    System::String^ motor;
    TipoVehiculo tipoVehiculo;
    TipoMotor tipoMotor;
    System::String^ VIN_NUMBER;

public:
    // Constructor para inicializar el vehículo
    Vehiculo() {};

    Vehiculo(int id, System::String^ ln, int an, System::String^ mot, TipoVehiculo tv, TipoMotor tm, System::String^ vin)
        : idVehiculo(id), linea(ln), anio(an), motor(mot), tipoVehiculo(tv), tipoMotor(tm), VIN_NUMBER(vin) {}



    // Getters
    int getIdVehiculo()  { return idVehiculo; }
    String^ getLinea()  { return linea; }
    int getAnio() { return anio; }
    String^ getMotor()  { return motor; }
    TipoVehiculo getTipoVehiculo()  { return tipoVehiculo; }
    TipoMotor getTipoMotor() { return tipoMotor; }
    String^ getVinNumber()  { return VIN_NUMBER; }

    // Setters
    void setIdVehiculo(int id) { idVehiculo = id; }
    void setLinea( String^ ln) { linea = ln; }
    void setAnio(int an) { anio = an; }
    void setMotor(String^ mot) { motor = mot; }
    void setTipoVehiculo(TipoVehiculo tv) { tipoVehiculo = tv; }
    void setTipoMotor(TipoMotor tm) { tipoMotor = tm; }
    void setVinNumber( String^ vin) { VIN_NUMBER = vin; }

    // Método para mostrar información del vehículo
    void mostrarInformacion() {
       
    }

private:
    // Método auxiliar para obtener la representación del tipo de vehículo como cadena de texto
    std::string tipoVehiculoStr()  {
        switch (tipoVehiculo) {
        case TipoVehiculo::Acuatico:
            return "Acuático";
        case TipoVehiculo::Terrestre:
            return "Terrestre";
        case TipoVehiculo::Aereo:
            return "Aéreo";
        }
        return "Desconocido";
    }

    // Método auxiliar para obtener la representación del tipo de motor como cadena de texto
    std::string tipoMotorStr()  {
        switch (tipoMotor) {
        case TipoMotor::Diesel:
            return "Diesel";
        case TipoMotor::Gasolina:
            return "Gasolina";
        case TipoMotor::Electrico:
            return "Eléctrico";
        case TipoMotor::Hidrogeno:
            return "Hidrógeno";
        }
        return "Desconocido";
    }
};

