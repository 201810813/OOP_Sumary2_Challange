#include "Cow.h"

Cow::Cow(string name) : Animal(name){
	cout << "�� ����" << endl;
}

void Cow::MakeSound() {
	cout << "���޿�������������" << endl;
}

Cow::~Cow() {
	cout << "�� ������" << endl;
}