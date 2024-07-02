#include <iostream>
using namespace std;
int main()
{
    cout << "Estructura For" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    cout << "" << endl;
    cout << "Estructura While" << endl;
    cout << "" << endl;
    int contador = 0;
    while (contador < 5) {
        contador++;
        cout << contador << endl;
    }

    int x = 0;
    x = 1;
    x + 1;
    x += 1;
    int y = x++;
    cout << "y = " << y << " x = " << x << endl;
}
