#include "istring.h"
int Cistring::my_init(void *p)
{
	this->name = "Cistring";
	this->alias = "istring";
	return 0;
}

Cistring::Cistring()
{
	this->my_init();
}

Cistring::~Cistring()
{

}
