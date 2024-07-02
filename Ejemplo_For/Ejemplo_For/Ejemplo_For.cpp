#include <iostream>
using namespace std;
int main()
{
    int c = 0; int y = 0;
    for (int x = 0; x < 10; x++) {
        y = c++;
        cout << "valor de x " << c << " Valor de y " << y << endl;
    }
    cout << "" << endl;
    int a = 0;
    for (int x = 0; x < 10; x++) {
        int b = 0;
        b = ++a;
        cout << "Valor de x " << a << " Valor de y " << b << endl;
    }

    cout << endl;
    int d = 0;
    int contador = 0;
    while (contador<5) {
        int f = ++d;
        cout << "Valor de x " << d << " valor de y " << f << endl;
        contador++;
    }

    cout << endl;
    int g = 0;
    int contador2 = 0;
    while (contador2 < 5) {
        int h = g++;
        cout << "valor de x " << g << " valor de y " << h << endl;
        contador2++;
    }
    cout << "-------------------------------------------------------------------" << endl;
    int h = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "InTERACION pre I " << i << endl;
        y = i;
        cout << "InTERACCION PRE y " << y << endl;
    }
    cout << "--------------------------------------------------------------------" << endl;
    int k = 0;
    for (int j = 0; j < 5; j++) {
        cout << "Interacion POST j " << j << endl;
        k = j;
        cout << "Interaccion PRE k" << k << endl;
    }
}
