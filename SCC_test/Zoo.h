#pragma once

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"
#include <vector>
class Zoo {
private:
	int count;
	Animal* animals[10];
public:
	Zoo();
	~Zoo();
public:
	void performAction();
	void addAnimal(Animal*);
};