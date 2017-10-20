#include "PMINUW.h"
int CPMINUW::my_init(void *p)
{
	this->name = "CPMINUW";
	this->alias = "PMINUW";
	return 0;
}

CPMINUW::CPMINUW()
{
	this->my_init();
}

CPMINUW::~CPMINUW()
{

}
