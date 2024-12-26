#include "Animal.h"

Animal::Animal(string name) : name(name)
{
	cout << "동물 들어가유" << endl;
}

void Animal::MakeSound()
{
	cout << "울어유" << endl;
}

Animal::~Animal() {
	cout << "동물 사라져유" << endl;
}