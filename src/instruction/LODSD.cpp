#include "LODSD.h"
int CLODSD::my_init(void *p)
{
	this->name = "CLODSD";
	this->alias = "LODSD";
	return 0;
}

CLODSD::CLODSD()
{
	this->my_init();
}

CLODSD::~CLODSD()
{

}
