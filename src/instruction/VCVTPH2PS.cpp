#include "VCVTPH2PS.h"
int CVCVTPH2PS::my_init(void *p)
{
	this->name = "CVCVTPH2PS";
	this->alias = "VCVTPH2PS";
	return 0;
}

CVCVTPH2PS::CVCVTPH2PS()
{
	this->my_init();
}

CVCVTPH2PS::~CVCVTPH2PS()
{

}
