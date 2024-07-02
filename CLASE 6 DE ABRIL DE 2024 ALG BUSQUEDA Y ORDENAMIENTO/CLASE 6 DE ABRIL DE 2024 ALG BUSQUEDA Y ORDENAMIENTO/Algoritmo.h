#pragma once
#include <vector>
class Algoritmo
{
public:
    // Funci�n para ordenar un vector utilizando el algoritmo de ordenamiento burbuja
    void ordenamientoBurbuja(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Intercambio de elementos
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    /*
Primera pasada:

Comparamos los elementos adyacentes y los intercambiamos si est�n en el orden incorrecto.
En la primera pasada, se compara 3 y 7, como est�n en el orden correcto no se realiza ning�n intercambio.
Se compara 7 y 1, como 7 es mayor que 1, se intercambian.
Se compara 7 y 9, est�n en el orden correcto.
Se compara 9 y 5, se intercambian.
El vector despu�s de la primera pasada es: 3, 1, 7, 5, 9
Segunda pasada:

Repetimos el proceso anterior pero solo hasta el pen�ltimo elemento, ya que el �ltimo elemento ya est� en su posici�n correcta despu�s de la primera pasada.
Se compara 3 y 1, se intercambian.
Se compara 3 y 7, est�n en el orden correcto.
Se compara 7 y 5, se intercambian.
El vector despu�s de la segunda pasada es: 1, 3, 5, 7, 9
Tercera pasada:

Como ya se realiz� la comparaci�n con los elementos anteriores, solo se consideran los elementos desde el inicio hasta el tercer elemento desde el final.
Se compara 1 y 3, est�n en el orden correcto.
Se compara 3 y 5, est�n en el orden correcto.
Se compara 5 y 7, est�n en el orden correcto.
El vector despu�s de la tercera pasada sigue siendo: 1, 3, 5, 7, 9
Cuarta pasada:

No se realiza ning�n intercambio porque todos los elementos ya est�n ordenados.
El vector finalmente est� ordenado despu�s de la cuarta pasada. El ordenamiento burbuja es un algoritmo simple pero no muy eficiente, especialmente para conjuntos de datos grandes, ya que su complejidad es cuadr�tica.
*/


    // Funci�n para buscar un elemento en un vector utilizando b�squeda lineal
    int busquedaLineal(std::vector<int>& arr, int elemento) {
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == elemento) {
                return i; // Elemento encontrado, devuelve su �ndice
            }
        }
        return -1; // Elemento no encontrado
    }
};
/*
Inicializaci�n: Comenzamos desde el primer elemento del vector.

Comparaci�n : Comparamos el elemento actual con el valor que estamos buscando.

Coincidencia : Si el elemento actual es igual al valor buscado, hemos encontrado el elemento y terminamos la b�squeda.

Avance : Si no hay coincidencia, pasamos al siguiente elemento del vector y repetimos los pasos 2 y 3.

Finalizaci�n : Repetimos este proceso hasta que hayamos recorrido todos los elementos del vector o hasta que encontremos el elemento buscado.

Resultado : Si encontramos el elemento, devolvemos su posici�n(�ndice) en el vector.Si no lo encontramos, devolvemos un indicador de que el elemento no est� presente en el vector.
*/