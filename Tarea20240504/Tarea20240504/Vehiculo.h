#pragma once
using namespace System;

#include <iostream>
#include <string>



// Enumeraci�n para los tipos de veh�culos
public enum class TipoVehiculo {
    Acuatico,
    Terrestre,
    Aereo
};

// Enumeraci�n para los tipos de motores
public enum class TipoMotor {
    Diesel,
    Gasolina,
    Electrico,
    Hidrogeno
};

// Clase que representa un veh�culo
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
    // Constructor para inicializar el veh�culo
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

    // M�todo para mostrar informaci�n del veh�culo
    void mostrarInformacion() {
       
    }

private:
    // M�todo auxiliar para obtener la representaci�n del tipo de veh�culo como cadena de texto
    std::string tipoVehiculoStr()  {
        switch (tipoVehiculo) {
        case TipoVehiculo::Acuatico:
            return "Acu�tico";
        case TipoVehiculo::Terrestre:
            return "Terrestre";
        case TipoVehiculo::Aereo:
            return "A�reo";
        }
        return "Desconocido";
    }

    // M�todo auxiliar para obtener la representaci�n del tipo de motor como cadena de texto
    std::string tipoMotorStr()  {
        switch (tipoMotor) {
        case TipoMotor::Diesel:
            return "Diesel";
        case TipoMotor::Gasolina:
            return "Gasolina";
        case TipoMotor::Electrico:
            return "El�ctrico";
        case TipoMotor::Hidrogeno:
            return "Hidr�geno";
        }
        return "Desconocido";
    }
};

