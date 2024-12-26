#pragma once
#include<iostream>
using namespace std;
class Animal {
protected:
	string name;
public:
	Animal(string name);
	virtual ~Animal(); //가상소멸자로 자식들로	
public:
	virtual void MakeSound() = 0;
};
