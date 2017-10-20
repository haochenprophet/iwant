#include "FDIVRP.h"
int CFDIVRP::my_init(void *p)
{
	this->name = "CFDIVRP";
	this->alias = "FDIVRP";
	return 0;
}

CFDIVRP::CFDIVRP()
{
	this->my_init();
}

CFDIVRP::~CFDIVRP()
{

}
