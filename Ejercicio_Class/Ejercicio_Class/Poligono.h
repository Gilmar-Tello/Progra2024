#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Poligono {
private:
    int numeroLados;
    vector<float> longitudLados;

public:
    // Constructor
    Poligono(int numeroLados, const vector<float>& longitudLados) {
        this->numeroLados = numeroLados;
        this->longitudLados = longitudLados;
    }

    // Método para obtener el perímetro
    float obtenerPerimetro() {
        float perimetro = 0;
        for (float longitud : longitudLados) {
            perimetro += longitud;
        }
        return perimetro;
    }

    // Método para obtener el área
    // Este método solo calculará el área para polígonos regulares
    // La fórmula para el área de un polígono regular depende del número de lados y la longitud de los lados
    // Solo se proporciona para polígonos con 3 o 4 lados, pero se puede extender para otros polígonos si es necesario
    float obtenerArea() {
        float area = 0;
        if (numeroLados == 3) { // Triángulo
            float s = obtenerPerimetro() / 2; // Semiperímetro
            area = sqrt(s * (s - longitudLados[0]) * (s - longitudLados[1]) * (s - longitudLados[2]));
        }
        else if (numeroLados == 4) { // Cuadrilátero
            float a = longitudLados[0];
            float b = longitudLados[1];
            area = a * b;
        }
        else {
            cout << "No se puede calcular el área para un polígono con " << numeroLados << " lados." << endl;
        }
        return area;
    }
};
