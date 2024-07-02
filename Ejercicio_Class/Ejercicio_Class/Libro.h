#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;

public:
    // Constructor
    Libro(string titulo, string autor, int anioPublicacion) {
        this->titulo = titulo;
        this->autor = autor;
        this->anioPublicacion = anioPublicacion;
    }

    // M�todos para establecer los atributos
    void establecerTitulo(string titulo) {
        this->titulo = titulo;
    }

    void establecerAutor(string autor) {
        this->autor = autor;
    }

    void establecerAnioPublicacion(int anioPublicacion) {
        this->anioPublicacion = anioPublicacion;
    }

    // M�todos para obtener los atributos
    string obtenerTitulo() {
        return titulo;
    }

    string obtenerAutor() {
        return autor;
    }

    int obtenerAnioPublicacion() {
        return anioPublicacion;
    }
};
