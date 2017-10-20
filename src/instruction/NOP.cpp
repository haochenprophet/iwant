#include "NOP.h"
int CNOP::my_init(void *p)
{
	this->name = "CNOP";
	this->alias = "NOP";
	return 0;
}

CNOP::CNOP()
{
	this->my_init();
}

CNOP::~CNOP()
{

}
