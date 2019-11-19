#include "dog.h"
Dog::Dog(void) :itsAge(1) //constructor 
{
	cout << "Dog constructor..." << endl;
}
Dog::~Dog(void)//destructor
{
	cout << "Dog destructor..." << endl;
}
void Dog::Move() const //virtual methods
{
	cout << "Dog moves a step!" << endl;
}
void Dog::Speak() const//virtual methods
{
	cout << "What does a dog speak? Woof!" << endl;
}