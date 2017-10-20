#include "VRNDSCALESS.h"
int CVRNDSCALESS::my_init(void *p)
{
	this->name = "CVRNDSCALESS";
	this->alias = "VRNDSCALESS";
	return 0;
}

CVRNDSCALESS::CVRNDSCALESS()
{
	this->my_init();
}

CVRNDSCALESS::~CVRNDSCALESS()
{

}
