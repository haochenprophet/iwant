#include "VPCOMPRESSQ.h"
int CVPCOMPRESSQ::my_init(void *p)
{
	this->name = "CVPCOMPRESSQ";
	this->alias = "VPCOMPRESSQ";
	return 0;
}

CVPCOMPRESSQ::CVPCOMPRESSQ()
{
	this->my_init();
}

CVPCOMPRESSQ::~CVPCOMPRESSQ()
{

}
