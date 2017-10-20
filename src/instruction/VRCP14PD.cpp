#include "VRCP14PD.h"
int CVRCP14PD::my_init(void *p)
{
	this->name = "CVRCP14PD";
	this->alias = "VRCP14PD";
	return 0;
}

CVRCP14PD::CVRCP14PD()
{
	this->my_init();
}

CVRCP14PD::~CVRCP14PD()
{

}
