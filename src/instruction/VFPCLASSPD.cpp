#include "VFPCLASSPD.h"
int CVFPCLASSPD::my_init(void *p)
{
	this->name = "CVFPCLASSPD";
	this->alias = "VFPCLASSPD";
	return 0;
}

CVFPCLASSPD::CVFPCLASSPD()
{
	this->my_init();
}

CVFPCLASSPD::~CVFPCLASSPD()
{

}
