#include "VPTERNLOGQ.h"
int CVPTERNLOGQ::my_init(void *p)
{
	this->name = "CVPTERNLOGQ";
	this->alias = "VPTERNLOGQ";
	return 0;
}

CVPTERNLOGQ::CVPTERNLOGQ()
{
	this->my_init();
}

CVPTERNLOGQ::~CVPTERNLOGQ()
{

}
