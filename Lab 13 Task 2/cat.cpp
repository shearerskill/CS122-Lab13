#include "cat.h"
Cat::Cat(void) :itsAge(1) //constructor 
{
	cout << "Cat constructor..." << endl;
}
Cat::~Cat(void)//destructor
{
	cout << "Cat destructor..." << endl;
}
void Cat::Move() const //virtual methods
{
	cout << "Cat moves a step!" << endl;
}
void Cat::Speak() const//virtual methods
{
	cout << "What does a cat speak? Meow!" << endl;
}
