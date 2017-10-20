#include "VPCONFLICTQ.h"
int CVPCONFLICTQ::my_init(void *p)
{
	this->name = "CVPCONFLICTQ";
	this->alias = "VPCONFLICTQ";
	return 0;
}

CVPCONFLICTQ::CVPCONFLICTQ()
{
	this->my_init();
}

CVPCONFLICTQ::~CVPCONFLICTQ()
{

}
