#include <iostream>
#include "Zoo.h"
#include "Cat.h"
#include "Cow.h"
#include "Dog.h"
#include <cstdlib>
#include <ctime>
#include <random>


using namespace std;


Animal* createRandomAnimal() {
	int num = rand() % 3;
	if (num == 0) {
		Dog* dog = new Dog("������");
		return dog;
	}
	else if (num == 1) {
		Cat* cat = new Cat("�����");
		return cat;
	}
	else {
		Cow* cow = new Cow("��");
		return cow;
	}

}
//
int main() {
	Zoo zoo;
	string chat = " ";
	cout << "����� �������� �����߽��ϴ�.\n���ϴ� �޴��� �����ϼ���." << endl;
	while (chat != "-1") {
		cout << "1.���� �����߰�\n2. �����Ҹ� ���\n-1. ����.\n" << endl;;
		cin >> chat;
		if (chat == "-1") {

		}
		else if (chat == "1") {
			zoo.addAnimal(createRandomAnimal());
		}
		else if (chat == "2") {
			zoo.performAction();
		}
		else { cout << "�߸� �����ϼ̽��ϴ�.\n" << endl; }
	}
	return 0;
}
