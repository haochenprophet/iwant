#include "WRGSBASE.h"
int CWRGSBASE::my_init(void *p)
{
	this->name = "CWRGSBASE";
	this->alias = "WRGSBASE";
	return 0;
}

CWRGSBASE::CWRGSBASE()
{
	this->my_init();
}

CWRGSBASE::~CWRGSBASE()
{

}
