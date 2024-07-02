#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

// Clase base Carta
class Carta {
protected:
    std::string valor;
    std::string palo;

public:
    Carta(const std::string& val, const std::string& p) : valor(val), palo(p) {}

    virtual void mostrarCarta() const {
        std::cout << valor << " de " << palo << std::endl;
    }
};

// Subclase CartaNormal, hereda de Carta
class CartaNormal : public Carta {
public:
    CartaNormal(const std::string& val, const std::string& p) : Carta(val, p) {}
    void mostrarCarta()const override {
        std::cout << "!" << valor << " normal de " << palo << "!" << std::endl;
    }
};

// Subclase CartaEspecial, hereda de Carta
class CartaEspecial : public Carta {
public:
    CartaEspecial(const std::string& val, const std::string& p) : Carta(val, p) {}

    void mostrarCarta() const override {
        std::cout << "!" << valor << " especial de " << palo << "!" << std::endl;
    }
};

// Clase Baraja
class Baraja {
private:
    std::vector<Carta*> cartas;

public:
    Baraja() {
        // Crear una baraja estándar de 52 cartas
        const std::string valores[] = { "As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jota", "Reina", "Rey" };
        const std::string palos[] = { "Corazones", "Diamantes", "Treboles", "Picas" };

        for (const std::string& palo : palos) {
            for (const std::string& valor : valores) {
                cartas.push_back(new CartaNormal(valor, palo));
            }
        }
    }

    // Mezclar las cartas en la baraja
    void mezclar() {
        std::srand(std::time(0)); // Semilla para la generación de números aleatorios
        std::random_shuffle(cartas.begin(), cartas.end());
    }

    // Devolver la primera carta de la baraja
    Carta* sacarCarta() {
        if (!cartas.empty()) {
            Carta* carta = cartas.back();
            cartas.pop_back();
            return carta;
        }
        else {
            return nullptr; // La baraja está vacía
        }
    }

    ~Baraja() {
        // Liberar la memoria de las cartas
        for (Carta* carta : cartas) {
            delete carta;
        }
    }
};

// Clase Jugador
class Jugador {
private:
    std::string nombre;
    std::vector<Carta*> mano;

public:
    Jugador(const std::string& n) : nombre(n) {}

    // Recibir una carta y agregarla a la mano del jugador
    void recibirCarta(Carta* carta) {
        mano.push_back(carta);
    }

    // Mostrar la mano del jugador
    void mostrarMano() const {
        std::cout << "Mano de " << nombre << ":" << std::endl;
        for (Carta* carta : mano) {
            carta->mostrarCarta();
        }
        std::cout << std::endl;
    }

    ~Jugador() {
        // Liberar la memoria de las cartas en la mano del jugador
        for (Carta* carta : mano) {
            delete carta;
        }
    }
};
