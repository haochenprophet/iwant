#include "OUT.h"
int COUT::my_init(void *p)
{
	this->name = "COUT";
	this->alias = "OUT";
	return 0;
}

COUT::COUT()
{
	this->my_init();
}

COUT::~COUT()
{

}
