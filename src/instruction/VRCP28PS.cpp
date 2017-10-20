#include "VRCP28PS.h"
int CVRCP28PS::my_init(void *p)
{
	this->name = "CVRCP28PS";
	this->alias = "VRCP28PS";
	return 0;
}

CVRCP28PS::CVRCP28PS()
{
	this->my_init();
}

CVRCP28PS::~CVRCP28PS()
{

}
