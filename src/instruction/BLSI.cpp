#include "BLSI.h"
int CBLSI::my_init(void *p)
{
	this->name = "CBLSI";
	this->alias = "BLSI";
	return 0;
}

CBLSI::CBLSI()
{
	this->my_init();
}

CBLSI::~CBLSI()
{

}
