#include "SCAS.h"
int CSCAS::my_init(void *p)
{
	this->name = "CSCAS";
	this->alias = "SCAS";
	return 0;
}

CSCAS::CSCAS()
{
	this->my_init();
}

CSCAS::~CSCAS()
{

}
