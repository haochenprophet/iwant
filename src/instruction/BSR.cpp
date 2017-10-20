#include "BSR.h"
int CBSR::my_init(void *p)
{
	this->name = "CBSR";
	this->alias = "BSR";
	return 0;
}

CBSR::CBSR()
{
	this->my_init();
}

CBSR::~CBSR()
{

}
