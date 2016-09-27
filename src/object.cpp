#include "object.h"

Object::Object()
{
	this->name = "Object";
}

void Object::myName()
{
	cout << this->name << endl;
}

void * Object::getClass()
{
	return this;
}