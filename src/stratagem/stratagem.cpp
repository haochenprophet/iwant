#include "stratagem.h"
int Cstratagem::my_init(void *p)
{
	this->name = "Cstratagem";
	this->alias = "stratagem";
	return 0;
}

Cstratagem::Cstratagem()
{
	this->my_init();
}

Cstratagem::~Cstratagem()
{

}
