#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void hacerSonido() = 0;
	virtual ~Animal(){}
};

	class Perro : public Animal {
	public:
		void hacerSonido() {
			cout << "Guau!" << endl;
		}
	};

	class gato : public Animal {
	public:
		void hacerSonido() {
			cout << "Miau!" << endl;
		}
	};

	class vaca : public Animal {
	public:
		void hacerSonido() {
			cout << "Muuuu!" << endl;
		}
	};