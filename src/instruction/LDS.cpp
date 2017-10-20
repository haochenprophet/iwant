#include "LDS.h"
int CLDS::my_init(void *p)
{
	this->name = "CLDS";
	this->alias = "LDS";
	return 0;
}

CLDS::CLDS()
{
	this->my_init();
}

CLDS::~CLDS()
{

}
