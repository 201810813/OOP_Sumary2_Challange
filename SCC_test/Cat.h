#pragma once
#include "Animal.h" 
class Cat : public Animal {
public:
	Cat(string name);
	~Cat();
	void MakeSound();
};