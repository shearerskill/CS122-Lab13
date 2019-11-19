#include "horse.h"
Horse::Horse(void) :itsAge(1) //constructor 
{
	cout << "Horse constructor..." << endl;
}
Horse::~Horse(void)//destructor
{
	cout << "Horse destructor..." << endl;
}
void Horse::Move() const //virtual methods
{
	cout << "Horse moves a step!" << endl;
}
void Horse::Speak() const//virtual methods
{
	cout << "What does a horse speak? Neigh!" << endl;
}
