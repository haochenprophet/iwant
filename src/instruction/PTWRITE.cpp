#include "PTWRITE.h"
int CPTWRITE::my_init(void *p)
{
	this->name = "CPTWRITE";
	this->alias = "PTWRITE";
	return 0;
}

CPTWRITE::CPTWRITE()
{
	this->my_init();
}

CPTWRITE::~CPTWRITE()
{

}
