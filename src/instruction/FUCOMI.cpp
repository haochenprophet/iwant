#include "FUCOMI.h"
int CFUCOMI::my_init(void *p)
{
	this->name = "CFUCOMI";
	this->alias = "FUCOMI";
	return 0;
}

CFUCOMI::CFUCOMI()
{
	this->my_init();
}

CFUCOMI::~CFUCOMI()
{

}
