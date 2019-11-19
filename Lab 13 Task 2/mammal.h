#include <iostream>
#pragma once
using namespace std;
class Mammal
{
public:
	Mammal(void);
	~Mammal(void);
	virtual void Move() const;
	virtual void Speak() const;
protected:
	int itsAge;
};
