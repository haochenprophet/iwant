#include "SFENCE.h"
int CSFENCE::my_init(void *p)
{
	this->name = "CSFENCE";
	this->alias = "SFENCE";
	return 0;
}

CSFENCE::CSFENCE()
{
	this->my_init();
}

CSFENCE::~CSFENCE()
{

}
