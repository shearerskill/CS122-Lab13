#include "guineapig.h"
GuineaPig::GuineaPig(void) :itsAge(1) //constructor 
{
	cout << "Guinea Pig constructor..." << endl;
}
GuineaPig::~GuineaPig(void)//destructor
{
	cout << "Guinea Pig destructor..." << endl;
}
void GuineaPig::Move() const //virtual methods
{
	cout << "Guinea Pig moves a step!" << endl;
}
void GuineaPig::Speak() const//virtual methods
{
	cout << "What does a GuineaPig speak? Weep Weep!" << endl;
}
