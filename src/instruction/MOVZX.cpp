#include "MOVZX.h"
int CMOVZX::my_init(void *p)
{
	this->name = "CMOVZX";
	this->alias = "MOVZX";
	return 0;
}

CMOVZX::CMOVZX()
{
	this->my_init();
}

CMOVZX::~CMOVZX()
{

}
