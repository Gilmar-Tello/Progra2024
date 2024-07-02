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

    // M�todo para obtener el per�metro
    float obtenerPerimetro() {
        float perimetro = 0;
        for (float longitud : longitudLados) {
            perimetro += longitud;
        }
        return perimetro;
    }

    // M�todo para obtener el �rea
    // Este m�todo solo calcular� el �rea para pol�gonos regulares
    // La f�rmula para el �rea de un pol�gono regular depende del n�mero de lados y la longitud de los lados
    // Solo se proporciona para pol�gonos con 3 o 4 lados, pero se puede extender para otros pol�gonos si es necesario
    float obtenerArea() {
        float area = 0;
        if (numeroLados == 3) { // Tri�ngulo
            float s = obtenerPerimetro() / 2; // Semiper�metro
            area = sqrt(s * (s - longitudLados[0]) * (s - longitudLados[1]) * (s - longitudLados[2]));
        }
        else if (numeroLados == 4) { // Cuadril�tero
            float a = longitudLados[0];
            float b = longitudLados[1];
            area = a * b;
        }
        else {
            cout << "No se puede calcular el �rea para un pol�gono con " << numeroLados << " lados." << endl;
        }
        return area;
    }
};
