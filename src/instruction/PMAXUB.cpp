#include "PMAXUB.h"
int CPMAXUB::my_init(void *p)
{
	this->name = "CPMAXUB";
	this->alias = "PMAXUB";
	return 0;
}

CPMAXUB::CPMAXUB()
{
	this->my_init();
}

CPMAXUB::~CPMAXUB()
{

}
