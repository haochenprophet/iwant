#include "LLDT.h"
int CLLDT::my_init(void *p)
{
	this->name = "CLLDT";
	this->alias = "LLDT";
	return 0;
}

CLLDT::CLLDT()
{
	this->my_init();
}

CLLDT::~CLLDT()
{

}
