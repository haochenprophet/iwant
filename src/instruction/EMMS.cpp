#include "EMMS.h"
int CEMMS::my_init(void *p)
{
	this->name = "CEMMS";
	this->alias = "EMMS";
	return 0;
}

CEMMS::CEMMS()
{
	this->my_init();
}

CEMMS::~CEMMS()
{

}
