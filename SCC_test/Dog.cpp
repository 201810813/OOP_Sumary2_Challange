#include "Dog.h"

Dog::Dog(string name ): Animal(name)
{
	cout << "������ ����" << endl;
}

void Dog::MakeSound() {
	cout << "�п�!! �͸�������!!" << endl;
}

Dog::~Dog() {
	cout << "������ �������" << endl;
}