#include "concept.h"
int Cconcept::my_init(void *p)
{
	this->name = "Cconcept";
	this->alias = "concept";
	return 0;
}

Cconcept::Cconcept()
{
	this->my_init();
}
