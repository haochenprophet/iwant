#include "company.h"
int Ccompany::my_init(void *p)
{
	this->name = "Ccompany";
	this->alias = "company";
	return 0;
}

Ccompany::Ccompany()
{
	this->my_init();
}

Ccompany::~Ccompany()
{

}
