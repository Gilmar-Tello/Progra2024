#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;
class Perro : public Animal
{
public:

	void hacerSonido() const override {
		cout << "Guauuu Guauuuu!" << endl;
	}

	void moverse() const override {
		cout << "El perro Corre" << endl;
	}
};

