#include "big_brackets.h"
int Cbig_brackets::my_init(void *p)
{
	this->name = "Cbig_brackets";
	this->alias = "big_brackets";
	return 0;
}

Cbig_brackets::Cbig_brackets()
{
	this->my_init();
}

Cbig_brackets::~Cbig_brackets()
{

}
