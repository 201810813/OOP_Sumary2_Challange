#pragma once
#include<iostream>
using namespace std;
class Animal {
protected:
	string name;
public:
	Animal(string name);
	virtual ~Animal(); //����Ҹ��ڷ� �ڽĵ��	
public:
	virtual void MakeSound() = 0;
};
