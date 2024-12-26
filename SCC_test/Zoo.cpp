#include "Zoo.h"

Zoo::Zoo() {
	count = 0;
	for (int i = 0; i < 10; ++i) {
		animals[i] = nullptr; // 배열을 null로 초기화
	}
}

Zoo::~Zoo()
{
	for (int i = 0; i < count; ++i) {
		if (animals[i] != nullptr) {
			delete animals[i];
			animals[i] = nullptr; // 안전을 위해 null 처리
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
		cout << "더이상 추가 할 수 없어요, 동물을 돌려보낼게요" << endl;
		delete animal;
	}
}