#include "VRCP14PS.h"
int CVRCP14PS::my_init(void *p)
{
	this->name = "CVRCP14PS";
	this->alias = "VRCP14PS";
	return 0;
}

CVRCP14PS::CVRCP14PS()
{
	this->my_init();
}

CVRCP14PS::~CVRCP14PS()
{

}
