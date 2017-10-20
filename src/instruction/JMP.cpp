#include "JMP.h"
int CJMP::my_init(void *p)
{
	this->name = "CJMP";
	this->alias = "JMP";
	return 0;
}

CJMP::CJMP()
{
	this->my_init();
}

CJMP::~CJMP()
{

}
