#include "Cat.h"

Cat::Cat(string name) : Animal(name)
{
	cout << "����� ����" << endl;
}

void Cat::MakeSound() {
	cout << "�̾߾ƾƾƾӿ�����" << endl;
}

Cat::~Cat() {
	cout << "����� ������" << endl;
}