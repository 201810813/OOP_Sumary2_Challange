#include "Animal.h"

Animal::Animal(string name) : name(name)
{
	cout << "���� ����" << endl;
}

void Animal::MakeSound()
{
	cout << "�����" << endl;
}

Animal::~Animal() {
	cout << "���� �������" << endl;
}