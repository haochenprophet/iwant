#include "VRCP28SD.h"
int CVRCP28SD::my_init(void *p)
{
	this->name = "CVRCP28SD";
	this->alias = "VRCP28SD";
	return 0;
}

CVRCP28SD::CVRCP28SD()
{
	this->my_init();
}

CVRCP28SD::~CVRCP28SD()
{

}
