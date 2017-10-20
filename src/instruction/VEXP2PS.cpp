#include "VEXP2PS.h"
int CVEXP2PS::my_init(void *p)
{
	this->name = "CVEXP2PS";
	this->alias = "VEXP2PS";
	return 0;
}

CVEXP2PS::CVEXP2PS()
{
	this->my_init();
}

CVEXP2PS::~CVEXP2PS()
{

}
