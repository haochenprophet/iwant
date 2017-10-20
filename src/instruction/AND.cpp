#include "AND.h"
int CAND::my_init(void *p)
{
	this->name = "CAND";
	this->alias = "AND";
	return 0;
}

CAND::CAND()
{
	this->my_init();
}

CAND::~CAND()
{

}
