#include "WRFSBASE.h"
int CWRFSBASE::my_init(void *p)
{
	this->name = "CWRFSBASE";
	this->alias = "WRFSBASE";
	return 0;
}

CWRFSBASE::CWRFSBASE()
{
	this->my_init();
}

CWRFSBASE::~CWRFSBASE()
{

}
