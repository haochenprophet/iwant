#include "LSL.h"
int CLSL::my_init(void *p)
{
	this->name = "CLSL";
	this->alias = "LSL";
	return 0;
}

CLSL::CLSL()
{
	this->my_init();
}

CLSL::~CLSL()
{

}
