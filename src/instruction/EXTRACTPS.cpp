#include "EXTRACTPS.h"
int CEXTRACTPS::my_init(void *p)
{
	this->name = "CEXTRACTPS";
	this->alias = "EXTRACTPS";
	return 0;
}

CEXTRACTPS::CEXTRACTPS()
{
	this->my_init();
}

CEXTRACTPS::~CEXTRACTPS()
{

}
