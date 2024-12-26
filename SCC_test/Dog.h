#pragma once
#include "Animal.h"
class Dog : public Animal {
public:
	Dog(string name);
	~Dog();

public:
	void MakeSound();
};