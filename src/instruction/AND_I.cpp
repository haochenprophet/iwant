#include "AND_I.h"
int CAND_I::my_init(void *p)
{
	this->name = "CAND_I";
	this->alias = "AND";
	return 0;
}

CAND_I::CAND_I()
{
	this->my_init();
}

CAND_I::~CAND_I()
{

}
