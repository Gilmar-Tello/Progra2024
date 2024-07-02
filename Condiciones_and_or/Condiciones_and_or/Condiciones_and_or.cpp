
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int edad;
    bool es_estudiante = false;

    cout << "ingrese su edad: " << endl;
    cin >> edad;
   

    if (edad >= 18 and not es_estudiante) {
        cout << "eres mayor de edad y no eres estudiante" << endl;
    }
    else if (edad < 18 or es_estudiante) {
        cout << "eres estudiante o eres menor de edad" << endl;
    }
    return 0;
}
