

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, r1, r2, s1, s2, t, m1, tm;
    cout << "ingrese el primer numero" << endl;
    cin >> n1;
    cout << "ingrese el segundo numero" << endl;
    cin >> n2;
    cout << "ingrese el tercer numero" << endl;
    cin >> n3;

    
    r1 = n1 * n2;
    r2 = n2 * n3;

    m1 = n1 * n2;
    tm = m1 * n3;

    cout << "n1 * n2 = " << r1 << " n2 * n3 = " << r2 << endl;
    cout << "valor 1 = " << m1 << " valor 2 = " << tm << endl;

    s1 = n1 + n2;
    s2 = n2 + n3;

    s1 = n1 + n2;
    t = s1 + n3;

    cout << "n1 + n2 = " << s1 << " n2 + n3 = " << s2 << endl;
    cout << "valor 1 = " << s1 << " valor 2 = " << t << endl;


}