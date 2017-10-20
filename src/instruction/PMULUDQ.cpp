#include "PMULUDQ.h"
int CPMULUDQ::my_init(void *p)
{
	this->name = "CPMULUDQ";
	this->alias = "PMULUDQ";
	return 0;
}

CPMULUDQ::CPMULUDQ()
{
	this->my_init();
}

CPMULUDQ::~CPMULUDQ()
{

}
