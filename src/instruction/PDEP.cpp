#include "PDEP.h"
int CPDEP::my_init(void *p)
{
	this->name = "CPDEP";
	this->alias = "PDEP";
	return 0;
}

CPDEP::CPDEP()
{
	this->my_init();
}

CPDEP::~CPDEP()
{

}
