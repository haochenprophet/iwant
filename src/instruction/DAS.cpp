#include "DAS.h"
int CDAS::my_init(void *p)
{
	this->name = "CDAS";
	this->alias = "DAS";
	return 0;
}

CDAS::CDAS()
{
	this->my_init();
}

CDAS::~CDAS()
{

}
