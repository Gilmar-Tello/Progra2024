#pragma once
#include <iostream>
#include <string>
class Animal
{
public:
	virtual void hacerSonido() const = 0;
	virtual void moverse() const = 0;
};

