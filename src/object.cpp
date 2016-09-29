#include "object.h"

Object::Object()
{
	this->name = "Object";
}

void Object::myName()
{
	cout << this->name << endl;
}

bool Object::isMe(string identifier)
{
	return this->name == identifier;
}

void * Object::i_am_here()
{
	return this;
}

void * Object::who_am_i()
{
	this->myName();
	return this;
}
