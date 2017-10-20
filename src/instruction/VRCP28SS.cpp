#include "VRCP28SS.h"
int CVRCP28SS::my_init(void *p)
{
	this->name = "CVRCP28SS";
	this->alias = "VRCP28SS";
	return 0;
}

CVRCP28SS::CVRCP28SS()
{
	this->my_init();
}

CVRCP28SS::~CVRCP28SS()
{

}
