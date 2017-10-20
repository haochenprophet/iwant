#include "FCHS.h"
int CFCHS::my_init(void *p)
{
	this->name = "CFCHS";
	this->alias = "FCHS";
	return 0;
}

CFCHS::CFCHS()
{
	this->my_init();
}

CFCHS::~CFCHS()
{

}
