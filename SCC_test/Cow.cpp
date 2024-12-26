#include "Cow.h"

Cow::Cow(string name) : Animal(name){
	cout << "소 들어가유" << endl;
}

void Cow::MakeSound() {
	cout << "음메에에에에에에엥" << endl;
}

Cow::~Cow() {
	cout << "소 나가유" << endl;
}