#include "source.h"
int Csource::my_init(void *p)
{
	this->name = "Csource";
	this->alias = "source";
	return 0;
}

Csource::Csource()
{
	this->my_init();
}

Csource::~Csource()
{

}
