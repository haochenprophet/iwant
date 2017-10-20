#include "PSRLQ.h"
int CPSRLQ::my_init(void *p)
{
	this->name = "CPSRLQ";
	this->alias = "PSRLQ";
	return 0;
}

CPSRLQ::CPSRLQ()
{
	this->my_init();
}

CPSRLQ::~CPSRLQ()
{

}
