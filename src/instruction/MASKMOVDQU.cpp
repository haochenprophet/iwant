#include "MASKMOVDQU.h"
int CMASKMOVDQU::my_init(void *p)
{
	this->name = "CMASKMOVDQU";
	this->alias = "MASKMOVDQU";
	return 0;
}

CMASKMOVDQU::CMASKMOVDQU()
{
	this->my_init();
}

CMASKMOVDQU::~CMASKMOVDQU()
{

}
