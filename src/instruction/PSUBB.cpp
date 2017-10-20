#include "PSUBB.h"
int CPSUBB::my_init(void *p)
{
	this->name = "CPSUBB";
	this->alias = "PSUBB";
	return 0;
}

CPSUBB::CPSUBB()
{
	this->my_init();
}

CPSUBB::~CPSUBB()
{

}
