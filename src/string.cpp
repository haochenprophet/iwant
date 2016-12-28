#include "string.h"
int Cstring::my_init(void *p)
{
	this->name = "Cstring";
	this->alias = "string";
	return 0;
}

Cstring::Cstring()
{
	this->my_init();
}

Cstring::~Cstring()
{

}
