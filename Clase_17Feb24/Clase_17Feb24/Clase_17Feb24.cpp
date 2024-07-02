//UNA VARIABLE STRING.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cout << "Ingrese una cadena: ";
    std::string string;
    std::getline(std::cin, string);
    std::cout << "usted ingreso: " << string << std::endl;

    std::cout << "Ingrese una cadena: ";
    std::string string;
    getline(std::cin, string);
    cout << "usted ingreso: " << string << endl;


}

