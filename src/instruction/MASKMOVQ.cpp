#include "MASKMOVQ.h"
int CMASKMOVQ::my_init(void *p)
{
	this->name = "CMASKMOVQ";
	this->alias = "MASKMOVQ";
	return 0;
}

CMASKMOVQ::CMASKMOVQ()
{
	this->my_init();
}

CMASKMOVQ::~CMASKMOVQ()
{

}
