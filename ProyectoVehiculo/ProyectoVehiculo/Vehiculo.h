#pragma once
#include <iostream>
#include <string>
using namespace System;
ref class Vehiculo
{
private:
	String^ IdVehiculo;
	String^ Linea;
	String^ Anio;
	String^ Motor;
	String^ TipoVehiculo;
	String^ TipoMotor;
	String^ VinNumero;

public:
	Vehiculo(String^ _IdVehiculo, String^ _Linea, String^ _Anio, String^ _Motor, String^ _TipoVehiculo, String^ _TipoMotor, String^ _VinNumero)
	{
		IdVehiculo = _IdVehiculo;
		Linea = _Linea;
		Anio = _Anio;
		Motor = _Motor;
		TipoVehiculo = _TipoVehiculo;
		TipoMotor = _TipoMotor;
		VinNumero = _VinNumero;
	}

	String^ getIdVehiculo()
	{
		return IdVehiculo;
	}
	void setIdVehiculo(String^ Id)
	{
		IdVehiculo = Id;
	}

	String^ getLinea()
	{
		return Linea;
	}
	void setLinea(String^ L)
	{
		Linea = L;
	}

	String^ getAnio()
	{
		return Anio;
	}
	void setAnio(String^ A)
	{
		Anio = A;
	}

	String^ getMotor()
	{
		return Motor;
	}
	void setMotor(String^ M)
	{
		Motor = M;
	}

	String^ getTipoVehiculo()
	{
		return TipoVehiculo;
	}
	void setTipoVehiculo(String^ TV)
	{
		TipoVehiculo = TV;
	}

	String^ getTipoMotor()
	{
		return TipoMotor;
	}
	void setTipoMotor(String^ TP)
	{
		TipoMotor = TP;
	}

	String^ getVinNumero()
	{
		return VinNumero;
	}
	void setVinNumero(String^ VN)
	{
		VinNumero = VN;
	}
};

