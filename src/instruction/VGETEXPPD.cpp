#include "VGETEXPPD.h"
int CVGETEXPPD::my_init(void *p)
{
	this->name = "CVGETEXPPD";
	this->alias = "VGETEXPPD";
	return 0;
}

CVGETEXPPD::CVGETEXPPD()
{
	this->my_init();
}

CVGETEXPPD::~CVGETEXPPD()
{

}
