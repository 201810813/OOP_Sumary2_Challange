#include "Cat.h"

Cat::Cat(string name) : Animal(name)
{
	cout << "고양이 들어가유" << endl;
}

void Cat::MakeSound() {
	cout << "미야아아아앙오오옹" << endl;
}

Cat::~Cat() {
	cout << "고양이 나가유" << endl;
}