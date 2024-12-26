#pragma once
#include "Animal.h" 
class Cow : public Animal {
public:
	Cow(string name);
	~Cow();

public:
	void MakeSound();
};