#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Clase Pasajero
class Pasajero {
private:
    string nombre;
    string numeroPasaporte;

public:
    Pasajero(const string& _nombre, const string& _numeroPasaporte)
        : nombre(_nombre), numeroPasaporte(_numeroPasaporte) {}

    const string& obtenerNombre() const {
        return nombre;
    }

    const string& obtenerNumeroPasaporte() const {
        return numeroPasaporte;
    }
};

// Clase Avion
class Avion {
protected:
    int numeroAsientos;
    float capacidadCarga;

public:
    Avion(int _numeroAsientos, float _capacidadCarga)
        : numeroAsientos(_numeroAsientos), capacidadCarga(_capacidadCarga) {}

    int obtenerNumeroAsientos() const {
        return numeroAsientos;
    }

    float obtenerCapacidadCarga() const {
        return capacidadCarga;
    }

    virtual float calcularCostoVuelo() const = 0;
    virtual void reservarAsiento(const Pasajero& pasajero) = 0;
};

// Clase Vuelo
class Vuelo {
private:
    int numeroVuelo;
    string origen;
    string destino;
    vector<Pasajero> listaPasajeros;
    Avion* avion;

public:
    Vuelo(int _numeroVuelo, const string& _origen, const string& _destino, Avion* _avion)
        : numeroVuelo(_numeroVuelo), origen(_origen), destino(_destino), avion(_avion) {}

    void agregarPasajero(const Pasajero& pasajero) {
        listaPasajeros.push_back(pasajero);
        avion->reservarAsiento(pasajero);
    }

    float calcularCostoTotal() const {
        return avion->calcularCostoVuelo();
    }
};

// Subclase AvionComercial, hereda de Avion
class AvionComercial : public Avion {
public:
    AvionComercial(int _numeroAsientos, float _capacidadCarga)
        : Avion(_numeroAsientos, _capacidadCarga) {}

    float calcularCostoVuelo() const override {
        // Aquí puedes implementar la lógica específica para calcular el costo de un vuelo comercial
        // Por ejemplo, considerando tarifas, impuestos, etc.
        // Por ahora, simplemente devolvemos un valor fijo para demostración
        return 1000.0f;
    }

    void reservarAsiento(const Pasajero& pasajero) override {
        // Implementa la lógica específica para reservar un asiento en un vuelo comercial
        cout << "Asiento reservado en vuelo comercial para pasajero: " << pasajero.obtenerNombre() << endl;
    }
};

// Subclase AvionPrivado, hereda de Avion
class AvionPrivado : public Avion {
public:
    AvionPrivado(int _numeroAsientos, float _capacidadCarga)
        : Avion(_numeroAsientos, _capacidadCarga) {}

    float calcularCostoVuelo() const override {
        // Aquí puedes implementar la lógica específica para calcular el costo de un vuelo privado
        // Por ejemplo, considerando el costo de operación del avión, gastos adicionales, etc.
        // Por ahora, simplemente devolvemos un valor fijo para demostración
        return 5000.0f;
    }

    void reservarAsiento(const Pasajero& pasajero) override {
        // Implementa la lógica específica para reservar un asiento en un vuelo privado
        cout << "Asiento reservado en vuelo privado para pasajero: " << pasajero.obtenerNombre() << endl;
    }
};
