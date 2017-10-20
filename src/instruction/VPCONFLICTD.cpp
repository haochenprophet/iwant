#include "VPCONFLICTD.h"
int CVPCONFLICTD::my_init(void *p)
{
	this->name = "CVPCONFLICTD";
	this->alias = "VPCONFLICTD";
	return 0;
}

CVPCONFLICTD::CVPCONFLICTD()
{
	this->my_init();
}

CVPCONFLICTD::~CVPCONFLICTD()
{

}
