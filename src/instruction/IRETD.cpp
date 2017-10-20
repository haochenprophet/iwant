#include "IRETD.h"
int CIRETD::my_init(void *p)
{
	this->name = "CIRETD";
	this->alias = "IRETD";
	return 0;
}

CIRETD::CIRETD()
{
	this->my_init();
}

CIRETD::~CIRETD()
{

}
