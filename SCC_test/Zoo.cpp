#include "Zoo.h"

Zoo::Zoo() {
	count = 0;
	for (int i = 0; i < 10; ++i) {
		animals[i] = nullptr; // �迭�� null�� �ʱ�ȭ
	}
}

Zoo::~Zoo()
{
	for (int i = 0; i < count; ++i) {
		if (animals[i] != nullptr) {
			delete animals[i];
			animals[i] = nullptr; // ������ ���� null ó��
		}
	}
}

void Zoo::performAction() {
	for (int i = 0; i < count; ++i) {
		animals[i]->MakeSound();
	}
}
void Zoo::addAnimal(Animal* animal) {
	if (count < 10) {
		animals[count++] = animal;	
	}
	else {
		cout << "���̻� �߰� �� �� �����, ������ ���������Կ�" << endl;
		delete animal;
	}
}