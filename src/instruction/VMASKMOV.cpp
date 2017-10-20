#include "VMASKMOV.h"
int CVMASKMOV::my_init(void *p)
{
	this->name = "CVMASKMOV";
	this->alias = "VMASKMOV";
	return 0;
}

CVMASKMOV::CVMASKMOV()
{
	this->my_init();
}

CVMASKMOV::~CVMASKMOV()
{

}
