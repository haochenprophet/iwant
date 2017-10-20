#include "dictionary.h"
int Cdictionary::my_init(void *p)
{
	this->name = "Cdictionary";
	this->alias = "dictionary";
	return 0;
}

Cdictionary::Cdictionary()
{
	this->my_init();
}

Cdictionary::~Cdictionary()
{

}
