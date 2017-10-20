#include "REPE.h"
int CREPE::my_init(void *p)
{
	this->name = "CREPE";
	this->alias = "REPE";
	return 0;
}

CREPE::CREPE()
{
	this->my_init();
}

CREPE::~CREPE()
{

}
