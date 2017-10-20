#include "PMOVSX.h"
int CPMOVSX::my_init(void *p)
{
	this->name = "CPMOVSX";
	this->alias = "PMOVSX";
	return 0;
}

CPMOVSX::CPMOVSX()
{
	this->my_init();
}

CPMOVSX::~CPMOVSX()
{

}
