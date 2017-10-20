#include "VPMASKMOV.h"
int CVPMASKMOV::my_init(void *p)
{
	this->name = "CVPMASKMOV";
	this->alias = "VPMASKMOV";
	return 0;
}

CVPMASKMOV::CVPMASKMOV()
{
	this->my_init();
}

CVPMASKMOV::~CVPMASKMOV()
{

}
