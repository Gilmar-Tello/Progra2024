// CLASE 6 DE ABRIL DE 2024 ALG BUSQUEDA Y ORDENAMIENTO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include "Algoritmo.h"
#include "Coche.h"
#include "Motocicleta.h"


int main() {
    std::vector<int> datos = { 3, 7, 1, 9, 5 };

    // Antes de ordenar
    std::cout << "Vector antes del ordenamiento:" << std::endl;
    for (int num : datos) {
        std::cout << num << " " << std::endl;
    }
    std::cout << std::endl;
    Algoritmo  agt;
    // Llamada al algoritmo de ordenamiento burbuja
    agt.ordenamientoBurbuja(datos);

    // Después de ordenar
    std::cout << "Vector después del ordenamiento de burbuja:" << std::endl;
    for (int num : datos) {
        std::cout << num << " " << std::endl;
    }
    std::cout << std::endl;
    std::cout << "************************************************:" << std::endl;
    std::cout << "************************************************:" << std::endl;
    std::cout << "************************************************:" << std::endl;
    std::cout << "************************ALGORITMO BUSQUEDA LINEAL************************:" << std::endl;

    std::vector<int> datos2 = { 3, 7, 1, 9, 5 };

    int elementoBuscado = 9;
    int indice = agt.busquedaLineal(datos2, elementoBuscado);

    if (indice != -1) {
        std::cout << "El elemento " << elementoBuscado << " fue encontrado en el Indice: " << indice << std::endl;
    }
    else {
        std::cout << "El elemento " << elementoBuscado << " no fue encontrado en el vector." << std::endl;
    }


    // Crear objetos de coche y motocicleta
    /*Coche coche("Toyota", "Corolla", 2020);
    Motocicleta moto("Honda", "CBR500R", 2019);

    // Llamar a los métodos de descripción y cálculo de costos e impuestos
    coche.describir();
    std::cout << "Costo del seguro del coche: $" << coche.calcularCostoSeguro() << std::endl;
    std::cout << "Impuesto de circulacion del coche: $" << coche.calcularImpuestoCirculacion() << std::endl;

    std::cout << std::endl;

    moto.describir();
    std::cout << "Costo del seguro de la motocicleta: $" << moto.calcularCostoSeguro() << std::endl;
    std::cout << "Impuesto de circulacion de la motocicleta: $" << moto.calcularImpuestoCirculacion() << std::endl;

    */
    return 0;
}


