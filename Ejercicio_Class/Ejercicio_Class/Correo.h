#include <iostream>
#include <string>

using namespace std;

class Correo {
private:
    string remitente;
    string destinatario;
    string asunto;
    string mensaje;

public:
    // Constructor
    Correo(string remitente, string destinatario, string asunto, string mensaje) {
        this->remitente = remitente;
        this->destinatario = destinatario;
        this->asunto = asunto;
        this->mensaje = mensaje;
    }

    // Métodos para establecer los atributos
    void establecerRemitente(string remitente) {
        this->remitente = remitente;
    }

    void establecerDestinatario(string destinatario) {
        this->destinatario = destinatario;
    }

    void establecerAsunto(string asunto) {
        this->asunto = asunto;
    }

    void establecerMensaje(string mensaje) {
        this->mensaje = mensaje;
    }

    // Métodos para obtener los atributos
    string obtenerRemitente() {
        return remitente;
    }

    string obtenerDestinatario() {
        return destinatario;
    }

    string obtenerAsunto() {
        return asunto;
    }

    string obtenerMensaje() {
        return mensaje;
    }
};
