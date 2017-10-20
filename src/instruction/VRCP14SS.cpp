#include "VRCP14SS.h"
int CVRCP14SS::my_init(void *p)
{
	this->name = "CVRCP14SS";
	this->alias = "VRCP14SS";
	return 0;
}

CVRCP14SS::CVRCP14SS()
{
	this->my_init();
}

CVRCP14SS::~CVRCP14SS()
{

}
