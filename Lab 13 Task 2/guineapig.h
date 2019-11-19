#include <iostream>
#include "mammal.h"
using namespace std;
class GuineaPig: public Mammal
{
public:
	GuineaPig(void);
	~GuineaPig(void);
	virtual void Move() const;
	virtual void Speak() const;
protected:
	int itsAge;
};

