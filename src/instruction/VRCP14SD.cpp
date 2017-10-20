#include "VRCP14SD.h"
int CVRCP14SD::my_init(void *p)
{
	this->name = "CVRCP14SD";
	this->alias = "VRCP14SD";
	return 0;
}

CVRCP14SD::CVRCP14SD()
{
	this->my_init();
}

CVRCP14SD::~CVRCP14SD()
{

}
