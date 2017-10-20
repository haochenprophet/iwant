#include "LDDQU.h"
int CLDDQU::my_init(void *p)
{
	this->name = "CLDDQU";
	this->alias = "LDDQU";
	return 0;
}

CLDDQU::CLDDQU()
{
	this->my_init();
}

CLDDQU::~CLDDQU()
{

}
