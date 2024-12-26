#include "Dog.h"

Dog::Dog(string name ): Animal(name)
{
	cout << "강아지 들어가유" << endl;
}

void Dog::MakeSound() {
	cout << "왈왈!! 와르라라랄랄!!" << endl;
}

Dog::~Dog() {
	cout << "강아지 사라져유" << endl;
}