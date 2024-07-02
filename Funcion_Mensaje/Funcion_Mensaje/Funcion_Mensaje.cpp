#include <iostream>
using namespace std;
void imprimirmensaje() {
    cout << "esta es una funcion void";
}
//funciones con retorno
int imprimir() {
    return 2 * 2;
}
int main()
{
    imprimirmensaje();
    cout << endl;
    int x;
    x = imprimir();
    cout << x;
}
