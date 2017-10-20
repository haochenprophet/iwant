#include "VRNDSCALEPD.h"
int CVRNDSCALEPD::my_init(void *p)
{
	this->name = "CVRNDSCALEPD";
	this->alias = "VRNDSCALEPD";
	return 0;
}

CVRNDSCALEPD::CVRNDSCALEPD()
{
	this->my_init();
}

CVRNDSCALEPD::~CVRNDSCALEPD()
{

}
