#include "FPATAN.h"
int CFPATAN::my_init(void *p)
{
	this->name = "CFPATAN";
	this->alias = "FPATAN";
	return 0;
}

CFPATAN::CFPATAN()
{
	this->my_init();
}

CFPATAN::~CFPATAN()
{

}
