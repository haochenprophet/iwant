#include "VPEXPANDD.h"
int CVPEXPANDD::my_init(void *p)
{
	this->name = "CVPEXPANDD";
	this->alias = "VPEXPANDD";
	return 0;
}

CVPEXPANDD::CVPEXPANDD()
{
	this->my_init();
}

CVPEXPANDD::~CVPEXPANDD()
{

}
