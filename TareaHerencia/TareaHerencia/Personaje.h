#pragma once
#include <iostream>
#include <string>
using namespace std;

// Clase base para representar un personaje
class Personaje {
protected:
    string nombre;
    int salud;

public:
    Personaje(const string& _nombre, int _salud) : nombre(_nombre), salud(_salud) {}

    virtual void atacar(Personaje& objetivo, int danio) = 0;
    virtual void defender(int danio) = 0;
    string obtenerNombre() const {
        return nombre;
    }
    int obtenerSalud() const {
        return salud;
    }
};

// Subclase para representar un Guerrero
class Guerrero : public Personaje {
public:
    Guerrero(const string& _nombre, int _salud) : Personaje(_nombre, _salud) {}

    void atacar(Personaje& objetivo, int danio) override {
        cout << nombre << " ataca con su espada a " << objetivo.obtenerNombre() << endl;
        int saludAntes = objetivo.obtenerSalud(); // Guardamos la salud antes del ataque
        objetivo.defender(danio); // Supongamos que el personaje inflige 'danio' al objetivo
        int saludDespues = objetivo.obtenerSalud(); // Obtener la salud después del ataque
        int danioInfligido = saludAntes - saludDespues; // Calcular el daño infligido

        // Verificar si el objetivo ha sido derrotado
        if (objetivo.obtenerSalud() <= 0) {
            cout << objetivo.obtenerNombre() << " ha sido derrotado" << endl;
        }
        else {
            cout << objetivo.obtenerNombre() << " le queda de vida: " << objetivo.obtenerSalud() << endl;
        }
        cout << "El ataque infligio " << danioInfligido << " puntos de danio." << endl;
    }
    void defender(int danio) override {
        salud -= danio;
        if (salud <= 0) {
            cout << nombre << " ha sido derrotado" << endl;
        }
    }
};


// Subclase para representar un Mago
class Mago : public Personaje {
public:
    Mago(const string& _nombre, int _salud) : Personaje(_nombre, _salud) {}

    void atacar(Personaje& objetivo, int danio) override {
        cout << nombre << " ataca con su varita a " << objetivo.obtenerNombre() << endl;
        int saludAntes = objetivo.obtenerSalud(); // Guardamos la salud antes del ataque
        objetivo.defender(danio); // Supongamos que el personaje inflige 'danio' al objetivo
        int saludDespues = objetivo.obtenerSalud(); // Obtener la salud después del ataque
        int danioInfligido = saludAntes - saludDespues; // Calcular el daño infligido

        // Verificar si el objetivo ha sido derrotado
        if (objetivo.obtenerSalud() <= 0) {
            cout << objetivo.obtenerNombre() << " ha sido derrotado" << endl;
        }
        else {
            cout << objetivo.obtenerNombre() << " le queda de vida: " << objetivo.obtenerSalud() << endl;
        }
        cout << "El ataque infligio " << danioInfligido << " puntos de danio." << endl;
    }
    void defender(int danio) override {
        salud -= danio;
        if (salud <= 0) {
            cout << nombre << " ha sido derrotado" << endl;
        }
    }
};

// Clase para representar un enemigo
class Enemigo : public Personaje {
public:
    Enemigo(const string& _nombre, int _salud) : Personaje(_nombre, _salud) {}

    void atacar(Personaje& objetivo, int danio) override {
        cout << nombre << " ataca con su espada a " << objetivo.obtenerNombre() << endl;
        int saludAntes = objetivo.obtenerSalud(); // Guardamos la salud antes del ataque
        objetivo.defender(danio); // Supongamos que el personaje inflige 'danio' al objetivo
        int saludDespues = objetivo.obtenerSalud(); // Obtener la salud después del ataque
        int danioInfligido = saludAntes - saludDespues; // Calcular el daño infligido

        // Verificar si el objetivo ha sido derrotado
        if (objetivo.obtenerSalud() <= 0) {
            cout << objetivo.obtenerNombre() << " ha sido derrotado" << endl;
        }
        else {
            cout << objetivo.obtenerNombre() << " le queda de vida: " << objetivo.obtenerSalud() << endl;
        }
        cout << "El ataque infligio " << danioInfligido << " puntos de danio." << endl;
    }
    void defender(int danio) override {
        salud -= danio;
        if (salud <= 0) {
            cout << nombre << " ha sido derrotado" << endl;
        }
    }
};
