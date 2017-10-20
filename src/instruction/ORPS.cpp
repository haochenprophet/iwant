#include "ORPS.h"
int CORPS::my_init(void *p)
{
	this->name = "CORPS";
	this->alias = "ORPS";
	return 0;
}

CORPS::CORPS()
{
	this->my_init();
}

CORPS::~CORPS()
{

}
