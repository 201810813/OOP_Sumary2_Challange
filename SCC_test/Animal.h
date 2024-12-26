#pragma once
#include<iostream>
using namespace std;
class Animal {
protected:
	string name;
public:
	Animal(string name);
	virtual ~Animal(); // child class will call this destructor	
public:
	virtual void MakeSound() = 0;
};
