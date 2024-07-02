
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    int c;

    //suma
    if (a + b >= 15) {
        int c = a + b;
        cout << "a + b = " << c << endl;
    }
    
    //resta
    if (a - b < 5) {
        int c = a - b;
        cout << "a - b = " << c << endl;
    }
    else {
        cout << "es igual a : 5"<<endl;
    }

    //multiplicacion
    if (a * b > 20) {
        int c = a * b;
        cout << "a * b = " << c << endl;
    }

    //division
    if (a / b == 2) {
        int c = a / b;
        cout << "a / b = " << c << endl;
    }

    return 0;
}