#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;
class Gato : public Animal
{
public:

	void hacerSonido() const override {
		cout << "Miauuuuu!" << endl;
	}

	void moverse() const override {
		cout << "El gato Salta" << endl;
	}
};

