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
		Dog* dog = new Dog("강아지");
		return dog;
	}
	else if (num == 1) {
		Cat* cat = new Cat("고양이");
		return cat;
	}
	else {
		Cow* cow = new Cow("소");
		return cow;
	}

}
//
int main() {
	Zoo zoo;
	string chat = " ";
	cout << "당신은 동물원을 개장했습니다.\n원하는 메뉴를 선택하세여." << endl;
	while (chat != "-1") {
		cout << "1.동물 랜덤추가\n2. 울음소리 듣기\n-1. 종료.\n" << endl;;
		cin >> chat;
		if (chat == "-1") {

		}
		else if (chat == "1") {
			zoo.addAnimal(createRandomAnimal());
		}
		else if (chat == "2") {
			zoo.performAction();
		}
		else { cout << "잘못 선택하셨습니다.\n" << endl; }
	}
	return 0;
}
