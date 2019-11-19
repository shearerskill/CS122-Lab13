#include <iostream>
#include "mammal.h"
using namespace std;
class Cat: public Mammal
{
public:
	Cat(void);
	~Cat(void);
	virtual void Move() const;
	virtual void Speak() const;
protected:
	int itsAge;
};
