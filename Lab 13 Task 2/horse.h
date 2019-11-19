#include <iostream>
#include "mammal.h"
using namespace std;
class Horse: public Mammal
{
public:
	Horse(void);
	~Horse(void);
	virtual void Move() const;
	virtual void Speak() const;
protected:
	int itsAge;
};

