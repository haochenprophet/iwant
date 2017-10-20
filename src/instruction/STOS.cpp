#include "STOS.h"
int CSTOS::my_init(void *p)
{
	this->name = "CSTOS";
	this->alias = "STOS";
	return 0;
}

CSTOS::CSTOS()
{
	this->my_init();
}

CSTOS::~CSTOS()
{

}
