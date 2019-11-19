#include "mammal.h"
using namespace std;
class Dog: public Mammal
{
public:
	Dog(void);
	~Dog(void);
	virtual void Move() const;
	virtual void Speak() const;
protected:
	int itsAge;
};